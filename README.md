## Simple Kalman filter to predict a constant value

#### Based on example from [this paper](http://www.cs.unc.edu/~welch/media/pdf/kalman_intro.pdf)

A simple kalman filter example that predicts a constant value that is predetermined by the user. The "sensor measurements," or the observations, are generated from a normal distribution ~ (mean == predetermined constant, variance == 0.1). As the generated sensor measurements are not constant each time the program is run, the outputted graph will differ everytime.

A KF approximates the predetermined value, and a python script is included to graph these approximations. Over time, it can be seen that the variance (P) converges, and therefore the approximations become closer to the predetermined value.

If R, the sensor noise covariance, is increased, then the gain has less impact on the updated measurement. The opposite is true if R is small. This can be seen in the graph if the value of R is manually varied as when R is large (~1), the predicted values converge to the true value with very little error. If R is small (~0.01), then there is quite some variance as the graph converges. This may be due to the fact that this code is only a simulation.

