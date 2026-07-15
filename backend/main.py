import threading

import uvicorn
import rclpy
import asyncio

from fastapi import FastAPI

from backend.api.api_health import router as health_router
from backend.api.api_telemetry import router as telemetry_router
from backend.api.api_mission import router as mission_router
from backend.api.api_target_state import router as target_state_router


from backend.websocket.ws_router.ws_telemetry import router as telemetry_ws_router
from backend.websocket.ws_router.ws_detection import router as detection_ws_router
from backend.websocket.ws_router.ws_track import router as track_ws_router
from backend.websocket.ws_router.ws_target_state import router as target_state_ws_router
from backend.websocket.ws_router.ws_guidance import router as guidance_ws_router
from backend.websocket.ws_router.ws_control import router as control_ws_router


from backend.config.backend_config import BackendConfig
from backend.ros2_bridge.bridge_pipeline import BridgePipeline
from backend.websocket.ws_broadcaster import WSBroadcaster

app = FastAPI(
    title=BackendConfig.APP_NAME,
    description=BackendConfig.APP_DESCRIPTION,
    version=BackendConfig.API_VERSION,
    debug=BackendConfig.DEBUG,
)

bridge_node: BridgePipeline | None = None

# REST APIs
app.include_router(health_router)
app.include_router(telemetry_router)
app.include_router(mission_router)
app.include_router(target_state_router)

# WebSockets
app.include_router(telemetry_ws_router)
app.include_router(target_state_ws_router)
app.include_router(detection_ws_router)
app.include_router(track_ws_router)
app.include_router(guidance_ws_router)
app.include_router(control_ws_router)


@app.on_event("startup")
async def startup():

    global bridge_node

    if not rclpy.ok():
        rclpy.init()

    WSBroadcaster.set_event_loop(asyncio.get_running_loop())

    bridge_node = BridgePipeline()

    threading.Thread(
        target=rclpy.spin,
        args=(bridge_node,),
        daemon=True,
    ).start()

    print("ROS2 Bridge Started")


@app.on_event("shutdown")
def shutdown():

    global bridge_node

    if bridge_node is not None:

        bridge_node.destroy_node()

        bridge_node = None

    if rclpy.ok():

        rclpy.shutdown()

    print("ROS2 Bridge Stopped")


if __name__ == "__main__":

    uvicorn.run(
        app,
        host=BackendConfig.HOST,
        port=BackendConfig.PORT,
        reload=False,  # Keep False while using ROS2
    )
