# One engine for the entire backend.

from sqlalchemy import create_engine
from backend.config.database_config import DatabaseConfig


class DBConnection:
    engine = create_engine(
        DatabaseConfig.DATABASE_URL,
        echo=DatabaseConfig.DB_ECHO,
        future=True,
    )
