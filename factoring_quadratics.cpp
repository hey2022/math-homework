#include <iostream>
#include <cmath>

std::string factor_quadratic(int a, int b, int c);
std::string flip_sign(int number);
std::string check_number(int number);
int HCF(int num1, int num2);

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << factor_quadratic(a, b, c);
    return 0;
}

std::string factor_quadratic(int a, int b, int c) {
    int radicand = int(pow(b, 2) - 4 * a * c);
    if (radicand < 0) {
        return "No roots";
    } else if (sqrt(radicand) != int(sqrt(radicand))) {
        return "Is Prime";
    } else {
        int hcf1 = HCF(-b + int(sqrt(radicand)), 2 * a);
        int hcf2 = HCF(-b - int(sqrt(radicand)), 2 * a);
        return "(" + check_number((2 * a) / hcf1) + "x" + flip_sign((-b + int(sqrt(radicand))) / hcf1) + ")(" + check_number((2 * a) / hcf2) + "x" + flip_sign((-b - int(sqrt(radicand))) / hcf2) + ")";
    }
}

int HCF(int num1, int num2) {
    num1 = abs(num1), num2 = abs(num2);
    int remainder;
    while (true) {
        remainder = num1 % num2;
        if (remainder == 0) {
            return num2;
        }
        num1 = num2, num2 = remainder;
    }
}

std::string check_number(int number) {
    if (number == 1) {
        return "";
    } else {
        return std::to_string(number);
    }
}

std::string flip_sign(int number) {
    if (number > 0) {
        return "-" + std::to_string(abs(number));
    } else {
        return "+" + std::to_string(abs(number));
    }
}
