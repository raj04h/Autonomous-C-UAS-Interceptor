from dash import html


def status_item(label: str, value_id: str):

    return html.Div(
        className="status-row",
        children=[
            html.Span(
                label,
                className="status-label",
            ),
            html.Span(
                "--",
                id=value_id,
                className="status-value",
            ),
        ],
    )


def create_status_panel():

    return html.Div(
        className="status-container",
        children=[
            html.H3(
                "SYSTEM STATUS",
                className="status-title",
            ),
            status_item(
                "Mode",
                "status-mode",
            ),
            status_item(
                "Track ID",
                "status-track-id",
            ),
            status_item(
                "Class",
                "status-class",
            ),
            status_item(
                "Confidence",
                "status-confidence",
            ),
            status_item(
                "Target",
                "status-target",
            ),
            status_item(
                "Pitch / Yaw",
                "status-guidance",
            ),
            status_item(
                "Thrust",
                "status-thrust",
            ),
        ],
    )
