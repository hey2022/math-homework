#include <iostream>
#include <cmath>

std::string root(int coefficient, int index, int radicand);
std::string format(int coefficient, int radicand);

int main() {
    int coefficient, index, radicand;
    std::cin >> coefficient >> index >> radicand;
    std::cout << root(coefficient, index, radicand);
    return 0;
}

std::string root(int coefficient, int index, int radicand) {
    int d = 2;
    while (std::pow(d, index) <= radicand) {
        if (radicand % int(std::pow(d, index)) == 0) {
            radicand /= int(std::pow(d, index));
            coefficient *= d;
        } else {
            ++d;
        }
    }
    return format(coefficient, radicand);
}

std::string format(int coefficient, int radicand) {
    if (radicand == 1) {
        return std::to_string(coefficient);
    } else {
        return std::to_string(coefficient) + "\\sqrt{" + std::to_string(radicand) + "}";
    }
}