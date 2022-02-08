#include <iostream>

int main(){
    int a1, b1, a2, b2, lcm;
    float c1, c2;
    std::cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    int abs_a1 = abs(a1), abs_a2 = abs(a2);
    if (abs_a1 > abs_a2) {
        lcm = abs_a1;
    } else {
        lcm = abs_a2;
    }
    while (true) {
        if (lcm % abs_a1 == 0 && lcm % abs_a2 == 0) {
            break;
        }
        ++lcm;
    }
    bool pos1 = false, pos2 = false;
    int op1 = lcm / a1, op2 = lcm / a2;
    if (a1 == abs(a1)) {
        pos1 = true;
    }
    if (a2 == abs(a2)) {
        pos2 = true;
    }
    if (pos1 == pos2) {
        op1 = abs(op1);
        op2 = -abs(op2);
    } else {
        op1 = abs(op1);
        op2 = abs(op2);
    }
    float op_b1 = b1 * op1, op_c1 = c1 * op1;
    float op_b2 = b2 * op2, op_c2 = c2 * op2;
    float y = float (op_c1 + op_c2) / float (op_b1 + op_b2);
    float x = (c1 - float(b1) * y) / float (a1);
    std::cout << "(" << x << "," << y << ")" << std::endl;
    return 0;
}