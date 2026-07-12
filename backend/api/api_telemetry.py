from fastapi import APIRouter, Depends
from sqlalchemy.orm import Session

from backend.orm_database.db_session import get_db

from backend.schemas.schema_telemetry import TelemetryResponse

from backend.services.telemetry_service import TelemetryService

router = APIRouter(
    prefix="/telemetry",
    tags=["Telemetry"],
)


@router.get(
    "/latest",
    response_model=TelemetryResponse,
)
def get_latest(
    db: Session = Depends(get_db),
):

    return TelemetryService.get_latest(db)


@router.get(
    "/history",
    response_model=list[TelemetryResponse],
)
def get_history(
    limit: int = 100,
    db: Session = Depends(get_db),
):

    return TelemetryService.get_history(
        db,
        limit,
    )
