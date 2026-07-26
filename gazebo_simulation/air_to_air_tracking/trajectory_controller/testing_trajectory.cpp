// ============================================================
// 60-Second Air-to-Air Target Trajectory
//
// Phase 1 (0-5 s)   : Center Acquisition
// Phase 2 (5-12 s)  : Upper-Left Sweep
// Phase 3 (12-20 s) : Upper-Right Sweep / Large S-Turn
// Phase 4 (20-28 s) : Diagonal Descending Turn
// Phase 5 (28-36 s) : Cross-Center Dogfight Sweep
// Phase 6 (36-44 s) : Opposite-Side Climbing S-Turn
// Phase 7 (44-55 s) : Tight Figure-Eight / Dogfight Weave
// Phase 8 (55-60 s) : Final Center Convergence / Lock
// ============================================================

#include <gz/msgs/boolean.pb.h>
#include <gz/msgs/pose.pb.h>
#include <gz/transport/Node.hh>

#include <algorithm>
#include <chrono>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <thread>
#include <vector>

// ============================================================
// Configuration
// ============================================================

class TrajectoryConfig
{
public:
    static constexpr const char *SERVICE_NAME = "/world/air_to_air/set_pose";

    static constexpr const char *MODEL_NAME = "target_fixedwing";

    static constexpr double UPDATE_RATE_HZ = 20.0;

    static constexpr unsigned int SERVICE_TIMEOUT_MS = 1000;

    static constexpr double TOTAL_DURATION_SEC = 60.0;

    // Calibrated FPV image-center pose
    static constexpr double LOCK_X = 4.5;
    static constexpr double LOCK_Y = 0.0;
    static constexpr double LOCK_Z = 34.5;
};

// ============================================================
// Trajectory Data
// ============================================================

struct TrajectoryWaypoint
{
    double time;

    double x;
    double y;
    double z;

    double roll;
    double pitch;
    double yaw;
};

