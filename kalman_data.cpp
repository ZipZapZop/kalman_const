#include "kalman_data.h"
    
kalman_data::kalman_data(double q, double r, double true_val, int n) {
    Q = q;
    num_of_trials = n;
    R = r;
    z_values = list_of_z(0.1, true_val, num_of_trials);
}