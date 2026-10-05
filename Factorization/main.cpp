#include <iostream>

#include "factorization.hpp"

void PrintVectorInt(std::vector<int>& vector) {
    for (auto val : vector) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

int main() {
    int n = 0;
    std::cout << "Enter number n for factorization: ";
    std::cin >> n;

    std::vector<int> factors = Factorize(n);

    PrintVectorInt(factors);

    return 0;
}