#include <iostream>

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

int main() {
    int num1, num2;
    std::cin >> num1 >> num2;
    std::cout << LCM(num1, num2);
    return 0;
}
