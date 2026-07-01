import matplotlib.pyplot as plt
from control_node.config_control import ControlConfig

# --------------------------------------------------
# Plot Colors
# --------------------------------------------------

ERROR_X_COLOR = "tab:red"
ERROR_Y_COLOR = "tab:blue"

GUIDANCE_COLOR = "tab:orange"
DESIRED_COLOR = "tab:green"

DELTA_PITCH_COLOR = "tab:purple"
DELTA_YAW_COLOR = "tab:brown"



class ControllerGraph:

    def __init__(self):

        self.time = []

        # Image Error
        self.error_x = []
        self.error_y = []

        # Guidance
        self.guidance_pitch = []
        self.guidance_yaw = []

        # Desired Attitude
        self.desired_pitch = []
        self.desired_yaw = []

        # Increment
        self.delta_pitch = []
        self.delta_yaw = []

        # Lock State
        self.target_locked = []

        self.fig, self.axes = plt.subplots(
            6,
            1,
            figsize=(14,16)
        )

        self.fig.suptitle(
            "Closed-Loop Guidance and Attitude Control Analysis",
            fontsize=18,
        )

        self.fig.text(
            0.73,
            0.985,
            (
                "Control Rate : 30 Hz\n"
                "Controller   : Cascaded P Controller\n"
                "Rate Limit   : ±0.5 rad/s\n"
                "Pitch Limit  : ±0.30 rad\n"
                "Yaw Limit    : ±1.00 rad\n"
                "PX4 Mode     : Offboard Attitude"
            ),
            fontsize=9,
            va="top",
            bbox=dict(
                facecolor="whitesmoke",
                edgecolor="gray",
                boxstyle="round",
            ),
        )

        self.status_text = self.fig.text(
            0.50,
            0.985,
            "",
            ha="center",
            fontsize=13,
            weight="bold",
        )

        self.footer_text = self.fig.text(
            0.50,
            0.01,
            " Autonomous UAS | ROS2 • PX4 • Closed-Loop Flight Controller",
            ha="center",
            fontsize=9,
            color="gray",
        )

    def update(
        self,
        t,
        error_x,
        error_y,
        guidance_pitch,
        guidance_yaw,
        desired_pitch,
        desired_yaw,
        delta_pitch,
        delta_yaw,
        target_locked,
    ):

        self.time.append(t)

        self.error_x.append(error_x)
        self.error_y.append(error_y)

        self.guidance_pitch.append(guidance_pitch)
        self.guidance_yaw.append(guidance_yaw)

        self.desired_pitch.append(desired_pitch)
        self.desired_yaw.append(desired_yaw)

        self.delta_pitch.append(delta_pitch)
        self.delta_yaw.append(delta_yaw)

        self.target_locked.append(
            1 if target_locked else 0
        )
        if len(self.time) > 300:

            self.time.pop(0)

            self.error_x.pop(0)
            self.error_y.pop(0)

            self.guidance_pitch.pop(0)
            self.guidance_yaw.pop(0)

            self.desired_pitch.pop(0)
            self.desired_yaw.pop(0)

            self.delta_pitch.pop(0)
            self.delta_yaw.pop(0)

            self.target_locked.pop(0)

    def draw(self):

        if not self.time:
            return

        time_axis = [i / ControlConfig.CONTROL_RATE for i in range(len(self.time))]

        for ax in self.axes:

            ax.clear()

            ax.set_facecolor("#fafafa")

            ax.grid(
                True,
                linestyle=":",
                alpha=0.5,
            )

        # Image Error

        self.axes[0].plot(
            time_axis,
            self.error_x,
            color=ERROR_X_COLOR,
            linewidth=2,
            label="Error X",
        )

        self.axes[0].plot(
            time_axis,
            self.error_y,
            color=ERROR_Y_COLOR,
            linewidth=2,
            label="Error Y",
        )

        self.axes[0].set_title("Image Error")

        self.axes[0].set_ylabel("Pixels")

        self.axes[0].legend()

        # Guidance vs Desired Pitch

        self.axes[1].plot(
            time_axis,
            self.guidance_pitch,
            color=GUIDANCE_COLOR,
            linewidth=2,
            label="Guidance",
        )

        self.axes[1].plot(
            time_axis,
            self.desired_pitch,
            color=DESIRED_COLOR,
            linewidth=2,
            label="Desired",
        )

        self.axes[1].set_title("Pitch Controller")
        self.axes[1].set_ylabel("rad")

        self.axes[1].legend()

        # Guidance vs Desired Yaw

        self.axes[2].plot(
            time_axis,
            self.guidance_yaw,
            color=GUIDANCE_COLOR,
            linewidth=2,
            label="Guidance Yaw",
        )

        self.axes[2].plot(
            time_axis,
            self.desired_yaw,
            color=DESIRED_COLOR,
            linewidth=2,
            label="Desired Yaw",
        )

        self.axes[2].set_title("Yaw Controller")
        self.axes[2].set_ylabel("rad")

        self.axes[2].legend()

        # Delta

        self.axes[3].plot(
            time_axis,
            self.delta_pitch,
            color=DELTA_PITCH_COLOR,
            linewidth=2,
            label="Δ Pitch",
        )

        self.axes[3].plot(
            time_axis,
            self.delta_yaw,
            color=DELTA_YAW_COLOR,
            linewidth=2,
            label="Δ Yaw",
        )

        self.axes[3].set_title("Controller Increment")
        self.axes[3].set_ylabel("rad")

        self.axes[3].legend()

        # Desired Attitude

        self.axes[4].plot(
            time_axis,
            self.desired_pitch,
            color="tab:blue",
            linewidth=2,
            label="Desired Pitch",
        )

        self.axes[4].plot(
            time_axis,
            self.desired_yaw,
            color="tab:orange",
            linewidth=2,
            label="Desired Yaw",
        )

        self.axes[4].axhline(
            ControlConfig.MAX_PITCH,
            color="red",
            linestyle="--",
            linewidth=1.5,
            label="Pitch Limit",
        )

        self.axes[4].axhline(
            ControlConfig.MIN_PITCH,
            color="red",
            linestyle="--",
            linewidth=1.5,
        )

        self.axes[4].axhline(
            ControlConfig.MAX_YAW,
            color="orange",
            linestyle=":",
            linewidth=1.5,
            label="Yaw Limit",
        )

        self.axes[4].axhline(
            ControlConfig.MIN_YAW,
            color="orange",
            linestyle=":",
            linewidth=1.5,
        )

        self.axes[4].fill_between(
            time_axis,
            ControlConfig.MIN_PITCH,
            ControlConfig.MAX_PITCH,
            color="green",
            alpha=0.15,
        )

        self.axes[4].set_title("Desired Attitude")
        self.axes[4].set_ylabel("rad")

        self.axes[4].legend()

        # Target Lock
        self.axes[5].step(
            time_axis,
            self.target_locked,
            where="post",
            linewidth=2,
            color="tab:green",
        )

        self.axes[5].fill_between(
            time_axis,
            0,
            self.target_locked,
            step="post",
            alpha=0.25,
            color="tab:green",
        )

        self.axes[5].set_ylim(-0.2, 1.2)

        self.axes[5].set_title("Target Lock")

        self.axes[5].set_xlabel("Time (s)")
        self.axes[5].set_ylabel("Lock")

        self.axes[5].set_yticks([0, 1])
        self.axes[5].set_yticklabels(["Searching", "Locked"])

        self.axes[1].text(
            0.98,
            0.92,
            f"P={self.desired_pitch[-1]:.2f}",
            transform=self.axes[1].transAxes,
            ha="right",
        )

        self.axes[2].text(
            0.98,
            0.92,
            f"Y={self.desired_yaw[-1]:.2f}",
            transform=self.axes[2].transAxes,
            ha="right",
        )

        status = (
            "TARGET LOCKED"
            if self.target_locked[-1]
            else "TRACKING"
        )

        status_color = (
            "green"
            if self.target_locked[-1]
            else "orange"
        )

        self.status_text.set_text(status)
        self.status_text.set_color(status_color)

        plt.tight_layout(rect=[0, 0, 1, 0.97])

        plt.pause(0.001)
