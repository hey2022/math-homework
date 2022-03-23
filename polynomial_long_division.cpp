#include <iostream>

int main() {
    int degree, divisor_degree;
    std::cin >> degree;
    float dividend[degree + 1];
    for (int i = 0; i <= degree; ++i) {
        std::cin >> dividend[i];
    }
    std::cin >> divisor_degree;
    float divisor[divisor_degree + 1];
    for (int i = 0; i <= divisor_degree; ++i) {
        std::cin >> divisor[i];
    }
    float quotient[degree - divisor_degree + 1];
    for (int i = 0; i <= degree - divisor_degree; ++i) {
        quotient[i] = dividend[i] / divisor[0];
        for (int j = 0; j <= divisor_degree; ++j) {
            dividend[i + j] -= divisor[j] * quotient[i];
        }
    }
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
    if (dividend[degree] != 0) {
        std::cout << "+\\frac{";
        for (int i = degree - divisor_degree; i <= degree; ++i) {
            int var_degree = degree - i;
            if (dividend[i] != 0) {
                if (var_degree == 0) {
                    std::cout << std::showpos << dividend[i];
                } else if (var_degree == 1) {
                    std::cout << std::showpos << dividend[i] << "x";
                } else {
                    std::cout << std::showpos << dividend[i] << "x^" << std::noshowpos << var_degree;
                }
            }
        }
        std::cout << "}{";
        for (int i = 0; i <= divisor_degree; ++i) {
            int var_degree = divisor_degree - i;
            if (divisor[i] != 0) {
                if (var_degree == 0) {
                    std::cout << std::showpos << divisor[i];
                } else if (var_degree == 1) {
                    std::cout << std::showpos << divisor[i] << "x";
                } else {
                    std::cout << std::showpos << divisor[i] << "x^" << std::noshowpos << var_degree;
                }
            }
        }
        std::cout << "}" << std::endl;
    }
}


