#include <iostream>
#include <cmath>

std::string root(int radicand, int a, int b);
std::string quadratic_formula(int a, int b, int c);
std::string format(int coefficient, int radicand, int a, int b);
int HCF(int a, int b, int c);
std::string test_b(int b);
std::string test_radicand(int radicand);

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << quadratic_formula(a, b, c);
    return 0;
}

std::string format(int coefficient, int radicand, int a, int b) {
    int hcf = HCF(-b, coefficient, 2 * a);
    if (2 * a / hcf == 1) {
        return test_b(-b / hcf) + "\\pm" + std::to_string(coefficient / hcf) + test_radicand(radicand);
    } else {
        return "\\frac{" + test_b(-b / hcf) + "\\pm" + std::to_string(coefficient / hcf) + test_radicand(radicand) + "}{" + std::to_string(2 * a / hcf) + "}";
    }
    
}

std::string root(int radicand, int a, int b) {
    int coefficient = 1, index = 2, d = 2;
    while (std::pow(d, index) <= radicand) {
        if (radicand % int(std::pow(d, index)) == 0) {
            radicand /= int(std::pow(d, index));
            coefficient *= d;
        } else {
            ++d;
        }
    }
    return format(coefficient, radicand, a, b);
}

std::string quadratic_formula(int a, int b, int c) {
    int radicand = int(pow(b, 2) - 4 * a * c);
    if (radicand < 0) {
        return "No roots";
    } else if (radicand == 0 && -b % (2 * a) == 0) {
        return std::to_string(-b / 2 / a);
    } else if (radicand == 0) {
        int hcf = HCF(-b, 0, 2 * a);
        return "\\frac{" + std::to_string(-b / hcf) + "}" + "{" + std::to_string(2 * a / hcf) + "}";
    } else {
        return root(radicand, a, b);
    }
}

int HCF(int a, int b, int c) {
    a = abs(a), b = abs(b), c = abs(c);
    int min;
    min = std::min(a, std::min(b, c));
    for(int i = min; i >= 1; --i) {
        if((a % i == 0) and (b % i == 0) and (c % i == 0)) {
            return i;
        }
    }
    return 0;
}

std::string test_b(int b) {
    if (b == 0) {
        return "";
    } else {
        return std::to_string(b);
    }
}

std::string test_radicand(int radicand) {
    if ( radicand == 1) {
        return "";
    } else {
        return "\\sqrt{" + std::to_string(radicand) + "}";
    }
}
