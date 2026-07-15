from dash import Dash

from frontend.config.dash_config import DashConfig
from frontend.dashboard_layout import create_dashboard_layout
from frontend.dashboard_connection import dashboard_socket

from frontend.services.image_error_callback import register_image_callback
from frontend.services.controller_callback import register_controller_callback
from frontend.services.target_thrust_callback import register_target_callback
from frontend.services.status_callback import register_status_callback

def create_app():

    app = Dash(
        __name__,
        title=DashConfig.TITLE,
    )

    app.layout = create_dashboard_layout()
    return app


app = create_app()

register_image_callback(app)
register_controller_callback(app)
register_target_callback(app)
register_status_callback(app)


if __name__ == "__main__":

    # Start WebSocket client
    dashboard_socket.start()

    # Start Dash server
    app.run(
        host=DashConfig.HOST,
        port=DashConfig.PORT,
        debug=DashConfig.DEBUG,
    )
