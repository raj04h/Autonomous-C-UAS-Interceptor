class AccelerationEstimator:

    def __init__(self):

        self.previous_vx = None
        self.previous_vy = None


    def estimate(self,vx,vy,dt):

        if self.previous_vx is None:

            self.previous_vx = vx
            self.previous_vy = vy

            return {
                "ax": 0.0,
                "ay": 0.0
            }

        ax = (vx -self.previous_vx) / dt

        ay = (vy -self.previous_vy) / dt

        self.previous_vx = vx
        self.previous_vy = vy

        return {

            "ax": ax,

            "ay": ay
        }