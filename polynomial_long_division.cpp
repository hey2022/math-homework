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

void polynomial_long_division(int degree, float coefficient[], float divisor[]) {
    float answer[degree + 1];
    answer[0] = (coefficient[i] / divisor[0]);
    for (int i = 1; i <= degree; ++i) {
        coefficient[i] = 
        answer[i] = (coefficient[i] / divisor[0]);
        
    }
}

int main() {
    int degree, divisor_degree;
    std::cin >> degree;
    float coefficient[degree + 1], divisor[3];
    for (int i = 0; i <= degree; ++i) {
        std::cin >> coefficient[i];
    }
    sstd::cin >> divisor_degree;
    for (int i = 0; i < divisor_degree; ++i) {
        std::cin >> divisor[i];
    }
    polynomial_long_division(degree, coefficient, divisor);
    return 0;
}
