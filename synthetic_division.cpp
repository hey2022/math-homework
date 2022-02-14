#include <iostream>

void output(float answer[], int degree, float devisor) {
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
        std::cout << std::noshowpos << "+\\frac{" << answer[degree] << "}{x" << std::showpos << devisor << "}" << std::endl;
    }
 }

void synthetic_division(float coefficient[], float devisor, int degree) {
    float devisor_0 = -devisor, answer[degree + 1], temp = 0;
    for (int i = 0; i <= degree; ++i) {
        answer[i] = coefficient[i] + temp;
        temp = devisor_0 * answer[i];
    }
    output(answer, degree, devisor);
}

int main() {
    int degree;
    std::cin >> degree;
    float coefficient[degree + 1], devisor;
    for (int i = 0; i <= degree; ++i) {
        std::cin >> coefficient[i];
    }
    std::cin >> devisor;
    synthetic_division(coefficient, devisor, degree);
    return 0;
}
