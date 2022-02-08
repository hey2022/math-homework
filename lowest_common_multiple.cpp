#include <iostream>

int LCM(int num1, int num2) {
    int LCM = num1;
    while (true) {
        if (LCM % num1 == 0 && LCM % num2 == 0) {
            return LCM;
        }
        ++LCM;
    }
}

int main() {
    int num1, num2;
    std::cout << "Find the lowest common multiple of:";
    std::cin >> num1 >> num2;
    num1 = abs(num1), num2 = abs(num2);
    std::cout << "The lowest common multiple is " << LCM(num1, num2) << std::endl;
    return 0;
}
