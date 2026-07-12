class BackendConfig:

    # server
    APP_NAME = "UAS Backend Server"
    APP_DESCRIPTION = "Backend services for the Counter-UAS Autonomous Interceptor."
    API_VERSION = "1.0.0"

    HOST = "0.0.0.0"
    PORT=8000
    DEBUG=True

    # Loging
    LOG_LEVEL='INFO'

    # Websocket
    WS_ROUTE="/ws/telemetry"
    UPDATE_RATE=20

    PIPELINE_PERIOD = 0.05
