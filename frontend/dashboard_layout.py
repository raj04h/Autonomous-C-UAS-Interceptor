from dash import dcc
from dash import html

from frontend.components.controller_graph import create_controller_graph
from frontend.components.image_error_graph import create_image_error_graph
from frontend.components.target_thrust_graph import create_target_thrust_graph
from frontend.components.status_panel import create_status_panel


def create_dashboard_layout():
    """
    Counter-UAS Dashboard Layout
    """

    return html.Div(
        className="dashboard",
        children=[
            # Shared Store
            dcc.Store(
                id="telemetry-store",
                storage_type="memory",
            ),
            # Refresh Timer
            dcc.Interval(
                id="dashboard-update",
                interval=300,
                n_intervals=0,
            ),
            # Header
            html.Div(
                className="dashboard-header",
                children=[
                    html.H1(
                        "Counter UAS Monitoring Panel",
                        className="dashboard-title",
                    )
                ],
            ),
            # Main Graph
            html.Div(
                id="controller-panel",
                className="dashboard-panel",
                children=[
                    create_controller_graph(),
                ],
            ),
            # Image Error
            html.Div(
                id="image-panel",
                className="dashboard-panel",
                children=[
                    create_image_error_graph(),
                ],
            ),
            # Target Lock
            html.Div(
                id="target-panel",
                className="dashboard-panel",
                children=[
                    create_target_thrust_graph(),
                ],
            ),
            # Status
            html.Div(
                id="status-panel",
                className="dashboard-panel",
                children=[
                    create_status_panel(),
                ],
            ),
        ],
    )
