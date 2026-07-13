from backend.orm_database.db_connection import DBConnection
from backend.orm_models.base import Base

from backend.orm_models.orm_mission import MissionORM
from backend.orm_models.orm_telemetry import TelemetryORM
from backend.orm_models.orm_target_state import TargetStateORM

def create_tables():
    Base.metadata.create_all(  # create table by reading the base
        bind= DBConnection.engine
    )

    print("Tables created Successfully")


if __name__=="__main__":
    create_tables()