static const std::vector<TrajectoryWaypoint> TRAJECTORY = {

    // ========================================================
    // t     X      Y       Z       Roll   Pitch   Yaw
    // ========================================================

    //------------------------------------------------------
    // PHASE 1
    // CENTER ACQUISITION
    // 0 - 5 s
    //------------------------------------------------------

    {0.00, 4.50, 0.00, 34.50, 0.0, 0.0, 0.0},

    {0.50, 4.58, 0.06, 34.54, 1.0, 0.8, 3.0},

    {1.00, 4.68, 0.12, 34.60, 2.0, 1.2, 6.0},

    {1.50, 4.80, 0.18, 34.68, 3.0, 1.5, 10.0},

    {2.00, 4.92, 0.22, 34.76, 4.0, 1.8, 14.0},

    {2.50, 5.02, 0.16, 34.82, 3.0, 1.5, 12.0},

    {3.00, 5.08, 0.06, 34.86, 2.0, 1.0, 8.0},

    {3.50, 5.00, -0.04, 34.80, 0.5, 0.5, 4.0},

    {4.00, 4.86, -0.10, 34.70, -1.0, 0.2, 0.0},

    {4.50, 4.68, -0.06, 34.60, -1.0, 0.0, -2.0},

    {5.00, 4.50, 0.00, 34.50, 0.0, 0.0, 0.0},

    //------------------------------------------------------
    // PHASE 2
    // UPPER-LEFT SWEEP
    // 5 - 12 s
    //------------------------------------------------------

    {5.50, 4.42, 0.08, 34.54, 1.0, 0.8, 2.0},

    {6.00, 4.32, 0.18, 34.60, 2.0, 1.2, 5.0},

    {6.50, 4.22, 0.30, 34.68, 3.0, 1.8, 8.0},

    {7.00, 4.12, 0.42, 34.76, 5.0, 2.4, 12.0},

    {7.50, 4.04, 0.54, 34.84, 6.0, 3.0, 16.0},

    {8.00, 4.00, 0.66, 34.90, 8.0, 3.5, 20.0},

    {8.50, 4.02, 0.76, 34.96, 9.0, 3.8, 23.0},

    {9.00, 4.08, 0.84, 35.00, 10.0, 4.0, 26.0},

    {9.50, 4.18, 0.88, 35.02, 10.0, 4.0, 28.0},

    {10.00, 4.30, 0.90, 35.02, 9.0, 3.8, 30.0},

    {10.50, 4.46, 0.88, 35.00, 8.0, 3.4, 31.0},

    {11.00, 4.62, 0.84, 34.96, 7.0, 3.0, 32.0},

    {11.50, 4.78, 0.80, 34.90, 6.0, 2.6, 33.0},

    {12.00, 4.94, 0.74, 34.84, 5.0, 2.2, 34.0},

    ///------------------------------------------------------
    // PHASE 3
    // UPPER-RIGHT SWEEP / FIRST LARGE S-TURN
    // 12 - 20 s
    //------------------------------------------------------

    {12.50, 5.06, 0.66, 34.78, 4.0, 1.8, 32.0},

    {13.00, 5.14, 0.56, 34.70, 2.5, 1.2, 28.0},

    {13.50, 5.19, 0.44, 34.62, 1.0, 0.6, 23.0},

    {14.00, 5.20, 0.30, 34.54, -1.0, 0.0, 18.0},

    {14.50, 5.17, 0.15, 34.48, -3.0, -0.8, 12.0},

    {15.00, 5.10, 0.00, 34.44, -5.0, -1.4, 6.0},

    {15.50, 5.00, -0.15, 34.42, -7.0, -2.0, 0.0},

    {16.00, 4.88, -0.30, 34.44, -9.0, -2.4, -7.0},

    {16.50, 4.76, -0.44, 34.48, -10.0, -2.5, -13.0},

    {17.00, 4.66, -0.57, 34.54, -11.0, -2.2, -19.0},

    {17.50, 4.60, -0.68, 34.60, -11.0, -1.7, -24.0},

    {18.00, 4.59, -0.76, 34.66, -10.0, -1.0, -28.0},

    {18.50, 4.62, -0.81, 34.70, -9.0, -0.3, -31.0},

    {19.00, 4.66, -0.84, 34.72, -8.0, 0.3, -33.0},

    {19.50, 4.71, -0.84, 34.72, -7.0, 0.7, -33.0},

    {20.00, 4.78, -0.82, 34.70, -6.0, 1.0, -32.0},
    //------------------------------------------------------
    // PHASE 4
    // DIAGONAL DESCENDING TURN
    // 20 - 28 s
    //------------------------------------------------------

    {20.50, 4.86, -0.77, 34.66, -5.0, 0.5, -29.0},

    {21.00, 4.95, -0.69, 34.60, -4.0, -0.2, -25.0},

    {21.50, 5.04, -0.58, 34.53, -2.0, -1.0, -20.0},

    {22.00, 5.12, -0.44, 34.45, 0.0, -1.8, -14.0},

    {22.50, 5.18, -0.28, 34.37, 2.5, -2.5, -8.0},

    {23.00, 5.20, -0.10, 34.30, 5.0, -3.0, -2.0},

    {23.50, 5.18, 0.08, 34.25, 7.0, -3.2, 5.0},

    {24.00, 5.12, 0.26, 34.22, 9.0, -3.0, 11.0},

    {24.50, 5.02, 0.43, 34.24, 10.0, -2.4, 17.0},

    {25.00, 4.90, 0.58, 34.29, 11.0, -1.6, 22.0},

    {25.50, 4.76, 0.70, 34.36, 10.0, -0.8, 27.0},

    {26.00, 4.62, 0.78, 34.44, 9.0, 0.0, 30.0},

    {26.50, 4.49, 0.82, 34.52, 7.0, 0.8, 32.0},

    {27.00, 4.39, 0.81, 34.59, 5.0, 1.4, 32.0},

    {27.50, 4.32, 0.76, 34.65, 3.0, 1.8, 30.0},

    {28.00, 4.30, 0.68, 34.68, 1.0, 2.0, 27.0},

    //------------------------------------------------------
    // PHASE 5
    // CROSS-CENTER DOGFIGHT SWEEP
    // 28 - 36 s
    //------------------------------------------------------

    {28.50, 4.31, 0.59, 34.69, 0.0, 1.8, 23.0},

    {29.00, 4.35, 0.49, 34.68, -1.5, 1.5, 19.0},

    {29.50, 4.39, 0.39, 34.65, -3.0, 1.1, 15.0},

    {30.00, 4.43, 0.29, 34.62, -4.5, 0.7, 11.0},

    {30.50, 4.46, 0.20, 34.58, -5.5, 0.3, 7.0},

    {31.00, 4.48, 0.12, 34.54, -6.0, 0.0, 4.0},

    {31.50, 4.49, 0.06, 34.51, -5.0, -0.2, 2.0},

    {32.00, 4.50, 0.02, 34.50, -3.0, 0.0, 1.0},

    {32.50, 4.50, 0.00, 34.50, 0.0, 0.0, 0.0},

    {33.00, 4.51, -0.03, 34.49, 2.0, -0.2, -1.0},

    {33.50, 4.54, -0.09, 34.47, 4.0, -0.5, -3.0},

    {34.00, 4.59, -0.18, 34.44, 6.0, -0.8, -6.0},

    {34.50, 4.66, -0.29, 34.42, 7.5, -1.0, -10.0},

    {35.00, 4.75, -0.41, 34.42, 8.5, -0.8, -14.0},

    {35.50, 4.86, -0.53, 34.45, 9.0, -0.3, -18.0},

    {36.00, 4.98, -0.63, 34.50, 8.0, 0.4, -21.0},

    //------------------------------------------------------
    // PHASE 6
    // OPPOSITE-SIDE CLIMBING S-TURN
    // 36 - 44 s
    //------------------------------------------------------

    {36.50, 5.08, -0.54, 34.56, 7.0, 1.0, -18.0},

    {37.00, 5.15, -0.43, 34.64, 6.0, 1.7, -14.0},

    {37.50, 5.19, -0.30, 34.73, 4.0, 2.4, -9.0},

    {38.00, 5.20, -0.15, 34.82, 2.0, 3.0, -4.0},

    {38.50, 5.17, 0.01, 34.90, 0.0, 3.4, 2.0},

    {39.00, 5.11, 0.18, 34.96, -2.0, 3.5, 8.0},

    {39.50, 5.02, 0.34, 35.00, -4.5, 3.2, 14.0},

    {40.00, 4.90, 0.49, 35.02, -7.0, 2.8, 20.0},

    {40.50, 4.76, 0.62, 35.00, -9.0, 2.2, 25.0},

    {41.00, 4.61, 0.72, 34.96, -10.0, 1.5, 29.0},

    {41.50, 4.47, 0.78, 34.90, -11.0, 0.8, 32.0},

    {42.00, 4.35, 0.80, 34.83, -10.0, 0.0, 33.0},

    {42.50, 4.26, 0.77, 34.76, -8.0, -0.6, 32.0},

    {43.00, 4.21, 0.70, 34.70, -6.0, -1.0, 29.0},

    {43.50, 4.20, 0.60, 34.66, -4.0, -1.0, 25.0},

    {44.00, 4.24, 0.49, 34.64, -2.0, -0.6, 20.0},

    //------------------------------------------------------
    // PHASE 7
    // TIGHT FIGURE-EIGHT / DOGFIGHT WEAVE
    // 44 - 55 s
    //------------------------------------------------------

    {44.50, 4.30, 0.40, 34.61, -1.0, -0.3, 17.0},

    {45.00, 4.38, 0.29, 34.57, 0.0, 0.0, 13.0},

    {45.50, 4.45, 0.17, 34.53, 1.5, 0.3, 8.0},

    {46.00, 4.49, 0.07, 34.51, 2.5, 0.4, 4.0},

    // First center crossing
    {46.50, 4.50, 0.01, 34.50, 3.0, 0.2, 1.0},

    {47.00, 4.54, -0.08, 34.48, 4.5, -0.2, -4.0},

    {47.50, 4.62, -0.19, 34.45, 6.0, -0.7, -9.0},

    {48.00, 4.72, -0.29, 34.42, 7.0, -1.2, -14.0},

    {48.50, 4.82, -0.34, 34.40, 7.5, -1.4, -18.0},

    // Lower/right outer turn
    {49.00, 4.90, -0.31, 34.41, 6.5, -1.0, -20.0},

    {49.50, 4.93, -0.22, 34.44, 4.5, -0.4, -18.0},

    {50.00, 4.89, -0.12, 34.47, 2.0, 0.2, -13.0},

    {50.50, 4.80, -0.04, 34.49, 0.0, 0.6, -7.0},

    // Second center crossing
    {51.00, 4.67, 0.01, 34.50, -2.0, 0.7, -2.0},

    {51.50, 4.54, 0.06, 34.52, -4.0, 0.5, 3.0},

    {52.00, 4.42, 0.14, 34.55, -6.0, 0.2, 8.0},

    {52.50, 4.32, 0.24, 34.58, -7.0, -0.3, 13.0},

    {53.00, 4.25, 0.33, 34.60, -7.5, -0.7, 17.0},

    // Upper/left outer turn
    {53.50, 4.22, 0.36, 34.59, -6.5, -0.8, 19.0},

    {54.00, 4.25, 0.31, 34.57, -5.0, -0.5, 18.0},

    {54.50, 4.32, 0.23, 34.55, -3.0, -0.2, 15.0},

    {55.00, 4.40, 0.15, 34.53, -1.5, 0.0, 11.0},

    //------------------------------------------------------
    // PHASE 8
    // FINAL CENTER CONVERGENCE / LOCK
    // 55 - 60 s
    //------------------------------------------------------

    {55.25, 4.415, 0.132, 34.528, -1.3, 0.1, 10.0},

    {55.50, 4.430, 0.113, 34.525, -1.1, 0.2, 9.0},

    {55.75, 4.445, 0.094, 34.521, -0.9, 0.2, 8.0},

    {56.00, 4.458, 0.076, 34.517, -0.7, 0.2, 7.0},

    {56.25, 4.469, 0.059, 34.513, -0.5, 0.2, 6.0},

    {56.50, 4.478, 0.044, 34.510, -0.3, 0.1, 5.0},

    {56.75, 4.486, 0.031, 34.507, -0.1, 0.1, 4.0},

    {57.00, 4.492, 0.020, 34.504, 0.0, 0.0, 3.0},

    {57.25, 4.496, 0.012, 34.502, 0.1, 0.0, 2.0},

    {57.50, 4.499, 0.006, 34.501, 0.1, 0.0, 1.0},

    //------------------------------------------------------
    // ENTER CENTER / LOCK REGION
    //------------------------------------------------------

    {57.75, 4.500, 0.002, 34.500, 0.0, 0.0, 0.5},

    {58.00, 4.500, 0.000, 34.500, 0.0, 0.0, 0.0},

    // Small residual motion while maintaining lock

    {58.25, 4.502, 0.003, 34.501, 0.1, 0.1, 0.2},

    {58.50, 4.503, 0.001, 34.502, 0.1, 0.1, 0.3},

    {58.75, 4.502, -0.002, 34.501, 0.0, 0.0, 0.2},

    {59.00, 4.500, -0.003, 34.500, -0.1, 0.0, 0.0},

    {59.25, 4.498, -0.001, 34.499, -0.1, -0.1, -0.2},

    {59.50, 4.499, 0.001, 34.500, 0.0, 0.0, -0.1},

    {59.75, 4.500, 0.001, 34.500, 0.0, 0.0, 0.0},

    {60.00, 4.500, 0.000, 34.500, 0.0, 0.0, 0.0},

};

