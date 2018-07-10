#include "generate_z_vals.h"

std::vector<double> list_of_z(double variance, double true_val, int num_of_z) {
    std::random_device rd;
    std::mt19937 gen(rd());

    std::default_random_engine generator;
    std::normal_distribution<> d(true_val, variance); // KF is trying to estimate true_val

    std::vector<double> list;

    for(int n = 0; n < num_of_z; n++) {
        double num = d(gen);
        list.push_back(num);
    }

    return list;
}
