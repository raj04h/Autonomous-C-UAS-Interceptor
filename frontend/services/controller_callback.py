from collections import deque

from dash import Input
from dash import Output
from dash import no_update

import plotly.graph_objects as go

from frontend.dashboard_connection import dashboard_socket

# Limit
PITCH_MAX = 0.30
PITCH_MIN = -0.30

YAW_MAX = 1.00
YAW_MIN = -1.00

MAX_HISTORY = 150

# History
history_time = deque(maxlen=MAX_HISTORY)

history_guidance_pitch = deque(maxlen=MAX_HISTORY)
history_guidance_yaw = deque(maxlen=MAX_HISTORY)

history_control_pitch = deque(maxlen=MAX_HISTORY)
history_control_yaw = deque(maxlen=MAX_HISTORY)

sample_index = 0


def register_controller_callback(app):

    @app.callback(
        Output("controller-graph", "figure"),
        Input("dashboard-update", "n_intervals"),
    )
    def update_controller(_):

        global sample_index

        guidance = dashboard_socket.get("guidance")
        control = dashboard_socket.get("control")

        if not guidance or not control:
            return no_update

        guidance_data = guidance.get("data", {})
        control_data = control.get("data", {})

        history_time.append(sample_index)

        history_guidance_pitch.append(guidance_data.get("pitch_command", 0.0))

        history_guidance_yaw.append(guidance_data.get("yaw_command", 0.0))

        history_control_pitch.append(control_data.get("pitch_setpoint", 0.0))

        history_control_yaw.append(control_data.get("yaw_setpoint", 0.0))

        sample_index += 1

        figure = go.Figure()

        # Guidance Pitch

        figure.add_trace(
            go.Scatter(
                x=list(history_time),
                y=list(history_guidance_pitch),
                mode="lines",
                name="Guidance Pitch",
                line=dict(
                    color="orange",
                    width=2,
                ),
            )
        )

        # Controller Pitch

        figure.add_trace(
            go.Scatter(
                x=list(history_time),
                y=list(history_control_pitch),
                mode="lines",
                name="Control Pitch",
                line=dict(
                    color="lime",
                    width=2,
                ),
            )
        )

        # Guidance Yaw

        figure.add_trace(
            go.Scatter(
                x=list(history_time),
                y=list(history_guidance_yaw),
                mode="lines",
                name="Guidance Yaw",
                line=dict(
                    color="blue",
                    width=2,
                ),
            )
        )

        # Controller Yaw

        figure.add_trace(
            go.Scatter(
                x=list(history_time),
                y=list(history_control_yaw),
                mode="lines",
                name="Control Yaw",
                line=dict(
                    color="cyan",
                    width=2,
                ),
            )
        )

        # Pitch Limits

        figure.add_hline(
            y=PITCH_MAX,
            line_dash="dash",
            line_color="red",
            annotation_text="Pitch Max",
            annotation_position="top right",
            annotation_font_size=9,
        )

        figure.add_hline(
            y=PITCH_MIN,
            line_dash="dash",
            line_color="red",
            annotation_text="Pitch Min",
            annotation_position="bottom right",
            annotation_font_size=9,
        )

        # Yaw Limits

        figure.add_hline(
            y=YAW_MAX,
            line_dash="dash",
            line_color="yellow",
            annotation_text="Yaw Max",
            annotation_position="top right",
            annotation_font_size=9,
        )

        figure.add_hline(
            y=YAW_MIN,
            line_dash="dash",
            line_color="yellow",
            annotation_text="Yaw Min",
            annotation_position="bottom right",
            annotation_font_size=9,
        )

        # Layout

        figure.update_layout(
            template="plotly_dark",
            title=None,
            margin=dict(
                l=15,
                r=10,
                t=5,
                b=20,
            ),
            xaxis=dict(
                title="Time (Samples)",
                showgrid=True,
                zeroline=False,
                automargin=True,
            ),
            yaxis=dict(
                title="Command (rad)",
                range=[-1.1, 1.1],
                showgrid=True,
                zeroline=False,
                automargin=True,
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
