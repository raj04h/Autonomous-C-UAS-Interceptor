from datetime import datetime

from pydantic import BaseModel
from pydantic import ConfigDict


class TelemetryCreate(BaseModel):
    """
    Incoming telemetry data.
    """

    mission_id: int

    x: float
    y: float
    z: float

    vx: float
    vy: float
    vz: float

    roll: float
    pitch: float
    yaw: float

    battery: float

    flight_mode: int


class TelemetryResponse(BaseModel):
    """
    Outgoing telemetry data.
    """

    id: int

    mission_id: int

    x: float
    y: float
    z: float

    vx: float
    vy: float
    vz: float

    roll: float
    pitch: float
    yaw: float

    battery: float

    flight_mode: int

    created_at: datetime

    model_config = ConfigDict(
        from_attributes=True
    )