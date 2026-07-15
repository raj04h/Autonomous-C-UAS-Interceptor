from dash import dcc
import plotly.graph_objects as go


def create_image_error_graph():

    return dcc.Graph(
        id="image-error-graph",
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
