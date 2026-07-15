from dash import dcc
import plotly.graph_objects as go


def create_target_thrust_graph():
    """
    Target Lock vs Thrust Graph Component
    """

    return dcc.Graph(
        id="target-graph",
        figure=go.Figure(),
        config={
            "displaylogo": False,
            "displayModeBar": False,
            "responsive": True,
        },
        style={
            "width": "100%",
            "height": "100%",
        },
    )
