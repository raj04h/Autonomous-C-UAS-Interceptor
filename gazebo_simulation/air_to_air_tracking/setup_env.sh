#!/bin/bash

# Counter-UAS Air-to-Air Gazebo Simulation Environment

PROJECT_ROOT="/mnt/5252B43652B420A1/Deep_Project/Counter_UAS"

AIR_TO_AIR_ROOT="${PROJECT_ROOT}/gazebo_simulation/air_to_air_tracking"

PX4_GZ_ROOT="${HOME}/Workspace/PX4-Autopilot/Tools/simulation/gz"

export GZ_SIM_RESOURCE_PATH="${AIR_TO_AIR_ROOT}/models:${AIR_TO_AIR_ROOT}/worlds:${PX4_GZ_ROOT}/models:${PX4_GZ_ROOT}/worlds"

echo "Air-to-Air Gazebo environment configured."
echo "GZ_SIM_RESOURCE_PATH=${GZ_SIM_RESOURCE_PATH}"