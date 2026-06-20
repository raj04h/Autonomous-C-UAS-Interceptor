from pathlib import Path

import yaml


def get_project_root():

    current_path = Path(__file__).resolve()

    while current_path.name != "Counter_UAS":

        if current_path.parent == current_path:

            raise RuntimeError(
                "Counter_UAS project root not found."
            )

        current_path = current_path.parent

    return current_path


PROJECT_ROOT = get_project_root()


def load_config():

    config_path = (
        PROJECT_ROOT
        / "configs"
        / "system_config.yaml"
    )

    if not config_path.exists():

        raise FileNotFoundError(
            f"Config file not found: "
            f"{config_path}"
        )

    with open(
        config_path,
        "r",
        encoding="utf-8"
    ) as file:

        config = yaml.safe_load(file)

    return config