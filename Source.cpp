#include <iostream>
#include <cmath>

const double PI = 3.14;

double calculateCircleArea(double L) {
    double R = L / (2 * PI); 
    return PI * pow(R, 2);   
}

int main() {
    double L;
    std::cout << "Enter the length: ";
    std::cin >> L;

    double S = calculateCircleArea(L);
    std::cout << "Circle area: " << S << std::endl;

    return 0;
}
