from collections import deque

from dash import Input
from dash import Output
from dash import no_update

import plotly.graph_objects as go

from frontend.dashboard_connection import dashboard_socket

LOCK_THRESHOLD = 20
MAX_HISTORY = 60

history_time = deque(maxlen=MAX_HISTORY)
history_error_x = deque(maxlen=MAX_HISTORY)
history_error_y = deque(maxlen=MAX_HISTORY)

sample_index = 0


def register_image_callback(app):

    @app.callback(
        Output("image-error-graph", "figure"),
        Input("dashboard-update", "n_intervals"),
    )
    def update_image_error(_):

        global sample_index

        data = dashboard_socket.get("guidance")

        if not data:
            return no_update

        guidance = data.get("data", {})

        history_time.append(sample_index)

        history_error_x.append(guidance.get("error_x", 0.0))

        history_error_y.append(guidance.get("error_y", 0.0))

        sample_index += 1

        figure = go.Figure()
        # Error X
        figure.add_trace(
            go.Scatter(
                x=list(history_time),
                y=list(history_error_x),
                mode="lines",
                name="Error X",
                line=dict(
                    color="red",
                    width=2,
                ),
            )
        )
        # Error Y
        figure.add_trace(
            go.Scatter(
                x=list(history_time),
                y=list(history_error_y),
                mode="lines",
                name="Error Y",
                line=dict(
                    color="cyan",
                    width=2,
                ),
            )
        )
        # + Lock Threshold
        figure.add_trace(
            go.Scatter(
                x=list(history_time),
                y=[LOCK_THRESHOLD] * len(history_time),
                mode="lines",
                name="+Lock Threshold",
                line=dict(
                    color="yellow",
                    dash="dash",
                    width=2,
                ),
            )
        )
        # - Lock Threshold
        figure.add_trace(
            go.Scatter(
                x=list(history_time),
                y=[-LOCK_THRESHOLD] * len(history_time),
                mode="lines",
                name="-Lock Threshold",
                line=dict(
                    color="yellow",
                    dash="dash",
                    width=2,
                ),
            )
        )
        # Layout
        figure.update_layout(
            template="plotly_dark",
            # Panel title already exists
            title=None,
            margin=dict(
                l=15,
                r=10,
                t=5,
                b=20,
            ),
            xaxis=dict(
                title="Time (s)",
                automargin=True,
                showgrid=True,
                zeroline=False,
            ),
            yaxis=dict(
                title="Pixels Error",
                automargin=True,
                showgrid=True,
                zeroline=False,
            ),
            legend=dict(
                orientation="v",
                x=0.99,
                y=0.99,
                xanchor="right",
                yanchor="top",
                bgcolor="rgba(0,0,0,0.35)",
                bordercolor="gray",
                borderwidth=1,
                font=dict(size=11),
            ),
            autosize=True,
        )

        return figure
