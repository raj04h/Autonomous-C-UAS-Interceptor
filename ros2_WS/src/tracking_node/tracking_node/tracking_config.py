class TrackingConfig:

    MAX_AGE = 30

    N_INIT = 3

    MAX_IOU_DISTANCE = 0.7

    MAX_COSINE_DISTANCE = 0.3

    EMBEDDER = "mobilenet"

    HALF_PRECISION = True

    BGR = True

    MIN_CONFIDENCE = 0.20

    TARGET_CLASSES =[
        "airplane"
    ]