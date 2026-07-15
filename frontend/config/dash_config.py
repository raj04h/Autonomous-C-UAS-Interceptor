class DashConfig:

    APP_NAME = "Counter UAS Monitoring Panel"
    HOST = "0.0.0.0"
    PORT = 8050
    DEBUG = True
    TITLE = "Autonomous-C-UAS-Interceptor"

    TELEMETRY_WS = "ws://127.0.0.1:8000/ws/telemetry"
    GUIDANCE_WS = "ws://127.0.0.1:8000/ws/guidance"
    CONTROL_WS = "ws://127.0.0.1:8000/ws/control"
    TARGET_STATE_WS = "ws://127.0.0.1:8000/ws/target_state"
    TRACKING_WS = "ws://127.0.0.1:8000/ws/track"