// ============================================================
// Target Trajectory Controller
// ============================================================

class TargetTrajectoryController
{
public:
    TargetTrajectoryController()
    {
        std::cout
            << "[TrajectoryController] Initialized\n";
    }

    bool Run()
    {
        if (!ValidateTrajectory())
        {
            return false;
        }

        std::cout
            << "[TrajectoryController] Starting 60-second trajectory\n"
            << std::endl;

        // Send initial pose before starting the timed segments.
        if (!SendPose(
                TRAJECTORY.front().x,
                TRAJECTORY.front().y,
                TRAJECTORY.front().z,
                TRAJECTORY.front().roll,
                TRAJECTORY.front().pitch,
                TRAJECTORY.front().yaw))
        {
            std::cerr
                << "[TrajectoryController] ERROR: "
                << "Failed to set initial pose\n";

            return false;
        }

        // Execute each waypoint-to-waypoint segment.
        for (std::size_t i = 0; i < TRAJECTORY.size() - 1; ++i)
        {
            const auto &start = TRAJECTORY[i];
            const auto &end = TRAJECTORY[i + 1];

            std::cout
                << "\n[TrajectoryController] Segment "
                << i + 1
                << "/"
                << TRAJECTORY.size() - 1
                << "\n";

            std::cout
                << "  Time : "
                << start.time
                << " -> "
                << end.time
                << " s\n";

            std::cout
                << "  Pose : ("
                << start.x << ", "
                << start.y << ", "
                << start.z << ") -> ("
                << end.x << ", "
                << end.y << ", "
                << end.z << ")\n";

            if (!ExecuteSegment(start, end))
            {
                std::cerr
                    << "[TrajectoryController] ERROR: "
                    << "Segment execution failed\n";

                return false;
            }
        }

        std::cout
            << "\n=============================================\n"
            << "[TrajectoryController] 60-second trajectory complete\n"
            << "[TrajectoryController] Final target pose = LOCK pose\n"
            << "=============================================\n";

        return true;
    }

private:
    gz::transport::Node node;

