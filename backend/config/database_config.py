import os

from dotenv import load_dotenv

load_dotenv()


class DatabaseConfig:
    """
    PostgreSQL database configuration.
    """

    DB_HOST = os.getenv("POSTGRES_HOST", "localhost")
    DB_PORT = int(os.getenv("POSTGRES_PORT", "5432"))

    DB_NAME = os.getenv("POSTGRES_DB", "uas_db")

    DB_USER = os.getenv("POSTGRES_USER", "postgres")
    DB_PASSWORD = os.getenv("POSTGRES_PASSWORD", "gresUAS")

    DB_DRIVER = os.getenv("DB_DRIVER", "postgresql+psycopg2")

    DATABASE_URL = (
        f"{DB_DRIVER}://"
        f"{DB_USER}:{DB_PASSWORD}@"
        f"{DB_HOST}:{DB_PORT}/"
        f"{DB_NAME}"
    )

    DB_ECHO = False
