# Dependency that provides a database session and guarantees proper cleanup.


from sqlalchemy.orm import sessionmaker

from backend.orm_database.db_connection import DBConnection


SessionLocal = sessionmaker(
    bind=DBConnection.engine,
    autoflush=False,
    autocommit=False,
)

def get_db():
    # provide db session
    db= SessionLocal()
    try:
        yield db
    finally:
        db.close()