    // ========================================================
    // Validate waypoint configuration
    // ========================================================

    bool ValidateTrajectory() const
    {
        if (TRAJECTORY.size() < 2)
        {
            std::cerr
                << "[TrajectoryController] ERROR: "
                << "Trajectory requires at least two waypoints\n";

            return false;
        }

        if (std::abs(TRAJECTORY.front().time) > 1e-6)
        {
            std::cerr
                << "[TrajectoryController] ERROR: "
                << "Trajectory must start at t=0\n";

            return false;
        }

        for (std::size_t i = 1; i < TRAJECTORY.size(); ++i)
        {
            if (TRAJECTORY[i].time <= TRAJECTORY[i - 1].time)
            {
                std::cerr
                    << "[TrajectoryController] ERROR: "
                    << "Waypoint timestamps must be strictly increasing\n";

                return false;
            }
        }

        const double finalTime = TRAJECTORY.back().time;

        if (std::abs(
                finalTime -
                TrajectoryConfig::TOTAL_DURATION_SEC) > 1e-6)
        {
            std::cerr
                << "[TrajectoryController] ERROR: Final waypoint must be at "
                << TrajectoryConfig::TOTAL_DURATION_SEC
                << " s"
                << std::endl;

            return false;
        }

        return true;
    }

    // ========================================================
    // Execute one waypoint segment
    // ========================================================

