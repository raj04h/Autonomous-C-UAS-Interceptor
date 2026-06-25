import numpy as np

from estimation_node.config_estimation import EstimationConfig



class KalmanEstimator:
    def __init__(self):
        dt= EstimationConfig.DT

        self.state= np.zeros((4,1))

        self.F= np.array([  # Transition Matrix
            [1,0,dt,0], # x ais  [(1)x,(o)y,(dt)vx,(0)vy]
            [0,1,0,dt], # y axis
            [0,0,1,0], # vx
            [0,0,0,1] # vy
        ])


        self.H= np.array([ #Measurement Matrix
            [1,0,0,0], #x
            [0,1,0,0] #y
        ])

        self.P= np.eye(4)  # How unsure I am -- covarience Matrix

        self.Q=np.eye(4)*EstimationConfig.PROCESS_NOISE # Motion Noise

        self.R= np.eye(2)*EstimationConfig.MEASUREMENT_NOISE # sensor noise



    # Predict state  
    def predict(self): 
        self.state= self.F @ self.state  # X_pred=[F* X_old]

        self.P=( # predicted uncertainity
            self.F @ self.P @ self.F.T +self.Q    # P_pred= [F* P* F^T  +Q]
        )

    
    def update(self, center_x, center_y):

        measurement = np.array([  # Z-- what we saw currently as center of bbox
            [center_x],
            [center_y]
        ])

        error = (  # error calculation
            measurement
            -self.H @ self.state
        )

        confidence= ( # measure noise
            self.H @ self.P @ self.H.T + self.R
        )

        kalman_gain= (  # how much should i correct?
            self.P @ self.H.T @ np.linalg.inv(confidence)
        )


        self.state = self.state +  kalman_gain @ error # new updated state

        self.P= (np.eye(4) - kalman_gain @ self.H) @ self.P # new Predict uncertainty


    def get_state(self):
        return {
            "x": float(
                self.state[0,0]
            ),
            "y": float(
                self.state[1,0]
            ),
            "vx": float(
                self.state[2,0]
            ),
            "vy": float(
                self.state[3,0]
            )
        }
    

    



    


