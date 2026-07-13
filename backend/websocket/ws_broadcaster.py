import asyncio

from fastapi.encoders import jsonable_encoder

from backend.websocket.ws_connection import ws_connection

from backend.orm_schemas.schema_telemetry import TelemetryResponse
from backend.orm_schemas.schema_target_state import TargetStateResponse


class WSBroadcaster:

    _event_loop = None

    @classmethod
    def set_event_loop(
        cls,
        loop: asyncio.AbstractEventLoop,
    ) -> None:

        cls._event_loop = loop

    @classmethod
    def _broadcast(
        cls,
        channel: str,
        message: dict,
    ) -> None:

        if cls._event_loop is None:
            return

        future = asyncio.run_coroutine_threadsafe(
            ws_connection.broadcast(
                channel,
                message,
            ),
            cls._event_loop,
        )

        future.add_done_callback(
            lambda f: print(f.exception()) if f.exception() else None
        )

    @classmethod
    def telemetry(
        cls,
        telemetry: TelemetryResponse,
    ) -> None:

        cls._broadcast(
            "telemetry",
            {
                "type": "telemetry",
                "data": jsonable_encoder(telemetry),
            },
        )

    @classmethod
    def target_state(
        cls,
        target_state: TargetStateResponse,
    ) -> None:

        cls._broadcast(
            "target_state",
            {
                "type": "target_state",
                "data": jsonable_encoder(target_state),
            },
        )


    @classmethod
    def detection(
        cls,
        detection: dict,
    ) -> None:

        cls._broadcast(
            "detection",
            {
                "type": "detection",
                "data": detection,
            },
        )


    @classmethod
    def track(
        cls,
        track: dict,
    ) -> None:

        cls._broadcast(
            "track",
            {
                "type": "track",
                "data": track,
            },
        )

    @classmethod
    def guidance(
        cls,
        guidance: dict,
    ) -> None:

        cls._broadcast(
            "guidance",
            {
                "type": "guidance",
                "data": guidance,
            },
        )

    @classmethod
    def control(
        cls,
        control: dict,
    ) -> None:

        cls._broadcast(
            "control",
            {
                "type": "control",
                "data": control,
            },
        )