    bool ExecuteSegment(
        const TrajectoryWaypoint &start,
        const TrajectoryWaypoint &end)
    {
        const double duration =
            end.time - start.time;

        if (duration <= 0.0)
        {
            std::cerr
                << "[TrajectoryController] ERROR: "
                << "Invalid segment duration\n";

            return false;
        }

        const int totalSteps =
            std::max(
                1,
                static_cast<int>(
                    std::round(
                        duration *
                        TrajectoryConfig::UPDATE_RATE_HZ)));

        const double dt =
            1.0 / TrajectoryConfig::UPDATE_RATE_HZ;

        // Steady clock avoids problems if system wall-clock changes.
        auto nextUpdate =
            std::chrono::steady_clock::now();

        for (int step = 1; step <= totalSteps; ++step)
        {
            const double alpha =
                static_cast<double>(step) /
                static_cast<double>(totalSteps);

            // Smooth position profile.
            const double smoothAlpha =
                SmoothStep(alpha);

            double x;
            double y;
            double z;

            InterpolatePosition(
                start,
                end,
                smoothAlpha,
                x,
                y,
                z);

            // Attitude interpolation

            const double roll =
                start.roll +
                smoothAlpha *
                    (end.roll - start.roll);

            const double pitch =
                start.pitch +
                smoothAlpha *
                    (end.pitch - start.pitch);

            const double yaw =
                start.yaw +
                smoothAlpha *
                    (end.yaw - start.yaw);

            if (!SendPose(
                    x,
                    y,
                    z,
                    roll,
                    pitch,
                    yaw))
            {
                std::cerr
                    << "[TrajectoryController] ERROR: "
                    << "Pose command failed at t="
                    << start.time + alpha * duration
                    << " s\n";

                return false;
            }

            // Print approximately once per second.
            const int printInterval =
                static_cast<int>(
                    TrajectoryConfig::UPDATE_RATE_HZ);

            if (step % printInterval == 0 ||
                step == totalSteps)
            {
                const double experimentTime =
                    start.time +
                    alpha * duration;

                std::cout
                    << std::fixed
                    << std::setprecision(2)
                    << "[TrajectoryController] "
                    << "t=" << experimentTime
                    << " s"
                    << " | pose=("
                    << x << ", "
                    << y << ", "
                    << z << ")"
                    << std::endl;
            }

            if (step < totalSteps)
            {
                nextUpdate +=
                    std::chrono::duration_cast<
                        std::chrono::steady_clock::duration>(
                        std::chrono::duration<double>(dt));

                std::this_thread::sleep_until(nextUpdate);
            }
        }

        return true;
    }

