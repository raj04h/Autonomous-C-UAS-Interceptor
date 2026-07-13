from fastapi import APIRouter
from fastapi import WebSocket
from fastapi import WebSocketDisconnect

from backend.websocket.ws_connection import ws_connection

router = APIRouter(
    tags=["WebSocket"],
)


@router.websocket("/ws/control")
async def telemetry_websocket(websocket: WebSocket) -> None:

    await ws_connection.connect("control", websocket)

    try:
        while True:
            await websocket.receive_text()

    except WebSocketDisconnect:
        ws_connection.disconnect("control", websocket)

    except Exception as e:
        print(f"[WS] Error: {e}")
        ws_connection.disconnect("control", websocket)
