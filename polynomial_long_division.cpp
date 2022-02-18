#include <iostream>

void output(int degree, float quotient[], int divisor_degree, float divisor[]) {
    for (int i = 0; i <= degree - divisor_degree; ++i) {
        int var_degree = degree - divisor_degree - i;
        if (quotient[i] != 0) {
            if (var_degree == 0) {
                std::cout << std::showpos << quotient[i];
            } else if (var_degree == 1) {
                std::cout << std::showpos << quotient[i] << "x";
            } else {
                std::cout << std::showpos << quotient[i] << "x^" << std::noshowpos << var_degree;
            }
        }
    }
    if (quotient[degree] != 0) {
        std::cout << std::noshowpos << "+\\frac{" << quotient[degree] << "}{x" << std::showpos << divisor << "}" << std::endl;
    }
}

void polynomial_long_division(int degree, float coefficient[], int divisor_degree, float divisor[]) {
    float quotient[degree - divisor_degree + 1];
    for (int i = 0; i <= degree - divisor_degree; ++i) {
        quotient[i] = coefficient[i] / divisor[0];
        for (int j = 0; j <= divisor_degree; ++j) {
            coefficient[i + j] -= divisor[j] * quotient[i];
        }
    }
    output(degree, quotient, divisor_degree, divisor);
}

int main() {
    int degree, divisor_degree;
    std::cin >> degree;
    float coefficient[degree + 1];
    for (int i = 0; i <= degree; ++i) {
        std::cin >> coefficient[i];
    }
    std::cin >> divisor_degree;
    float divisor[divisor_degree + 1];
    for (int i = 0; i < divisor_degree; ++i) {
        std::cin >> divisor[i];
    }
    polynomial_long_division(degree, coefficient, divisor_degree, divisor);
    return 0;
}
