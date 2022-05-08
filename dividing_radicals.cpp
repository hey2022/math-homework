#include <iostream>
#include <cmath>
#include <array>

std::array <int, 4> multiply(std::array<int, 4> radical, std::array<int, 4> radical_1);
std::array<int, 4> root(std::array<int, 4> radical);
int LCM(int num1, int num2);
int HCF(int num1, int num2);
std::string format(std::array<int, 4> ans);
std::string check_number(int number);
std::string check_x_exponent(int x_exponent);
std::string check_root(int index, int radicand_x_exponent);

int main() {
    std::array<int, 4> radical = {}, radical_1 = {};
    for (int & i : radical) {
        std::cin >> i;
    }
    for (int & i : radical_1) {
        std::cin >> i;
    }
    std::array<int, 4> ans = multiply(radical, radical_1);
    std::cout << format(ans);
    return 0;
}

std::array<int, 4> root(std::array<int, 4> radical) {
    int d = 2;
    while (std::pow(d, radical.at(1)) <= radical.at(2)) {
        if (radical.at(2) % int(std::pow(d, radical.at(1))) == 0) {
            radical.at(2) /= int(std::pow(d, radical.at(1)));
            radical.at(0) *= d;
        } else {
            ++d;
        }
    }
    std::array<int, 4> ans = {radical.at(0), radical.at(3) / radical.at(1), radical.at(1), radical.at(3) % radical.at(1)};
    return ans;
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

std::string check_root(int index, int radicand_x_exponent) {
    if (radicand_x_exponent == 0) {
        return "";
    } else if (index == 2) {
        return "\\sqrt{" + check_x_exponent(radicand_x_exponent) + "}";
    } else {
        return "\\sqrt[" + std::to_string(index) + "]{" + check_x_exponent(radicand_x_exponent) + "}";
    }
}

std::array <int, 4> multiply(std::array<int, 4> radical, std::array<int, 4> radical_1) {
    if (radical.at(1) == radical_1.at(1)) {
        std::array<int, 4> multiply = {radical.at(0) * radical_1.at(0), radical.at(1), radical.at(2) * radical_1.at(2), radical.at(3) + radical_1.at(3)};
        return root(multiply);
    } else {
        std::array<int, 4> solve = root(radical);
        std::array<int, 4> solve_1 = root(radical_1);
        int lcm = LCM(solve.at(2), solve_1.at(2));
        int hcf = HCF(solve.at(3) * lcm / solve.at(2) + solve_1.at(3) * lcm / solve_1.at(2), lcm);
        std::array <int, 4> ans = {solve.at(0) * solve_1.at(0), solve.at(1) + solve_1.at(1), lcm / hcf, (solve.at(3) * lcm / solve.at(2) + solve_1.at(3) * lcm / solve_1.at(2)) / hcf};
        if (lcm / hcf == 1) {
            ans = {solve.at(0) * solve_1.at(0), solve.at(1) + solve_1.at(1) + (solve.at(3) * lcm / solve.at(2) + solve_1.at(3) * lcm / solve_1.at(2)) / hcf, 1, 0};
        }
        return ans;
    }
}

int LCM(int num1, int num2) {
    num1 = abs(num1), num2 = abs(num2);
    int LCM = std::max(num1, num2);
    while (true) {
        if (LCM % num1 == 0 && LCM % num2 == 0) {
            return LCM;
        }
        ++LCM;
    }
}

int HCF(int num1, int num2) {
    int remainder;
    while (true) {
        remainder = num1 % num2;
        if (remainder == 0) {
            return num2;
        }
        num1 = num2;
        num2 = remainder;
    }
}

std::string format(std::array<int, 4> ans) {
    return check_number(ans.at(0)) + check_x_exponent(ans.at(1)) + check_root(ans.at(2), ans.at(3));
}
