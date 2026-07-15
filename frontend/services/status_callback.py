from dash import Input
from dash import Output
from dash import no_update

from frontend.dashboard_connection import dashboard_socket


def register_status_callback(app):

    @app.callback(
        Output("status-mode", "children"),
        Output("status-track-id", "children"),
        Output("status-class", "children"),
        Output("status-confidence", "children"),
        Output("status-target", "children"),
        Output("status-guidance", "children"),
        Output("status-thrust", "children"),
        Input("dashboard-update", "n_intervals"),
    )
    def update_status(_):

        telemetry = dashboard_socket.get("telemetry")
        guidance = dashboard_socket.get("guidance")
        control = dashboard_socket.get("control")
        track = dashboard_socket.get("track")

        if not telemetry or not guidance or not control or not track:
            return no_update

        telemetry = telemetry.get("data", {})
        guidance = guidance.get("data", {})
        control = control.get("data", {})
        track = track.get("data", {})

        mode = telemetry.get(
            "flight_mode",
            "--",
        )

        track_id = guidance.get(
            "track_id",
            "--",
        )

        class_name = track.get(
            "class_name",
            "--",
        )

        confidence = f"{track.get('confidence',0.0):.2f}"

        target = (
            "LOCKED"
            if guidance.get(
                "target_locked",
                False,
            )
            else "SEARCHING"
        )

        guidance_cmd = (
            f"{guidance.get('pitch_command',0.0):.2f}"
            " / "
            f"{guidance.get('yaw_command',0.0):.2f}"
        )

        thrust = f"{control.get('collective_thrust',0.0):.2f}"

        return (
            mode,
            track_id,
            class_name,
            confidence,
            target,
            guidance_cmd,
            thrust,
        )
