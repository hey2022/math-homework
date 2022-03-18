#include <iostream>
#include <cmath>

std::string root(int radicand);
std::string quadratic_formula(int a, int b, int c);
int HCF (int a, int b);

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << quadratic_formula(a, b, c);
    return 0;
}

std::string root(int radicand, int a, int b, int c) {
    int coefficient = 1, index = 2, d = 2;
    while (std::pow(d, index) <= radicand) {
        if (radicand % int(std::pow(d, index)) == 0) {
            radicand /= (std::pow(d, index));
            coefficient *= d;
        } else {
            ++d;
        }
    }
    if (radicand == 1 && -b % (2 * a) == 0) {
        return std::to_string(coefficient / 2 / a) + "\\sqrt{" + std::to_string(radicand) + "}";
    } else {
        int hcf = HCF(coefficient, 2 * a);
        return "\\frac{" + std::to_string(coefficient / hcf) + "\\sqrt{" + std::to_string(radicand) + "}}{" + std::to_string(2 * a / hcf) + "}";
    }
}

std::string quadratic_formula(int a, int b, int c) {
    int radicand = pow(b, 2) - 4 * a * c;
    if (radicand < 0) {
        return "No roots";
    } else if (radicand == 0 && -b % (2 * a) == 0) {
        return std::to_string(double(-b) / (2 * a));
    } else if (radicand == 0) {
        return "\\frac{" + std::to_string(-b) + "}" + "{" + std::to_string(2 * a) + "}";
    } else {
        return "\\frac{" root(radicand, a, b, c);
    }
}

// void print_ans(int * ans, int gcf) {
//     std::cout << gcf <<"(" << ans[0] << "x" << std::showpos << ans[1] << ")" << "(" << std::noshowpos << ans[2] << "x" << std::showpos << ans[3] << ")" << std::endl;
// }

int HCF (int a, int b) {
    a = abs(a), b = abs(b);
    int min;
    min = std::min(a, b);
    for(int i = min; i >= 1; --i) {
        if((a % i == 0 ) and (b % i == 0 )) {
            return i;
        }
    }
    return 0;
}
