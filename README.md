## Simple Kalman filter to predict a constant value

#### Based on example from [this paper](http://www.cs.unc.edu/~welch/media/pdf/kalman_intro.pdf)

A simple kalman filter example that predicts a constant value that is predetermined by the user. The "sensor measurements," or the observations, are generated from a normal distribution ~ (mean == predetermined constant, variance == 0.1).

A KF approximates the predetermined value, and a python script is included to graph these approximations. Over time, it can be seen that the variance (P) converges, and therefore the approximations become closer to the predetermined value.
