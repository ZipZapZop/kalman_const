#include <iostream>
#include <string>
#include <iomanip>
#include <random>
#include <cmath>
#include <vector>

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());

    std::default_random_engine generator;
    std::normal_distribution<> d(0.0, 0.1);

    std::vector<double> list_of_z;

    for(int n = 0; n < 10; n++) {
        double num = d(gen);
        list_of_z.push_back(num);
        std::cout << num << '\n';
    }

    std::cout << "complete" << '\n';
}