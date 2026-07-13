from collections import defaultdict
from typing import Dict, List

from fastapi import WebSocket


class WSConnection:
    def __init__(self):
        self.connections: Dict[str, List[WebSocket]] = defaultdict(list)

    # Accept a new WebSocket connection
    async def connect(self, channel: str, websocket: WebSocket) -> None:
        print("CONNECT CALLED")
        await websocket.accept()
        self.connections[channel].append(websocket)

        print(
            f"[WS] Connected | "
            f"Channel: {channel} | "
            f"Clients: {len(self.connections[channel])}"
        )

    # Remove a disconnected WebSocket.
    def disconnect(self, channel:str, websocket: WebSocket) -> None:
        if websocket in self.connections[channel]:

            self.connections[channel].remove(websocket)

        print(
            f"[WS] Disconnected | "
            f"Channel: {channel} | "
            f"Clients: {len(self.connections[channel])}"
        )

    # Send a JSON message to all connected clients.
    async def broadcast(self, channel:str, message:dict)->None:

        disconnected=[]

        for websocket in self.connections[channel]:

            try:
                await websocket.send_json(message)

            except Exception:
                disconnected.append(websocket)

        for websocket in disconnected:
            self.disconnect(channel,websocket)

    # Returns the number of connected clients.
    def connection_count(self,channel: str,) -> int:
        return len(self.connections[channel])

# Shared WebSocket connection manager
ws_connection = WSConnection()
