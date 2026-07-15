from collections import deque

from dash import Input
from dash import Output
from dash import no_update

import plotly.graph_objects as go

from frontend.dashboard_connection import dashboard_socket

MAX_HISTORY = 60

history_time = deque(maxlen=MAX_HISTORY)

history_lock = deque(maxlen=MAX_HISTORY)
history_thrust = deque(maxlen=MAX_HISTORY)

sample_index = 0


def register_target_callback(app):

    @app.callback(
        Output("target-graph", "figure"),
        Input("dashboard-update", "n_intervals"),
    )
    def update_target(_):

        global sample_index

        guidance = dashboard_socket.get("guidance")
        control = dashboard_socket.get("control")

        if not guidance or not control:
            return no_update

        guidance_data = guidance.get("data", {})
        control_data = control.get("data", {})

        history_time.append(sample_index)

        history_lock.append(1 if guidance_data.get("target_locked", False) else 0)

        history_thrust.append(control_data.get("collective_thrust", 0.0))

        sample_index += 1

        figure = go.Figure()

       # Target Lock
        figure.add_trace(
            go.Scatter(
                x=list(history_time),
                y=list(history_lock),
                mode="lines",
                line_shape="hv",
                fill="tozeroy",
                name="Target Lock",
                line=dict(
                    color="lime",
                    width=2,
                ),
                yaxis="y1",
            )
        )

       # Collective Thrust
        figure.add_trace(
            go.Scatter(
                x=list(history_time),
                y=list(history_thrust),
                mode="lines",
                name="Collective Thrust",
                line=dict(
                    color="orange",
                    width=2,
                ),
                yaxis="y2",
            )
        )

       # Layout
        figure.update_layout(
            template="plotly_dark",
            title=None,
            margin=dict(
                l=15,
                r=15,
                t=5,
                b=20,
            ),
            xaxis=dict(
                title="Time (s)",
                showgrid=True,
            ),
            yaxis=dict(
                title="Target",
                range=[-0.2, 1.2],
                tickvals=[0, 1],
                ticktext=["Searching", "Locked"],
            ),
            yaxis2=dict(
                title="Thrust",
                overlaying="y",
                side="right",
                showgrid=False,
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
