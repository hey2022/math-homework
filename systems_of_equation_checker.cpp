#include <iostream>

int main() {
    float system[2][3], x, y;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cin >> system[i][j];
        }
    }
    std::cin >> x >> y;
    if (system[0][0] * x + system[0][1] * y == system[0][2] && system[1][0] * x + system[1][1] * y == system[1][2]) {
        std::cout << "correct" << std::endl;
    } else {
        std::cout << "incorrect" << std::endl;
    }
    return 0;   
}