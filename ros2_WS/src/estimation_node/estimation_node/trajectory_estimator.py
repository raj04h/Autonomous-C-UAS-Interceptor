from estimation_node.config_estimation import EstimationConfig

class TrajectoryEstimator:
    def __init__(self):
        self.prediction_time= EstimationConfig.PREDICTION_TIME

    
    def predict(self, x, y, vx, vy,ax,ay):
        predicted_x = (
            x
            + vx * self.prediction_time
            + 0.5 * ax * (
                self.prediction_time ** 2
            )
        )

        predicted_y = (
            y+ vy * self.prediction_time 
            + 0.5 * ay * (self.prediction_time ** 2)
        )

        return {
            "predicted_x": predicted_x,
            "predicted_y": predicted_y
        }
    
