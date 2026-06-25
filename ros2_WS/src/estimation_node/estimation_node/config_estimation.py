class EstimationConfig:

    DT = 1.0 / 30.0 # time step 0.30 sec used for estimation 30HZ
    PROCESS_NOISE = 1e-2 # = 0.01 scientific notation
    MEASUREMENT_NOISE = 1e-1  # uncertainty in sensor measurements 

    PREDICTION_TIME=1.0