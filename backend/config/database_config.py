class DatabaseConfig:
    """
    PostgreSQL database configuration.
    """

    DB_HOST = "localhost"
    DB_PORT = 5432

    DB_NAME = "uas_db"

    DB_USER = "postgres"
    DB_PASSWORD = "gresUAS"

    DB_DRIVER = "postgresql+psycopg2"

    DATABASE_URL = (
        f"{DB_DRIVER}://"
        f"{DB_USER}:{DB_PASSWORD}@"
        f"{DB_HOST}:{DB_PORT}/"
        f"{DB_NAME}"
    )

    DB_ECHO = False
