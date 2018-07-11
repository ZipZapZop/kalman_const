#include "generate_z_vals.h"
#include "kalman_data.h"
#include <fstream>

std::vector<double> kalman_filter(double q, double r, double true_val, int num_of_trials);

int main()
{
    std::vector<double> data = kalman_filter(0.00001, 0.1, 1.52, 50);
    std::ofstream data_out;
    data_out.open("kalman_data.csv");
    for(int i = 0; i < data.size(); i++)
        data_out << data[i] << '\n';
        
    data_out.close();
}

std::vector<double> kalman_filter(double q, double r, double true_val, int num_of_trials)
{
    // Q, R, and sensor measurements
    kalman_data data = kalman_data(q, r, true_val, num_of_trials);
    double K;   // gain
    double x_prev = 0;  // initial state
    double P_prev = 0.5;    // initial error estimate
    std::vector<double> predicted_data = std::vector<double>();
    for(int i = 0; i < data.num_of_trials; i++) 
    {
        // predict equations
        double x_apriori = x_prev;
        double P_apriori = P_prev + data.Q;

        // measurement/correction equations
        K = P_apriori/(P_apriori + data.R);
        double x_aposteriori = x_apriori + K*(data.z_values[i] - x_apriori);
        double P_aposteriori = (1 - K)*P_apriori;

        predicted_data.push_back(x_aposteriori);
        x_prev = x_aposteriori;
        P_prev = P_aposteriori;
    }

    return predicted_data;
}