import os

from dotenv import load_dotenv

load_dotenv()


class DashConfig:

    # Dashboard

    APP_NAME = "Counter UAS Monitoring Panel"

    HOST = os.getenv("FRONTEND_HOST", "0.0.0.0")
    PORT = int(os.getenv("FRONTEND_PORT", "8050"))

    DEBUG = os.getenv("FRONTEND_DEBUG", "True").lower() == "true"

    TITLE = "Autonomous-C-UAS-Interceptor"

    # Backend URL

    BACKEND_URL = os.getenv("BACKEND_URL", "127.0.0.1:8000")

    # WebSocket Endpoints

    TELEMETRY_WS = f"ws://{BACKEND_URL}/ws/telemetry"
    GUIDANCE_WS = f"ws://{BACKEND_URL}/ws/guidance"
    CONTROL_WS = f"ws://{BACKEND_URL}/ws/control"
    TARGET_STATE_WS = f"ws://{BACKEND_URL}/ws/target_state"
    TRACKING_WS = f"ws://{BACKEND_URL}/ws/track"
