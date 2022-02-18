#include <iostream>
#include <cmath>

long double  quadratic_formula(int a, int b, int c) {
    long double delta = pow(b, 2) - 4 * a * c;
    if (delta < 0) {
        return nullptr;
    } else if (delta == 0) {
        static long double ans[1] = {(long double) (-b) / (2 * a)};
        return ans;
    }
    static long double ans[2] = {(long double) (-b + sqrtl(delta )) / (2 * a), };
}

int ans_

int * factor(int a, int b, int c, int range) {
    for (int i = range; i >= -range; --i) {
        for (int j = range; j >= -range; --j) {
            for (int k = range; k >= -range; --k) {
                for (int l = range; l >= -range; --l) {
                    if (i * k == a && j * l == c && i * l + j * k == b) {
                        static int ans[4] = {i, j, k, l};
                        return ans;
                    }
                }
            }
        }
    }
}

void print_ans(int * ans, int gcf) {
    std::cout << gcf <<"(" << ans[0] << "x" << std::showpos << ans[1] << ")" << "(" << std::noshowpos << ans[2] << "x" << std::showpos << ans[3] << ")" << std::endl;
}

int HCF (int a, int b, int c) {
    a = abs(a), b = abs(b), c = abs(c);
    int min;
    min = std::min(a, std::min(b, c));
    for(int i = min; i >= 1; --i) {
        if((a % i == 0 ) and (b % i == 0 ) and (c % i == 0 )) {
            return i;
        }
    }
    return 0;
}



int main() {
    int a, b, c, range = 50;
    std::cin >> a >> b >> c;
    int hcf = HCF(a, b, c);
    a /= hcf, b /= hcf, c /= hcf;
    int * ans = factor(a, b, c, range);
    print_ans(ans, hcf);
    return 0;
}
