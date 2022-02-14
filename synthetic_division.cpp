#include <iostream>

void output(float answer[], int degree, float devisor) {
    for (int i = 0; i < degree; ++i) {
        std::cout << std::showpos << answer[i] << "x^" << std::noshowpos <<degree - 1 - i; 
    }
    std::cout << std::showpos << "+\\frac{" << answer[degree] << "}{x" << devisor << "}" << std::endl;
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
