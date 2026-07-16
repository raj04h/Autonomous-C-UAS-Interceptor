import os

from dotenv import load_dotenv

load_dotenv()


class BackendConfig:

    # Server

    APP_NAME = "UAS Backend Server"
    APP_DESCRIPTION = "Backend services for the Counter-UAS Autonomous Interceptor."

    API_VERSION = "1.0.0"

    HOST = os.getenv("BACKEND_HOST", "0.0.0.0")
    PORT = int(os.getenv("BACKEND_PORT", "8000"))

    DEBUG = os.getenv("BACKEND_DEBUG", "True").lower() == "true"

    # Logging

    LOG_LEVEL = os.getenv("LOG_LEVEL", "INFO")

    # WebSocket

    WS_ROUTE = "/ws/telemetry"

    UPDATE_RATE = int(os.getenv("UPDATE_RATE", "20"))

    PIPELINE_PERIOD = float(os.getenv("PIPELINE_PERIOD", "0.05"))
