/*
 * Gazebo FPV Camera Recorder
 *
 * Responsibilities:
 *   1. Subscribe to Gazebo FPV camera topic
 *   2. Receive gz::msgs::Image frames
 *   3. Convert RGB -> OpenCV BGR
 *   4. Record 1280x720 @ 30 FPS
 *   5. Cleanly finalize MP4 on Ctrl+C
 *
 * Input:
 *   /air_to_air/fpv_camera/image
 *
 * Output:
 *   air_to_air_raw.mp4
 */

#include <gz/msgs/image.pb.h>
#include <gz/transport/Node.hh>

#include <opencv2/opencv.hpp>

#include <atomic>
#include <chrono>
#include <csignal>
#include <cstdint>
#include <iostream>
#include <mutex>
#include <string>
#include <thread>

// ============================================================
// Configuration
// ============================================================

class RecorderConfig
{
public:
    // Gazebo FPV camera topic
    static constexpr const char *IMAGE_TOPIC =
        "/air_to_air/fpv_camera/image";

    // Output video
    // Output video
    static constexpr const char *OUTPUT_FILE =
        "air_to_air_raw.mkv";

    // Must match air_to_air.sdf
    static constexpr int FRAME_WIDTH = 1280;
    static constexpr int FRAME_HEIGHT = 720;
    static constexpr double FPS = 30.0;

    // Print diagnostics once per second
    static constexpr std::uint64_t LOG_INTERVAL_FRAMES = 30;
};

// ============================================================
// Global shutdown
// ============================================================

std::atomic<bool> g_running{true};

void SignalHandler(int)
{
    g_running.store(false);
}

// ============================================================
// Camera Recorder
// ============================================================

class GazeboCameraRecorder
{
public:
    GazeboCameraRecorder()
    {
        std::cout
            << "\n=============================================\n"
            << " Counter-UAS Gazebo FPV Camera Recorder\n"
            << "=============================================\n"
            << " Topic      : "
            << RecorderConfig::IMAGE_TOPIC
            << "\n"
            << " Output     : "
            << RecorderConfig::OUTPUT_FILE
            << "\n"
            << " Resolution : "
            << RecorderConfig::FRAME_WIDTH
            << "x"
            << RecorderConfig::FRAME_HEIGHT
            << "\n"
            << " FPS        : "
            << RecorderConfig::FPS
            << "\n"
            << "=============================================\n\n";
    }

    ~GazeboCameraRecorder()
    {
        Stop();
    }

    // ========================================================
    // Initialize subscriber
    // ========================================================

    bool Initialize()
    {
        const bool subscribed =
            node.Subscribe(
                RecorderConfig::IMAGE_TOPIC,
                &GazeboCameraRecorder::OnImage,
                this);

        if (!subscribed)
        {
            std::cerr
                << "[CameraRecorder] ERROR: "
                << "Failed to subscribe to "
                << RecorderConfig::IMAGE_TOPIC
                << std::endl;

            return false;
        }

        std::cout
            << "[CameraRecorder] Subscribed successfully\n"
            << "[CameraRecorder] Waiting for first frame..."
            << std::endl;

        return true;
    }

    // ========================================================
    // Main execution loop
    // ========================================================

    void Run()
    {
        while (g_running.load())
        {
            std::this_thread::sleep_for(
                std::chrono::milliseconds(100));
        }

        Stop();
    }

private:
    gz::transport::Node node;

    cv::VideoWriter writer;

    std::mutex writerMutex;

    bool writerInitialized{false};

    std::uint64_t frameCount{0};

    std::chrono::steady_clock::time_point firstFrameTime;

    // ========================================================
    // Gazebo image callback
    // ========================================================

    void OnImage(const gz::msgs::Image &msg)
    {
        if (!g_running.load())
        {
            return;
        }

        std::lock_guard<std::mutex> lock(writerMutex);

        // ----------------------------------------------------
        // Validate dimensions
        // ----------------------------------------------------

        const int width =
            static_cast<int>(msg.width());

        const int height =
            static_cast<int>(msg.height());

        if (width != RecorderConfig::FRAME_WIDTH ||
            height != RecorderConfig::FRAME_HEIGHT)
        {
            std::cerr
                << "[CameraRecorder] ERROR: "
                << "Unexpected resolution: "
                << width
                << "x"
                << height
                << " | Expected: "
                << RecorderConfig::FRAME_WIDTH
                << "x"
                << RecorderConfig::FRAME_HEIGHT
                << std::endl;

            return;
        }

        // ----------------------------------------------------
        // Validate RGB buffer
        //
        // SDF:
        // <format>R8G8B8</format>
        //
        // 1280 * 720 * 3 bytes
        // ----------------------------------------------------

        const std::size_t expectedSize =
            static_cast<std::size_t>(width) *
            static_cast<std::size_t>(height) *
            3;

        const std::string &imageData =
            msg.data();

        if (imageData.size() < expectedSize)
        {
            std::cerr
                << "[CameraRecorder] ERROR: "
                << "Invalid image buffer size: "
                << imageData.size()
                << " | Expected: "
                << expectedSize
                << std::endl;

            return;
        }

        // ----------------------------------------------------
        // Wrap Gazebo RGB data
        // ----------------------------------------------------

        cv::Mat rgbFrame(
            height,
            width,
            CV_8UC3,
            const_cast<char *>(imageData.data()));

        // ----------------------------------------------------
        // Convert RGB -> BGR
        //
        // Gazebo: RGB
        // OpenCV VideoWriter: BGR
        // ----------------------------------------------------

        cv::Mat bgrFrame;

        cv::cvtColor(
            rgbFrame,
            bgrFrame,
            cv::COLOR_RGB2BGR);

        // ----------------------------------------------------
        // Initialize writer on first valid frame
        // ----------------------------------------------------

        if (!writerInitialized)
        {
            if (!InitializeWriter())
            {
                g_running.store(false);

                return;
            }

            firstFrameTime =
                std::chrono::steady_clock::now();
        }

        // ----------------------------------------------------
        // Write frame
        // ----------------------------------------------------

        writer.write(bgrFrame);

        ++frameCount;

        // ----------------------------------------------------
        // Runtime diagnostics
        // ----------------------------------------------------

        if (frameCount %
                RecorderConfig::LOG_INTERVAL_FRAMES ==
            0)
        {
            PrintStatistics();
        }
    }

