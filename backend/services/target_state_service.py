from typing import Optional

from sqlalchemy import select
from sqlalchemy.orm import Session

from backend.orm_models.orm_target_state import TargetStateORM
from backend.orm_schemas.schema_target_state import (
    TargetStateCreate,
    TargetStateResponse,
)


class TargetStateService:
    """
    Business logic for target state data.
    """

    @staticmethod
    def create(
        db: Session,
        target_state: TargetStateCreate,
    ) -> TargetStateResponse:
        """
        Store a new target state.
        """

        db_target_state = TargetStateORM(
            mission_id=target_state.mission_id,
            track_id=target_state.track_id,
            x=target_state.x,
            y=target_state.y,
            vx=target_state.vx,
            vy=target_state.vy,
            ax=target_state.ax,
            ay=target_state.ay,
            pred_x=target_state.pred_x,
            pred_y=target_state.pred_y,
            valid=target_state.valid,
        )

        db.add(db_target_state)

        db.commit()

        db.refresh(db_target_state)

        return TargetStateResponse.model_validate(db_target_state)

    @staticmethod
    def get_latest(
        db: Session,
    ) -> Optional[TargetStateResponse]:
        """
        Return the latest target state.
        """

        statement = select(TargetStateORM).order_by(TargetStateORM.id.desc())

        target_state = db.scalar(statement)

        if target_state is None:
            return None

        return TargetStateResponse.model_validate(target_state)

    @staticmethod
    def get_history(
        db: Session,
        limit: int = 100,
    ) -> list[TargetStateResponse]:
        """
        Return recent target state history.
        """

        statement = (
            select(TargetStateORM).order_by(TargetStateORM.id.desc()).limit(limit)
        )

        target_states = db.scalars(statement).all()

        return [TargetStateResponse.model_validate(item) for item in target_states]
