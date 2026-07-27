from pathlib import Path
import yaml


def get_project_root():

    current_path = Path(__file__).resolve()

    while current_path.name != "Counter_UAS":

        if current_path.parent == current_path:

            raise RuntimeError("Counter_UAS project root not found.")

        current_path = current_path.parent

    return current_path


PROJECT_ROOT = get_project_root()


def load_config():

    config_path = PROJECT_ROOT / "configs" / "system_config.yaml"

    with open(
        config_path,
        "r",
        encoding="utf-8",
    ) as file:

        return yaml.safe_load(file)


CONFIG = load_config()


class VisualizationConfig:

    WINDOW_NAME = "Counter-UAS Visualization"

    WINDOW_WIDTH = 1280
    WINDOW_HEIGHT = 720

    VIDEO_PATH = PROJECT_ROOT / CONFIG["assets"]["video_path"]

    # Visualization Recording

    RECORDING_DIR = PROJECT_ROOT / "testing_samples"

    RECORDING_PATH = RECORDING_DIR / "visualization_output.mp4"

    RECORDING_FPS = 30

    HEADER_HEIGHT = 45
    FOOTER_HEIGHT = 35

    PANEL_MARGIN = 20

    CROSSHAIR_SIZE = 25

    GREEN = (0, 255, 0)
    WHITE = (255, 255, 255)
    YELLOW = (0, 255, 255)
    CYAN = (255, 255, 0)
    BLUE = (255, 0, 0)
    RED = (0, 0, 255)
