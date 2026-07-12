from datetime import datetime, timezone

from sqlalchemy import select
from sqlalchemy.orm import Session

from backend.orm_models.orm_mission import MissionORM
from backend.schemas.schema_mission import MissionResponse


class MissionService:

    @staticmethod
    def create(
        db: Session,
    ) -> MissionResponse:
        """
        Create and start a new mission.
        """

        db_mission = MissionORM()

        db.add(db_mission)
        db.commit()
        db.refresh(db_mission)

        return MissionResponse.model_validate(db_mission)

    @staticmethod
    def finish(
        db: Session,
        mission_id: int,
    ) -> MissionResponse | None:
        """
        Finish an existing mission and calculate its duration.
        """

        statement = select(MissionORM).where(MissionORM.mission_id == mission_id)

        db_mission = db.scalar(statement)

        if db_mission is None:
            return None

        if db_mission.end_time is not None:
            return MissionResponse.model_validate(db_mission)

        end_time = datetime.now(timezone.utc)

        db_mission.end_time = end_time
        db_mission.duration = (end_time - db_mission.start_time).total_seconds()

        db.commit()
        db.refresh(db_mission)

        return MissionResponse.model_validate(db_mission)

    @staticmethod
    def get_latest(
        db: Session,
    ) -> MissionResponse | None:
        """
        Return the latest mission.
        """

        statement = select(MissionORM).order_by(MissionORM.mission_id.desc())

        mission = db.scalar(statement)

        if mission is None:
            return None

        return MissionResponse.model_validate(mission)

    @staticmethod
    def get_history(
        db: Session,
    ) -> list[MissionResponse]:
        """
        Return the complete mission history.
        """

        statement = select(MissionORM).order_by(MissionORM.mission_id.desc())

        missions = db.scalars(statement).all()

        return [MissionResponse.model_validate(mission) for mission in missions]
