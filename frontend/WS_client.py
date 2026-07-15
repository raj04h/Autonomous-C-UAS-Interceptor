import json
import threading

from websocket import WebSocketApp

from frontend.config.dash_config import DashConfig


class DashboardWebSocket:
    """
    Dashboard WebSocket Manager
    """

    def __init__(self):

        self.latest = {
            "telemetry": {},
            "guidance": {},
            "control": {},
            "target_state": {},
            "track": {},
        }

        self.clients = {}

    # WebSocket Events
    def on_open(self, ws, channel):

        print(f"[{channel.upper()}] Connected")

    def on_message(self, ws, message, channel):

        try:

            data = json.loads(message)

            self.latest[channel] = data

        except Exception as e:

            print(f"[{channel.upper()}] Message Error : {e}")

    def on_close(self, ws, close_status_code, close_msg, channel):

        print(f"[{channel.upper()}] Disconnected")

    def on_error(self, ws, error, channel):

        print(f"[{channel.upper()}] Error : {error}")

    # Create One Socket
    def _create_socket(self, url: str, channel: str):

        ws = WebSocketApp(
            url,
            on_open=lambda ws: self.on_open(ws, channel),
            on_message=lambda ws, msg: self.on_message(ws, msg, channel),
            on_close=lambda ws, code, msg: self.on_close(
                ws,
                code,
                msg,
                channel,
            ),
            on_error=lambda ws, err: self.on_error(
                ws,
                err,
                channel,
            ),
        )

        threading.Thread(
            target=ws.run_forever,
            daemon=True,
        ).start()

        self.clients[channel] = ws

    # Start All Connections
    def start(self):

        self._create_socket(
            DashConfig.TELEMETRY_WS,
            "telemetry",
        )

        self._create_socket(
            DashConfig.GUIDANCE_WS,
            "guidance",
        )

        self._create_socket(
            DashConfig.CONTROL_WS,
            "control",
        )

        self._create_socket(
            DashConfig.TARGET_STATE_WS,
            "target_state",
        )

        self._create_socket(
            DashConfig.TRACKING_WS,
            "track",
        )
    # Getter
    def get(self, channel: str):

        return self.latest.get(channel, {})
