from datetime import datetime

from sqlalchemy import (
    DateTime,
    Float,
    ForeignKey,
    Integer,
    func,
)

from sqlalchemy.orm import (
    Mapped,
    mapped_column,
)

from backend.orm_models.base import Base


class TelemetryORM(Base):
    """
    Stores UAV telemetry during a mission.
    """

    __tablename__ = "telemetry"

    id: Mapped[int] = mapped_column(
        primary_key=True,
        index=True,
    )

    mission_id: Mapped[int] = mapped_column(
        ForeignKey("missions.mission_id"),
        nullable=False,
    )


    x: Mapped[float] = mapped_column(Float)
    y: Mapped[float] = mapped_column(Float)
    z: Mapped[float] = mapped_column(Float)


    vx: Mapped[float] = mapped_column(Float)
    vy: Mapped[float] = mapped_column(Float)
    vz: Mapped[float] = mapped_column(Float)


    roll: Mapped[float] = mapped_column(Float)

    pitch: Mapped[float] = mapped_column(Float)

    yaw: Mapped[float] = mapped_column(Float)


    battery: Mapped[float] = mapped_column(Float)

    flight_mode: Mapped[int] = mapped_column(
        Integer,
        default=0,
    )

    created_at: Mapped[datetime] = mapped_column(
        DateTime(timezone=True),
        server_default=func.now(),
        nullable=False,
    )
