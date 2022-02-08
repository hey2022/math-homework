#include <iostream>
#include <cmath>

int * find(int a, int b, int c, int range) {
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

void print_ans(int * ans, int a) {
    std::cout <<"(" << ans[0] << "x" << std::showpos << ans[1] << ")" << "(" << std::noshowpos << ans[2] << "x" << std::showpos << ans[3] << ")" << std::endl;
}


int main() {
    int a, b, c, range = 50;
    std::cin >> a >> b >> c;
    int * ans = find(a, b, c, range);
    print_ans(ans, a);
    return 0;
}
