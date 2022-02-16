#include <iostream>

void output(int degree, float answer[], float divisor) {
    for (int i = 0; i < degree; ++i) {
        int var_degree = degree - 1 - i;
        if (answer[i] != 0) {
            if (var_degree == 0) {
                std::cout << std::showpos << answer[i]; 
            } else if (var_degree == 1) {
                std::cout << std::showpos << answer[i] << "x"; 
            } else {
                std::cout << std::showpos << answer[i] << "x^" << std::noshowpos << var_degree; 
            }
        }
    }
    if (answer[degree] != 0) {
        std::cout << std::noshowpos <<"+\\frac{" << answer[degree] << "}{x" << std::showpos << divisor << "}" << std::endl;
    }
}

void synthetic_division(int degree, float coefficient[], float divisor) {
    float divisor_0 = -divisor, answer[degree + 1], temp = 0;
    for (int i = 0; i <= degree; ++i) {
        answer[i] = coefficient[i] + temp;
        temp = divisor_0 * answer[i];
    }
    output(degree, answer, divisor);
}

int main() {
    int degree;
    std::cin >> degree;
    float coefficient[degree + 1], divisor;
    for (int i = 0; i <= degree; ++i) {
        std::cin >> coefficient[i];
    }
    std::cin >> divisor;
    synthetic_division(degree, coefficient, divisor);
    return 0;
}
