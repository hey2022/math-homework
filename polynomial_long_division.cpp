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

void polynomial_long_division(int degree, float coefficient[], int divisor_degree, float divisor[]) {
    float answer[degree - divisor_degree + 2];
    for (int i = 0; i <= degree; ++i) {
        answer[i] = coefficient[i] / divisor[0];
        
    }
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
