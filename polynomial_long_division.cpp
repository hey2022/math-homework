#include <iostream>

void print(int degree, int index, float array[]) {
    if (array[index] != 0) {
        if (degree == 0) {
            std::cout << std::showpos << array[index];
        } else if (degree == 1) {
            std::cout << std::showpos << array[index] << "x";
        } else {
            std::cout << std::showpos << array[index] << "x^" << std::noshowpos << degree;
        }
    }
}

void output(int degree, float quotient[], int divisor_degree, float divisor[], float dividend[]) {
    for (int i = 0; i <= degree - divisor_degree; ++i) {
        int var_degree = degree - divisor_degree - i;
        print(var_degree, i, quotient);
    }
    std::cout << "+\\frac{";
    for (int i = degree - divisor_degree; i <= degree; ++i) {
        int var_degree = degree - i;
        print(var_degree, i, dividend);
    }
    std::cout << "}{";
    for (int i = 0; i <= divisor_degree; ++i) {
        int var_degree = divisor_degree - i;
        print(var_degree, i, divisor);
    }
    std::cout << "}" << std::endl;
}

void polynomial_long_division(int degree, float dividend[], int divisor_degree, float divisor[]) {
    float quotient[degree - divisor_degree + 1];
    for (int i = 0; i <= degree - divisor_degree; ++i) {
        quotient[i] = dividend[i] / divisor[0];
        for (int j = 0; j <= divisor_degree; ++j) {
            dividend[i + j] -= divisor[j] * quotient[i];
        }
    }
    output(degree, quotient, divisor_degree, divisor, dividend);
}

void input() {
    int degree, divisor_degree;
    std::cout << "Degree of polynomial:";
    std::cin >> degree;
    std::cout << "Coefficients of polynomial including 0:";
    float dividend[degree + 1];
    for (int i = 0; i <= degree; ++i) {
        std::cin >> dividend[i];
    }
    std::cout << "Degree of polynomial divisor:";
    std::cin >> divisor_degree;
    std::cout << "Coefficients of polynomial divisor including 0:";
    float divisor[divisor_degree + 1];
    for (int i = 0; i < divisor_degree; ++i) {
        std::cin >> divisor[i];
    }
    polynomial_long_division(degree, dividend, divisor_degree, divisor);
}

int main() {
    input();
    return 0;
}
