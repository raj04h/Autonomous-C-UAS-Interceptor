from fastapi import APIRouter, WebSocket, WebSocketDisconnect

from backend.websocket.ws_connection import ws_connection


router= APIRouter(
    tags= ["WebSocket"]
)


@router.websocket("/ws/target_state")
async def websocket_target_state(
    websocket: WebSocket,
):

    await ws_connection.connect("target_state", websocket)

    try:
        while True:
            await websocket.receive_text()

    except WebSocketDisconnect:

        ws_connection.disconnect("target_state", websocket)
