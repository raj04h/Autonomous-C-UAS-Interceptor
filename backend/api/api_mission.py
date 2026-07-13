from fastapi import APIRouter, Depends
from sqlalchemy.orm import Session

from backend.orm_database.db_session import get_db

from backend.orm_schemas.schema_mission import MissionResponse

from backend.services.mission_service import MissionService

router = APIRouter(
    prefix="/mission",
    tags=["Mission"],
)


@router.post(
    "/start",
    response_model=MissionResponse,
)
def start_mission(
    db: Session = Depends(get_db),
):

    return MissionService.create(db)


@router.post(
    "/finish/{mission_id}",
    response_model=MissionResponse,
)
def finish_mission(
    mission_id: int,
    db: Session = Depends(get_db),
):

    return MissionService.finish(
        db,
        mission_id,
    )


@router.get(
    "/latest",
    response_model=MissionResponse,
)
def get_latest(
    db: Session = Depends(get_db),
):

    return MissionService.get_latest(db)


@router.get(
    "/history",
    response_model=list[MissionResponse],
)
def get_history(
    db: Session = Depends(get_db),
):

    return MissionService.get_history(db)
