#include <iostream>

int main() {
    double pi = 0.0;
    double term = 1.0;
    double denominator = 1.0;
    int sign = 1;

    while (pi < 3.1415926 || pi > 3.1415927) {
        pi += sign * (4.0 / denominator);
        denominator += 2.0;
        sign *= -1;
    }

    std::cout << "El valor aproximado de π es: " << pi << std::endl;

    return 0;
}
