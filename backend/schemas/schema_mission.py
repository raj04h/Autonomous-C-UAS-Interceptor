from datetime import datetime

from pydantic import BaseModel, ConfigDict

class MissionCreate(BaseModel):
    pass

class MissionResponse(BaseModel):
    mission_id: int
    start_time: datetime
    end_time: datetime | None
    duration: float | None

    model_config= ConfigDict(
        from_attributes= True
    )



