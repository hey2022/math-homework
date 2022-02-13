#include <iostream>

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

int main() {
    int num1, num2;
    std::cout << "Find the greatest common factor of:";
    std::cin >> num1 >> num2;
    std::cout << "The greatest common factor is "<< HCF(num1, num2) << std::endl;
    return 0;
}
