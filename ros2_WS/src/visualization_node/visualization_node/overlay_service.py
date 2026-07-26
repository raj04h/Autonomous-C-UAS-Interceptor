import cv2

from visualization_node.config_visualization import (
    VisualizationConfig,
)


class OverlayService:

    def __init__(self):

        self.cfg = VisualizationConfig
    # Header
    def draw_header(
        self,
        frame,
        subscriber,
    ):

        # Background

        cv2.rectangle(
            frame,
            (0, 0),
            (self.cfg.WINDOW_WIDTH, self.cfg.HEADER_HEIGHT),
            (35, 35, 35),
            -1,
        )

        # Title

        cv2.putText(
            frame,
            "Counter-UAS Autonomous Interceptor",
            (20, 30),
            cv2.FONT_HERSHEY_SIMPLEX,
            0.75,
            self.cfg.GREEN,
            2,
        )

        # FPS

        fps = f"{subscriber.fps:.1f}"

        cv2.putText(
            frame,
            "FPS :",
            (760, 30),
            cv2.FONT_HERSHEY_SIMPLEX,
            0.60,
            self.cfg.WHITE,
            2,
        )

        cv2.putText(
            frame,
            fps,
            (820, 30),
            cv2.FONT_HERSHEY_SIMPLEX,
            0.60,
            self.cfg.GREEN,
            2,
        )

        # OFFBOARD STATUS

        offboard_text = "INACTIVE"
        offboard_color = (0, 0, 255)

        if subscriber.latest_control is not None:

            if subscriber.latest_control.offboard_enabled:

                offboard_text = "ACTIVE"
                offboard_color = (0, 255, 0)

        cv2.putText(
            frame,
            "OFFBOARD :",
            (860, 30),
            cv2.FONT_HERSHEY_SIMPLEX,
            0.60,
            self.cfg.WHITE,
            2,
        )

        cv2.putText(
            frame,
            offboard_text,
            (995, 30),
            cv2.FONT_HERSHEY_SIMPLEX,
            0.60,
            offboard_color,
            2,
        )

        # TARGET LOCK

        lock_text = "SEARCH"
        lock_color = (0, 0, 255)

        if subscriber.latest_guidance is not None:

            if subscriber.latest_guidance.target_locked:

                lock_text = "LOCKED"
                lock_color = self.cfg.GREEN

        cv2.putText(
            frame,
            "LOCK :",
            (1100, 30),
            cv2.FONT_HERSHEY_SIMPLEX,
            0.60,
            self.cfg.WHITE,
            2,
        )

        cv2.putText(
            frame,
            lock_text,
            (1165, 30),
            cv2.FONT_HERSHEY_SIMPLEX,
            0.60,
            lock_color,
            2,
        )
    # Left Panel
    def draw_left_panel(
        self,
        frame,
        detection,
        track,
        target_state,
    ):

        x = 20
        y = 80

        # Detection

        class_name = "--"
        confidence = "--"
        bbox = "--"
        center = "--"

        if (
            detection is not None
            and detection.valid
        ):

            class_name = detection.class_name
            confidence = f"{detection.confidence:.2f}"

            bbox = (
                f"({int(detection.x1)}, {int(detection.y1)}) - "
                f"({int(detection.x2)}, {int(detection.y2)})"
            )

            cx = int((detection.x1 + detection.x2) / 2)
            cy = int((detection.y1 + detection.y2) / 2)

            center = f"({cx}, {cy})"

        # Tracking

        track_id = "--"
        confirmed = "--"

        if track is not None:

            track_id = str(track.track_id)
            confirmed = str(track.confirmed)

        # State Estimation

        position = "--"
        velocity = "--"
        prediction = "--"
        acceleration = "--"

        if target_state is not None:

            position = f"({target_state.x:.1f}, " f"{target_state.y:.1f})"

            velocity = f"({target_state.vx:.1f}, " f"{target_state.vy:.1f})"

            prediction = (
                f"({target_state.pred_x:.1f}, "
                f"{target_state.pred_y:.1f})"
            )

            acceleration = (
                f"({target_state.ax:.2f}, "
                f"{target_state.ay:.2f})"
            )

        # Panel Data

        sections = [
            (
                "Detection",
                [
                    f"Class : {class_name}",
                    f"Confidence : {confidence}",
                    f"BBox : {bbox}",
                    f"Center : {center}",
                ],
            ),
            (
                "Tracking",
                [
                    f"Track ID : {track_id}",
                    f"Confirmed : {confirmed}",
                ],
            ),
            (
                "Estimation",
                [
                    f"Position : {position}",
                    f"Velocity : {velocity}",
                    f"Prediction : {prediction}",
                    f"Acceleration : {acceleration}",
                ],
            ),
        ]

        # Draw Panel

        for title, lines in sections:

            cv2.putText(
                frame,
                title,
                (x, y),
                cv2.FONT_HERSHEY_SIMPLEX,
                0.75,
                self.cfg.YELLOW,
                2,
            )

            y += 35

            for line in lines:

                cv2.putText(
                    frame,
                    line,
                    (x, y),
                    cv2.FONT_HERSHEY_SIMPLEX,
                    0.55,
                    self.cfg.WHITE,
                    1,
                )

                y += 28

            y += 40
    # Right Panel
    def draw_right_panel(
        self,
        frame,
        guidance,
        control,
    ):

        x = self.cfg.WINDOW_WIDTH - 240
        y = 80

        # Guidance

        error_x = "--"
        error_y = "--"
        pitch_cmd = "--"
        yaw_cmd = "--"

        if guidance is not None:

            error_x = f"{guidance.error_x:.2f}"
            error_y = f"{guidance.error_y:.2f}"

            pitch_cmd = f"{guidance.pitch_command:.3f}"
            yaw_cmd = f"{guidance.yaw_command:.3f}"

        # Control

        roll = "--"
        pitch = "--"
        yaw = "--"
        thrust = "--"
        offboard = "--"

        if control is not None:

            roll = f"{control.roll_setpoint:.3f}"
            pitch = f"{control.pitch_setpoint:.3f}"
            yaw = f"{control.yaw_setpoint:.3f}"

            thrust = f"{control.collective_thrust:.2f}"

            offboard = str(control.offboard_enabled)

        # Panel Data

        sections = [
            (
                "Guidance",
                [
                    f"Error X : {error_x}",
                    f"Error Y : {error_y}",
                    f"Pitch   : {pitch_cmd}",
                    f"Yaw     : {yaw_cmd}",
                ],
            ),
            (
                "Control",
                [
                    f"Roll      : {roll}",
                    f"Pitch     : {pitch}",
                    f"Yaw       : {yaw}",
                    f"Thrust    : {thrust}",
                    f"Offboard  : {offboard}",
                ],
            ),
        ]

        # Draw Panel

        for title, lines in sections:

            cv2.putText(
                frame,
                title,
                (x, y),
                cv2.FONT_HERSHEY_SIMPLEX,
                0.75,
                self.cfg.YELLOW,
                2,
            )

            y += 35

            for line in lines:

                cv2.putText(
                    frame,
                    line,
                    (x, y),
                    cv2.FONT_HERSHEY_SIMPLEX,
                    0.55,
                    self.cfg.WHITE,
                    1,
                )

                y += 28

            y += 40

    # Camera Crosshair

    def draw_crosshair(self, frame, guidance):

        cx = self.cfg.WINDOW_WIDTH // 2
        cy = self.cfg.WINDOW_HEIGHT // 2

        size = self.cfg.CROSSHAIR_SIZE

        color = self.cfg.GREEN

        if guidance is not None:

            color = self.cfg.YELLOW

            if guidance.target_locked:
                color = self.cfg.RED

        cv2.line(
            frame,
            (cx - size, cy),
            (cx + size, cy),
            color,
            2,
        )

        cv2.line(
            frame,
            (cx, cy - size),
            (cx, cy + size),
            color,
            2,
        )

        cv2.circle(
            frame,
            (cx, cy),
            5,
            color,
            -1,
        )
    # Detection Bounding Box
    def draw_detection_bbox(
        self,
        frame,
        detection,
    ):

        if detection is None:
            return
        if not detection.valid:
            return

        x1 = int(detection.x1)
        y1 = int(detection.y1)
        x2 = int(detection.x2)
        y2 = int(detection.y2)

        # Tactical Corner Box

        corner = 20
        thickness = 2

        # Top Left
        cv2.line(
            frame,
            (x1, y1),
            (x1 + corner, y1),
            self.cfg.RED,
            thickness,
        )

        cv2.line(
            frame,
            (x1, y1),
            (x1, y1 + corner),
            self.cfg.RED,
            thickness,
        )

        # Top Right
        cv2.line(
            frame,
            (x2, y1),
            (x2 - corner, y1),
            self.cfg.RED,
            thickness,
        )

        cv2.line(
            frame,
            (x2, y1),
            (x2, y1 + corner),
            self.cfg.RED,
            thickness,
        )

        # Bottom Left
        cv2.line(
            frame,
            (x1, y2),
            (x1 + corner, y2),
            self.cfg.RED,
            thickness,
        )

        cv2.line(
            frame,
            (x1, y2),
            (x1, y2 - corner),
            self.cfg.RED,
            thickness,
        )

        # Bottom Right
        cv2.line(
            frame,
            (x2, y2),
            (x2 - corner, y2),
            self.cfg.RED,
            thickness,
        )

        cv2.line(
            frame,
            (x2, y2),
            (x2, y2 - corner),
            self.cfg.RED,
            thickness,
        )

        # Label Background
        label = f"{detection.class_name} {detection.confidence:.2f}"

        (w, h), _ = cv2.getTextSize(
            label,
            cv2.FONT_HERSHEY_SIMPLEX,
            0.5,
            1,
        )

        cv2.rectangle(
            frame,
            (x1, y1 - 25),
            (x1 + w + 10, y1),
            self.cfg.GREEN,
            -1,
        )

        # Label Text
        cv2.putText(
            frame,
            label,
            (x1 + 5, y1 - 7),
            cv2.FONT_HERSHEY_SIMPLEX,
            0.5,
            (0, 0, 0),
            1,
        )    

    # Track Information
    def draw_track(
        self,
        frame,
        track,
    ):

        if track is None:
            return

        if not track.valid:
            return

        # Track Center

        cx = int(track.center_x)
        cy = int(track.center_y)

        # Military Target Reticle

        gap = 8
        length = 18
        thickness = 2

        # Left
        cv2.line(
            frame,
            (cx - length, cy),
            (cx - gap, cy),
            self.cfg.GREEN,
            thickness,
        )

        # Right
        cv2.line(
            frame,
            (cx + gap, cy),
            (cx + length, cy),
            self.cfg.GREEN,
            thickness,
        )

        # Top
        cv2.line(
            frame,
            (cx, cy - length),
            (cx, cy - gap),
            self.cfg.GREEN,
            thickness,
        )

        # Bottom
        cv2.line(
            frame,
            (cx, cy + gap),
            (cx, cy + length),
            self.cfg.GREEN,
            thickness,
        )

        # Center Ring
        cv2.circle(
            frame,
            (cx, cy),
            6,
            self.cfg.RED,
            2,
        )
        # Track ID

        label = f"TGT-{track.track_id}"

        cv2.putText(
            frame,
            label,
            (cx + 12, cy - 12),
            cv2.FONT_HERSHEY_SIMPLEX,
            0.55,
            self.cfg.RED,
            2,
        )
    # Estimated Position
    def draw_estimated_position(
        self,
        frame,
        target_state,
    ):

        if target_state is None:
            return

        if not target_state.valid:
            return

        x = int(target_state.x)
        y = int(target_state.y)

        pred_x = int(target_state.pred_x)
        pred_y = int(target_state.pred_y)

        # Prediction Line

        cv2.line(
            frame,
            (x, y),
            (pred_x, pred_y),
            self.cfg.CYAN,
            2,
        )

        # Predicted Position

        cv2.circle(
            frame,
            (pred_x, pred_y),
            7,
            self.cfg.BLUE,
            2,
        )

        cv2.putText(
            frame,
            "PRED",
            (pred_x + 10, pred_y - 10),
            cv2.FONT_HERSHEY_SIMPLEX,
            0.5,
            self.cfg.BLUE,
            2,
        )

        # Filled Cyan Circle
        cv2.circle(
            frame,
            (x, y),
            6,
            self.cfg.CYAN,
            -1,
        )

        # White Outline
        cv2.circle(
            frame,
            (x, y),
            8,
            self.cfg.WHITE,
            2,
        )

        # Label
        cv2.putText(
            frame,
            "EST",
            (x + 12, y - 10),
            cv2.FONT_HERSHEY_SIMPLEX,
            0.5,
            self.cfg.CYAN,
            2,
        )
    # Panel Background
    def draw_panel_background(self, frame):

        overlay = frame.copy()

        # Left Panel
        cv2.rectangle(
            overlay,
            (10, 55),
            (320, 700),
            (30, 30, 30),
            -1,
        )

        # Right Panel
        cv2.rectangle(
            overlay,
            (960, 55),
            (1270, 700),
            (30, 30, 30),
            -1,
        )

        alpha = 0.45

        cv2.addWeighted(
            overlay,
            alpha,
            frame,
            1 - alpha,
            0,
            frame,
        )

    def draw_guidance_vector(
        self,
        frame,
        guidance,
    ):

        if guidance is None:
            return

        if not guidance.valid:
            return

        # Camera center
        center_x = self.cfg.WINDOW_WIDTH // 2
        center_y = self.cfg.WINDOW_HEIGHT // 2

        # Target position
        target_x = int(center_x + guidance.error_x)
        target_y = int(center_y + guidance.error_y)

        # Guidance vector
        cv2.arrowedLine(
            frame,
            (center_x, center_y),
            (target_x, target_y),
            self.cfg.YELLOW,
            2,
            tipLength=0.15,
        )

        # Label
        cv2.putText(
            frame,
            "GUIDANCE",
            (
                (center_x + target_x) // 2,
                (center_y + target_y) // 2 - 10,
            ),
            cv2.FONT_HERSHEY_SIMPLEX,
            0.5,
            self.cfg.YELLOW,
            2,
        )
    # Footer
    def draw_footer(
        self,
        frame,
    ):

        footer_top = self.cfg.WINDOW_HEIGHT - self.cfg.FOOTER_HEIGHT

        # Transparent Background

        overlay = frame.copy()

        cv2.rectangle(
            overlay,
            (0, footer_top),
            (
                self.cfg.WINDOW_WIDTH,
                self.cfg.WINDOW_HEIGHT,
            ),
            (30, 30, 30),
            -1,
        )

        cv2.addWeighted(
            overlay,
            0.45,
            frame,
            0.55,
            0,
            frame,
        )

        y = footer_top + 28
        marker_y = y - 5

        # Track Center

        cv2.circle(
            frame,
            (35, marker_y),
            6,
            self.cfg.RED,
            -1,
        )

        cv2.putText(
            frame,
            "Track Center",
            (50, y),
            cv2.FONT_HERSHEY_SIMPLEX,
            0.55,
            self.cfg.WHITE,
            1,
        )

        # Estimated Position

        cv2.circle(
            frame,
            (220, marker_y),
            6,
            self.cfg.CYAN,
            -1,
        )

        cv2.circle(
            frame,
            (220, marker_y),
            8,
            self.cfg.WHITE,
            2,
        )

        cv2.putText(
            frame,
            "Estimated Position",
            (238, y),
            cv2.FONT_HERSHEY_SIMPLEX,
            0.55,
            self.cfg.WHITE,
            1,
        )

        # Predicted Position

        cv2.circle(
            frame,
            (455, marker_y),
            8,
            self.cfg.BLUE,
            2,
        )

        cv2.putText(
            frame,
            "Predicted Position",
            (473, y),
            cv2.FONT_HERSHEY_SIMPLEX,
            0.55,
            self.cfg.WHITE,
            1,
        )

        # Guidance

        cv2.arrowedLine(
            frame,
            (690, marker_y),
            (720, marker_y),
            self.cfg.YELLOW,
            2,
            tipLength=0.35,
        )

        cv2.putText(
            frame,
            "Guidance",
            (730, y),
            cv2.FONT_HERSHEY_SIMPLEX,
            0.55,
            self.cfg.WHITE,
            1,
        )

        # Target Indicator

        cv2.drawMarker(
            frame,
            (875, marker_y),
            self.cfg.RED,
            markerType=cv2.MARKER_TILTED_CROSS,
            markerSize=14,
            thickness=2,
        )

        cv2.putText(
            frame,
            "TGT Indicator",
            (892, y),
            cv2.FONT_HERSHEY_SIMPLEX,
            0.55,
            self.cfg.WHITE,
            1,
        )
    # Draw Complete Overlay

    def draw(self, frame, subscriber):

        detection = subscriber.latest_detection

        track = subscriber.latest_track

        target_state = subscriber.latest_target_state

        guidance = subscriber.latest_guidance

        control = subscriber.latest_control
        # HUD Background

        self.draw_panel_background(frame)
        # World Overlay

        self.draw_detection_bbox(frame, detection)

        self.draw_track(frame, track)

        self.draw_estimated_position(frame, target_state)

        self.draw_guidance_vector(frame, guidance)
        # HUD

        self.draw_header(frame, subscriber)

        self.draw_left_panel(
            frame,
            detection,
            track,
            target_state,
        )

        self.draw_right_panel(
            frame,
            guidance,
            control,
        )

        self.draw_crosshair(
            frame,
            guidance,
        )
        # Footer

        self.draw_footer(frame)

        return frame
