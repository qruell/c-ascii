#include <iostream>

double calculateEquivalentResistance(double R1, double R2, double R3) {
    return 1.0 / (1.0 / R1 + 1.0 / R2 + 1.0 / R3);
}

int main() {
    double R1 = 2.0, R2 = 4.0, R3 = 8.0;
    double R0 = calculateEquivalentResistance(R1, R2, R3);

    std::cout << "R0 = " << R0 << std::endl;

    return 0;
}