    // ========================================================
    // Initialize OpenCV VideoWriter
    // ========================================================

    bool InitializeWriter()
    {
        /*
         * MP4V chosen for compatibility with standard
         * Ubuntu OpenCV / FFmpeg installations.
         */

        const int fourcc =
            cv::VideoWriter::fourcc(
                'F',
                'F',
                'V',
                '1');

        writer.open(
            RecorderConfig::OUTPUT_FILE,
            fourcc,
            RecorderConfig::FPS,
            cv::Size(
                RecorderConfig::FRAME_WIDTH,
                RecorderConfig::FRAME_HEIGHT),
            true);

        if (!writer.isOpened())
        {
            std::cerr
                << "[CameraRecorder] ERROR: "
                << "Failed to create "
                << RecorderConfig::OUTPUT_FILE
                << std::endl;

            return false;
        }

        writerInitialized = true;

        std::cout
            << "\n[CameraRecorder] Recording started"
            << "\n"
            << "[CameraRecorder] File       : "
            << RecorderConfig::OUTPUT_FILE
            << "\n"
            << "[CameraRecorder] Resolution : "
            << RecorderConfig::FRAME_WIDTH
            << "x"
            << RecorderConfig::FRAME_HEIGHT
            << "\n"
            << "[CameraRecorder] FPS        : "
            << RecorderConfig::FPS
            << "\n"
            << "[CameraRecorder] Codec      : FFV1 (Lossless)"
            << "\n"
            << "[CameraRecorder] Press Ctrl+C to stop."
            << "\n"
            << std::endl;

        return true;
    }

    // ========================================================
    // Statistics
    // ========================================================

    void PrintStatistics() const
    {
        const auto now =
            std::chrono::steady_clock::now();

        const double elapsed =
            std::chrono::duration<double>(
                now - firstFrameTime)
                .count();

        const double receiveRate =
            elapsed > 0.0
                ? static_cast<double>(frameCount) /
                      elapsed
                : 0.0;

        const double videoDuration =
            static_cast<double>(frameCount) /
            RecorderConfig::FPS;

        std::cout
            << "[CameraRecorder]"
            << " Frames=" << frameCount
            << " | WallTime=" << elapsed << " s"
            << " | VideoTime=" << videoDuration << " s"
            << " | ReceiveRate=" << receiveRate << " FPS"
            << std::endl;
    }

    // ========================================================
    // Cleanup
    // ========================================================

    void Stop()
    {
        std::lock_guard<std::mutex> lock(writerMutex);

        if (!writerInitialized)
        {
            return;
        }

        if (writer.isOpened())
        {
            writer.release();
        }

        const double duration =
            static_cast<double>(frameCount) /
            RecorderConfig::FPS;

        std::cout
            << "\n=============================================\n"
            << "[CameraRecorder] Recording stopped\n"
            << "[CameraRecorder] Frames   : "
            << frameCount
            << "\n"
            << "[CameraRecorder] Duration : "
            << duration
            << " s\n"
            << "[CameraRecorder] Output   : "
            << RecorderConfig::OUTPUT_FILE
            << "\n"
            << "=============================================\n";

        writerInitialized = false;
    }
};

// ============================================================
// Execution Layer
// ============================================================

int main()
{
    std::signal(
        SIGINT,
        SignalHandler);

    std::signal(
        SIGTERM,
        SignalHandler);

    GazeboCameraRecorder recorder;

    if (!recorder.Initialize())
    {
        std::cerr
            << "[CameraRecorder] FAILED"
            << std::endl;

        return 1;
    }

    recorder.Run();

    std::cout
        << "[CameraRecorder] SUCCESS"
        << std::endl;

    return 0;
}