    // ========================================================
    // SmoothStep
    //
    // s(t) = 3t² - 2t³
    //
    // Gives zero interpolation velocity at both endpoints.
    // ========================================================

    static double SmoothStep(double t)
    {
        t = std::clamp(t, 0.0, 1.0);

        return t * t *
               (3.0 - 2.0 * t);
    }

    // ========================================================
    // Interpolate X/Y/Z
    // ========================================================

    static void InterpolatePosition(
        const TrajectoryWaypoint &start,
        const TrajectoryWaypoint &end,
        double alpha,
        double &x,
        double &y,
        double &z)
    {
        x =
            start.x +
            alpha * (end.x - start.x);

        y =
            start.y +
            alpha * (end.y - start.y);

        z =
            start.z +
            alpha * (end.z - start.z);
    }

    static void RpyToQuaternion(
        double roll,
        double pitch,
        double yaw,
        double &qw,
        double &qx,
        double &qy,
        double &qz)
    {
        // Degrees -> radians

        const double r =
            roll * M_PI / 180.0;

        const double p =
            pitch * M_PI / 180.0;

        const double y =
            yaw * M_PI / 180.0;

        const double cr = std::cos(r * 0.5);
        const double sr = std::sin(r * 0.5);

        const double cp = std::cos(p * 0.5);
        const double sp = std::sin(p * 0.5);

        const double cy = std::cos(y * 0.5);
        const double sy = std::sin(y * 0.5);

        qw =
            cr * cp * cy +
            sr * sp * sy;

        qx =
            sr * cp * cy -
            cr * sp * sy;

        qy =
            cr * sp * cy +
            sr * cp * sy;

        qz =
            cr * cp * sy -
            sr * sp * cy;
    }

    // ========================================================
    // Send pose to Gazebo
    // ========================================================

    bool SendPose(
        double x,
        double y,
        double z,
        double roll,
        double pitch,
        double yaw)
    {
        gz::msgs::Pose request;

        request.set_name(
            TrajectoryConfig::MODEL_NAME);

        // ========================================================
        // Position
        // ========================================================

        auto *position =
            request.mutable_position();

        position->set_x(x);
        position->set_y(y);
        position->set_z(z);

        // ========================================================
        // RPY -> Quaternion
        // ========================================================

        double qw;
        double qx;
        double qy;
        double qz;

        RpyToQuaternion(
            roll,
            pitch,
            yaw,
            qw,
            qx,
            qy,
            qz);

        auto *orientation =
            request.mutable_orientation();

        orientation->set_w(qw);
        orientation->set_x(qx);
        orientation->set_y(qy);
        orientation->set_z(qz);

        // ========================================================
        // Gazebo Service Request
        // ========================================================

        gz::msgs::Boolean response;

        bool result = false;

        const bool executed =
            node.Request(
                TrajectoryConfig::SERVICE_NAME,
                request,
                TrajectoryConfig::SERVICE_TIMEOUT_MS,
                response,
                result);

        if (!executed)
        {
            std::cerr
                << "[TrajectoryController] ERROR: "
                << "Gazebo service request timed out\n";

            return false;
        }

        if (!result || !response.data())
        {
            std::cerr
                << "[TrajectoryController] ERROR: "
                << "Gazebo rejected pose command\n";

            return false;
        }

        return true;
    }
};

// ============================================================
// Execution Layer
// ============================================================

int main()
{
    TargetTrajectoryController controller;

    const bool success =
        controller.Run();

    if (!success)
    {
        std::cerr
            << "\n[TrajectoryController] FAILED\n";

        return 1;
    }

    std::cout
        << "\n[TrajectoryController] SUCCESS\n";

    return 0;
}