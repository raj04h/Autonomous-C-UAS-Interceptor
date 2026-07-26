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
    static constexpr double LOCK_Z = 35.5;

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

    //------------------------------------------------------
    // PHASE 1
    // CENTER ACQUISITION
    // 0 - 5 s
    //------------------------------------------------------

    {0.00, 4.50, 0.00, 35.50, 0.0, 0.0, 0.0},
    {0.50, 4.62, 0.10, 35.56, 1.5, 1.0, 4.0},
    {1.00, 4.78, 0.20, 35.66, 3.0, 1.5, 8.0},
    {1.50, 4.96, 0.30, 35.78, 5.0, 2.0, 13.0},
    {2.00, 5.14, 0.36, 35.90, 7.0, 2.5, 18.0},
    {2.50, 5.28, 0.26, 35.00, 5.0, 2.0, 15.0},
    {3.00, 5.35, 0.10, 35.05, 3.0, 1.2, 10.0},
    {3.50, 5.22, -0.08, 35.96, 1.0, 0.5, 5.0},
    {4.00, 5.00, -0.18, 35.82, -2.0, 0.0, 0.0},
    {4.50, 4.74, -0.10, 35.66, -2.0, 0.0, -3.0},
    {5.00, 4.50, 0.00, 35.50, 0.0, 0.0, 0.0},

    //------------------------------------------------------
    // PHASE 2
    // WIDE UPPER-LEFT SWEEP
    // 5 - 12 s
    //------------------------------------------------------

    {5.50, 4.36, 0.12, 35.56, 1.5, 1.0, 3.0},
    {6.00, 4.20, 0.28, 35.66, 3.0, 1.5, 7.0},
    {6.50, 4.04, 0.46, 35.78, 5.0, 2.2, 11.0},
    {7.00, 3.90, 0.66, 35.90, 7.0, 3.0, 16.0},
    {7.50, 3.78, 0.86, 35.04, 9.0, 3.8, 21.0},
    {8.00, 3.70, 1.04, 35.16, 11.0, 4.5, 26.0},
    {8.50, 3.72, 1.18, 35.24, 13.0, 5.0, 30.0},
    {9.00, 3.80, 1.28, 35.30, 14.0, 5.0, 35.0},
    {9.50, 3.94, 1.35, 35.30, 14.0, 5.0, 37.0},
    {10.00, 4.12, 1.35, 35.28, 13.0, 4.5, 39.0},
    {10.50, 4.35, 1.30, 35.22, 11.0, 4.0, 40.0},
    {11.00, 4.58, 1.22, 35.12, 9.0, 3.5, 41.0},
    {11.50, 4.82, 1.10, 35.00, 7.0, 3.0, 42.0},
    {12.00, 5.04, 0.94, 35.88, 5.0, 2.5, 42.0},

    //------------------------------------------------------
    // PHASE 3
    // WIDE S-TURN
    // 12 - 20 s
    //------------------------------------------------------

    {12.50, 5.22, 0.78, 35.78, 4.0, 2.0, 39.0},
    {13.00, 5.36, 0.60, 35.66, 2.0, 1.5, 35.0},
    {13.50, 5.46, 0.40, 35.54, 0.0, 0.8, 29.0},
    {14.00, 5.50, 0.18, 35.42, -2.0, 0.0, 23.0},
    {14.50, 5.46, -0.06, 35.32, -4.0, -1.0, 16.0},
    {15.00, 5.36, -0.30, 35.24, -7.0, -2.0, 9.0},
    {15.50, 5.20, -0.54, 35.18, -10.0, -3.0, 1.0},
    {16.00, 5.00, -0.76, 35.20, -12.0, -3.5, -8.0},
    {16.50, 4.78, -0.96, 35.26, -14.0, -3.5, -16.0},
    {17.00, 4.56, -1.12, 35.36, -15.0, -3.0, -24.0},
    {17.50, 4.38, -1.24, 35.48, -15.0, -2.2, -31.0},
    {18.00, 4.28, -1.32, 35.60, -14.0, -1.2, -36.0},
    {18.50, 4.26, -1.35, 35.70, -12.0, -0.2, -40.0},
    {19.00, 4.32, -1.32, 35.78, -10.0, 0.8, -42.0},
    {19.50, 4.42, -1.26, 35.82, -8.0, 1.4, -42.0},
    {20.00, 4.56, -1.16, 35.82, -6.0, 2.0, -40.0},

    //------------------------------------------------------
    // PHASE 4
    // LARGE DIAGONAL DIVE / RECOVERY
    // 20 - 28 s
    //------------------------------------------------------

    {20.50, 4.72, -1.06, 35.76, -5.0, 1.0, -36.0},
    {21.00, 4.90, -0.92, 35.66, -4.0, 0.0, -31.0},
    {21.50, 5.08, -0.74, 35.52, -2.0, -1.5, -25.0},
    {22.00, 5.24, -0.52, 35.36, 1.0, -3.0, -18.0},
    {22.50, 5.38, -0.28, 35.20, 4.0, -4.0, -10.0},
    {23.00, 5.48, 0.00, 35.06, 7.0, -4.5, -2.0},
    {23.50, 5.50, 0.28, 34.96, 10.0, -5.0, 7.0},
    {24.00, 5.44, 0.56, 34.90, 13.0, -4.5, 15.0},
    {24.50, 5.30, 0.82, 34.94, 15.0, -3.5, 23.0},
    {25.00, 5.10, 1.04, 35.04, 16.0, -2.5, 30.0},
    {25.50, 4.86, 1.20, 35.18, 15.0, -1.0, 36.0},
    {26.00, 4.60, 1.30, 35.35, 13.0, 0.5, 40.0},
    {26.50, 4.36, 1.35, 35.50, 10.0, 2.0, 42.0},
    {27.00, 4.16, 1.30, 35.64, 7.0, 3.0, 41.0},
    {27.50, 4.02, 1.20, 35.76, 4.0, 3.5, 38.0},
    {28.00, 3.96, 1.04, 35.82, 1.0, 3.5, 35.0},

    //------------------------------------------------------
    // PHASE 5
    // LARGE CROSS-CENTER SWEEP
    // 28 - 36 s
    //------------------------------------------------------

    {28.50, 3.98, 0.90, 35.82, 0.0, 3.0, 30.0},
    {29.00, 4.04, 0.74, 35.78, -2.0, 2.5, 25.0},
    {29.50, 4.12, 0.58, 35.72, -4.0, 2.0, 20.0},
    {30.00, 4.22, 0.42, 35.66, -6.0, 1.2, 15.0},
    {30.50, 4.32, 0.28, 35.60, -7.0, 0.7, 10.0},
    {31.00, 4.40, 0.16, 35.55, -7.0, 0.2, 6.0},
    {31.50, 4.46, 0.08, 35.52, -5.0, 0.0, 3.0},
    {32.00, 4.49, 0.03, 35.50, -3.0, 0.0, 1.0},
    {32.50, 4.50, 0.00, 35.50, 0.0, 0.0, 0.0},

    {33.00, 4.53, -0.06, 35.48, 3.0, -0.3, -2.0},
    {33.50, 4.60, -0.16, 35.44, 5.0, -0.8, -5.0},
    {34.00, 4.72, -0.32, 35.38, 8.0, -1.2, -9.0},
    {34.50, 4.88, -0.52, 35.32, 10.0, -1.5, -14.0},
    {35.00, 5.06, -0.74, 35.30, 12.0, -1.2, -20.0},
    {35.50, 5.24, -0.94, 35.35, 13.0, -0.5, -26.0},
    {36.00, 5.38, -1.10, 35.44, 12.0, 0.8, -31.0},

    //------------------------------------------------------
    // PHASE 6
    // LARGE OPPOSITE CLIMBING S-TURN
    // 36 - 44 s
    //------------------------------------------------------

    {36.50, 5.46, -0.94, 35.56, 10.0, 1.8, -27.0},
    {37.00, 5.50, -0.74, 35.72, 8.0, 3.0, -22.0},
    {37.50, 5.48, -0.50, 35.90, 5.0, 4.0, -16.0},
    {38.00, 5.40, -0.24, 35.06, 2.0, 5.0, -9.0},
    {38.50, 5.28, 0.04, 35.20, -1.0, 5.5, -1.0},
    {39.00, 5.12, 0.32, 35.28, -4.0, 5.5, 7.0},
    {39.50, 4.92, 0.58, 35.30, -7.0, 5.0, 15.0},
    {40.00, 4.68, 0.82, 35.28, -10.0, 4.0, 23.0},
    {40.50, 4.42, 1.02, 35.20, -13.0, 3.0, 30.0},
    {41.00, 4.18, 1.18, 35.08, -15.0, 2.0, 36.0},
    {41.50, 3.98, 1.28, 35.94, -16.0, 1.0, 40.0},
    {42.00, 3.84, 1.32, 35.80, -15.0, 0.0, 42.0},
    {42.50, 3.76, 1.28, 35.68, -12.0, -1.0, 41.0},
    {43.00, 3.74, 1.18, 35.58, -9.0, -1.5, 37.0},
    {43.50, 3.80, 1.04, 35.52, -6.0, -1.5, 32.0},
    {44.00, 3.92, 0.86, 35.50, -3.0, -1.0, 26.0},

    //------------------------------------------------------
    // PHASE 7
    // LARGE FIGURE-EIGHT / DOGFIGHT WEAVE
    // 44 - 55 s
    //------------------------------------------------------

    {44.50, 4.04, 0.70, 35.48, -2.0, -0.5, 22.0},
    {45.00, 4.18, 0.52, 35.46, 0.0, 0.0, 17.0},
    {45.50, 4.32, 0.32, 35.47, 2.0, 0.5, 11.0},
    {46.00, 4.44, 0.14, 35.49, 4.0, 0.7, 5.0},
    {46.50, 4.50, 0.01, 35.50, 5.0, 0.3, 1.0},

    {47.00, 4.62, -0.16, 35.46, 7.0, -0.5, -6.0},
    {47.50, 4.82, -0.38, 35.38, 10.0, -1.5, -13.0},
    {48.00, 5.04, -0.60, 35.28, 12.0, -2.5, -20.0},
    {48.50, 5.24, -0.76, 35.20, 13.0, -3.0, -26.0},
    {49.00, 5.38, -0.82, 35.18, 12.0, -2.5, -30.0},
    {49.50, 5.44, -0.74, 35.24, 9.0, -1.5, -28.0},
    {50.00, 5.36, -0.54, 35.35, 5.0, -0.5, -21.0},
    {50.50, 5.16, -0.28, 35.44, 1.0, 0.5, -12.0},

    {51.00, 4.88, -0.06, 35.49, -3.0, 1.0, -4.0},
    {51.50, 4.58, 0.08, 35.52, -6.0, 0.8, 4.0},
    {52.00, 4.30, 0.26, 35.58, -9.0, 0.2, 11.0},
    {52.50, 4.06, 0.48, 35.66, -11.0, -0.8, 18.0},
    {53.00, 3.88, 0.70, 35.74, -13.0, -1.5, 24.0},
    {53.50, 3.80, 0.86, 35.78, -12.0, -1.8, 28.0},
    {54.00, 3.84, 0.90, 35.76, -9.0, -1.2, 27.0},
    {54.50, 3.98, 0.78, 35.68, -6.0, -0.5, 23.0},
    {55.00, 4.16, 0.58, 35.60, -3.0, 0.0, 17.0},

    //------------------------------------------------------
    // PHASE 8
    // FINAL CENTER CONVERGENCE / LOCK
    // 55 - 60 s
    //------------------------------------------------------

    {55.25, 4.20, 0.52, 35.59, -2.8, 0.1, 16.0},
    {55.50, 4.25, 0.45, 35.58, -2.5, 0.2, 14.0},
    {55.75, 4.30, 0.38, 35.57, -2.2, 0.3, 12.0},
    {56.00, 4.35, 0.31, 35.56, -1.8, 0.3, 10.0},
    {56.25, 4.39, 0.24, 35.55, -1.4, 0.3, 8.0},
    {56.50, 4.43, 0.18, 35.54, -1.0, 0.2, 6.0},
    {56.75, 4.46, 0.12, 35.53, -0.6, 0.2, 5.0},
    {57.00, 4.48, 0.08, 35.52, -0.3, 0.1, 4.0},
    {57.25, 4.49, 0.04, 35.51, -0.1, 0.0, 2.5},
    {57.50, 4.50, 0.02, 35.50, 0.0, 0.0, 1.0},

    {57.75, 4.50, 0.005, 35.50, 0.0, 0.0, 0.5},
    {58.00, 4.50, 0.000, 35.50, 0.0, 0.0, 0.0},

    {58.25, 4.502, 0.003, 35.501, 0.1, 0.1, 0.2},
    {58.50, 4.503, 0.001, 35.502, 0.1, 0.1, 0.3},
    {58.75, 4.502, -0.002, 35.501, 0.0, 0.0, 0.2},
    {59.00, 4.500, -0.003, 35.500, -0.1, 0.0, 0.0},
    {59.25, 4.498, -0.001, 35.499, -0.1, -0.1, -0.2},
    {59.50, 4.499, 0.001, 35.500, 0.0, 0.0, -0.1},
    {59.75, 4.500, 0.001, 35.500, 0.0, 0.0, 0.0},

    {60.00, 4.500, 0.000, 35.500, 0.0, 0.0, 0.0},
};

// ============================================================
// Target Trajectory Controller
// ============================================================

class TargetTrajectoryController {
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