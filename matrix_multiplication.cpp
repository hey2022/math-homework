#include <iostream>
#include <array>
#include <vector>
#include <string>

std::array<std::array<int, 2>, 2> get_order();
void ABBA(std::array<std::array<int, 2>, 2> order);
bool valid_multiplication(std::array<int, 2> order, std::array<int, 2> order1);
std::string error(std::array<int, 2> A, std::array<int, 2> B);
std::vector<std::vector<int>> fill(int m, int n);
std::vector<std::vector<int>> matrix_multiply(const std::vector<std::vector<int>>& A, const std::vector<std::vector<int>>& B, int m, int n, int size);
int sum(std::vector<std::vector<int>> A, std::vector<std::vector<int>> B, int m, int n, int size);
void output(std::vector<std::vector<int>> C);

int main() {
    std::array<std::array<int, 2>, 2> order = get_order();
    ABBA(order);
    return 0;
}

std::array<std::array<int, 2>, 2> get_order() {
    std::array<std::array<int, 2>, 2> order = {};
    for (int i = 0; i < 2; ++i) {
        std::cout << "Enter order of matrix " << char (i + 65) << ":";
        for (int j = 0; j < 2; ++j) {
            std::cin >> order.at(i).at(j);
        }
    }
    return order;
}

void ABBA(std::array<std::array<int, 2>, 2> order) {
    if (valid_multiplication(order.at(0), order.at(1))) {
        std::cout << "Enter entries for A:";
        std::vector<std::vector<int>> A = fill(order.at(0).at(0), order.at(0).at(1));
        std::cout << "Enter entries for B:";
        std::vector<std::vector<int>> B = fill(order.at(1).at(0), order.at(1).at(1));
        std::vector<std::vector<int>> C = matrix_multiply(A, B, order.at(0).at(0), order.at(1).at(1), order.at(0).at(1));
        output(C);
    } else {
        std::cout << "cannot multiply matrices with order " << order.at(0).at(0) << "x" << order.at(0).at(1) << " by " << order.at(1).at(0) << "x" << order.at(1).at(1);
    }
}

bool valid_multiplication(std::array<int, 2> order, std::array<int, 2> order1) {
    if (order.at(1) == order1.at(0)) {
        return true;
    }
    return false;
}

std::vector<std::vector<int>> fill(int m, int n) {
    std::vector<std::vector<int>> matrix(m, std::vector<int>(n));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> matrix.at(i).at(j);
        }
    }
    return matrix;
}

std::vector<std::vector<int>> matrix_multiply(const std::vector<std::vector<int>>& A, const std::vector<std::vector<int>>& B, int m, int n, int size) {
    std::vector<std::vector<int>> matrix(m, std::vector<int>(n));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            matrix.at(i).at(j) = sum(A, B, i, j, size);
        }
    }
    return matrix;
}

int sum(std::vector<std::vector<int>> A, std::vector<std::vector<int>> B, int m, int n, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += A.at(m).at(i) * B.at(i).at(n);
    }
    return sum;
}

void output(std::vector<std::vector<int>> C) {
    for (int i = 0; i < C.size(); ++i) {
        for (int j = 0; j < C.at(0).size(); ++j) {
            std::cout << C.at(i).at(j) << " ";
        }
        std::cout << "\n";
    }
}
