from fastapi import APIRouter, Depends
from sqlalchemy.orm import Session

from backend.orm_database.db_session import get_db

from backend.orm_schemas.schema_target_state import (
    TargetStateResponse,
)

from backend.services.target_state_service import (
    TargetStateService,
)

router = APIRouter(
    prefix="/target-state",
    tags=["Target State"],
)


@router.get(
    "/latest",
    response_model=TargetStateResponse,
)
def get_latest(
    db: Session = Depends(get_db),
):

    return TargetStateService.get_latest(db)


@router.get(
    "/history",
    response_model=list[TargetStateResponse],
)
def get_history(
    limit: int = 100,
    db: Session = Depends(get_db),
):

    return TargetStateService.get_history(
        db,
        limit,
    )
