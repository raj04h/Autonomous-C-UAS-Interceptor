from typing import Optional

from sqlalchemy import select
from sqlalchemy.orm import Session

from backend.orm_models.orm_telemetry import TelemetryORM
from backend.orm_schemas.schema_telemetry import (
    TelemetryCreate,
    TelemetryResponse,
)


class TelemetryService:
    """
    Business logic for UAV telemetry.
    """

    @staticmethod
    def create(
        db: Session,
        telemetry: TelemetryCreate,
    ) -> TelemetryResponse:
        """
        Store a telemetry record.
        """

        db_telemetry = TelemetryORM(
            mission_id=telemetry.mission_id,
            # Position
            x=telemetry.x,
            y=telemetry.y,
            z=telemetry.z,
            # Velocity
            vx=telemetry.vx,
            vy=telemetry.vy,
            vz=telemetry.vz,
            # Attitude
            roll=telemetry.roll,
            pitch=telemetry.pitch,
            yaw=telemetry.yaw,
            # Vehicle Status
            battery=telemetry.battery,
            flight_mode=telemetry.flight_mode,
        )

        db.add(db_telemetry)

        db.commit()

        db.refresh(db_telemetry)

        return TelemetryResponse.model_validate(db_telemetry)

    @staticmethod
    def get_latest(
        db: Session,
    ) -> Optional[TelemetryResponse]:
        """
        Return the latest telemetry record.
        """

        statement = select(TelemetryORM).order_by(TelemetryORM.id.desc())

        telemetry = db.scalar(statement)

        if telemetry is None:
            return None

        return TelemetryResponse.model_validate(telemetry)

    @staticmethod
    def get_history(
        db: Session,
        limit: int = 100,
    ) -> list[TelemetryResponse]:
        """
        Return recent telemetry history.
        """

        statement = select(TelemetryORM).order_by(TelemetryORM.id.desc()).limit(limit)

        telemetry_list = db.scalars(statement).all()

        return [TelemetryResponse.model_validate(item) for item in telemetry_list]
