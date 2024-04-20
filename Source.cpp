#include <iostream>

double calculateDistance(double v, double t, double a) {
    return v * t + (a * t * t) / 2;
}

int main() {
    double v, t, a;
    std::cout << "Enter velocity (v): ";
    std::cin >> v;
    std::cout << "Enter time (t): ";
    std::cin >> t;
    std::cout << "Enter acceleration (a): ";
    std::cin >> a;

    double S = calculateDistance(v, t, a);
    std::cout << "Distance traveled: " << S << std::endl;

    return 0;
}
