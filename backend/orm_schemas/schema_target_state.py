from datetime import datetime

from pydantic import BaseModel
from pydantic import ConfigDict


class TargetStateCreate(BaseModel):
    """
    Incoming target state data.
    """

    mission_id: int

    track_id: int

    x: float
    y: float

    vx: float
    vy: float

    ax: float
    ay: float

    pred_x: float
    pred_y: float

    valid: bool


class TargetStateResponse(BaseModel):
    """
    Outgoing target state data.
    """

    id: int

    mission_id: int

    track_id: int

    x: float
    y: float

    vx: float
    vy: float

    ax: float
    ay: float

    pred_x: float
    pred_y: float

    valid: bool

    created_at: datetime

    model_config = ConfigDict(from_attributes=True)
