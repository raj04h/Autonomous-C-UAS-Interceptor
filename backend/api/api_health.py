from fastapi import APIRouter
from backend.config.backend_config import BackendConfig

router = APIRouter(tags=["Health"])


@router.get("/health")
def health_check():
    return {
        "status": "running",
        "service": BackendConfig.APP_NAME,
        "version": BackendConfig.API_VERSION,
    }
