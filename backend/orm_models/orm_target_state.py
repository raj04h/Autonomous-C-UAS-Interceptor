from datetime import datetime

from sqlalchemy import (
    Boolean,
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


class TargetStateORM(Base):

    __tablename__ = "target_states"

    id: Mapped[int] = mapped_column(
        primary_key=True,
        index=True,
    )

    mission_id: Mapped[int] = mapped_column(
        ForeignKey("missions.mission_id"),
        nullable=False,
    )

    track_id: Mapped[int] = mapped_column(
        Integer,
        nullable=False,
    )

    x: Mapped[float] = mapped_column(Float)
    y: Mapped[float] = mapped_column(Float)

    vx: Mapped[float] = mapped_column(Float)
    vy: Mapped[float] = mapped_column(Float)

    ax: Mapped[float] = mapped_column(Float)
    ay: Mapped[float] = mapped_column(Float)

    pred_x: Mapped[float] = mapped_column(Float)
    pred_y: Mapped[float] = mapped_column(Float)

    valid: Mapped[bool] = mapped_column(
        Boolean,
        nullable=False,
        default=False,
    )

    created_at: Mapped[datetime] = mapped_column(
        DateTime(timezone=True),
        server_default=func.now(),
        nullable=False,
    )
