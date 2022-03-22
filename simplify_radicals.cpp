#include <iostream>
#include <cmath>

std::string root(int coefficient, int index, int radicand, int exponent_x);
std::string format(int coefficient, int index, int radicand, int coefficient_x_exponent, int radicand_x_exponent);
std::string check_x_exponent(int x_exponent);
std::string check_number(int number);
std::string check_root(int index, int radicand, int radicand_x_exponent);

int main() {
    int coefficient, index, radicand, exponent_x;
    std::cin >> coefficient >> index >> radicand >> exponent_x;
    std::cout << root(coefficient, index, radicand, exponent_x);
    return 0;
}

std::string root(int coefficient, int index, int radicand, int exponent_x) {
    int d = 2;
    while (std::pow(d, index) <= radicand) {
        if (radicand % int(std::pow(d, index)) == 0) {
            radicand /= int(std::pow(d, index));
            coefficient *= d;
        } else {
            ++d;
        }
    }
    return format(coefficient, index, radicand, exponent_x / index, exponent_x % index);
}

std::string format(int coefficient, int index, int radicand, int coefficient_x_exponent, int radicand_x_exponent) {
//    if (radicand == 1) {
//        return std::to_string(coefficient);
//    } else if (){
//        return std::to_string(coefficient) + "\\sqrt{" + std::to_string(radicand) + "}";
//    }
    return check_number(coefficient) + check_x_exponent(coefficient_x_exponent) + check_root(index, radicand, radicand_x_exponent);
}

std::string check_x_exponent(int x_exponent) {
    if (x_exponent == 0) {
        return "";
    } else if (x_exponent == 1) {
        return "x";
    } else {
        return "x^{" + std::to_string(x_exponent) + "}";
    }
}

std::string check_number(int number) {
    if (number == 1) {
        return "";
    } else {
        return std::to_string(number);
    }
}

std::string check_root(int index, int radicand, int radicand_x_exponent) {
    if (radicand == 1 && radicand_x_exponent == 0) {
        return "";
    } else if (index == 2) {
        return "\\sqrt{" + check_number(radicand) + check_x_exponent(radicand_x_exponent) + "}";
    } else {
        return "\\sqrt[" + std::to_string(index) + "]{" + check_number(radicand) + check_x_exponent(radicand_x_exponent) + "}";
    }
    std::max(1, 2);
}
