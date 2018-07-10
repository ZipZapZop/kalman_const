#include "generate_z_vals.h"

class kalman_data
{
public:
    std::vector<double> z_values;
    double Q;
    double R;
    int num_of_trials;
    kalman_data(double q, double r, double true_val, int n);
};