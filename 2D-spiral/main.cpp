#include <iostream>
#include <iomanip>

#include "2d_spiral.hpp"

int main() {
  int n;
  std::cout << "Enter the size of the spiral matrix (n x n): ";
  std::cin >> n;

  int** spiral = MakeSpiral(n);
  if (spiral == nullptr) {
    std::cout << "Invalid size. Please enter a positive n" << std::endl;
    return 1;
  }

  std::cout << "2D Spiral Matrix of size " << n << " x " << n << ":" << std::endl;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      std::cout << std::setw(4) << spiral[i][j] << " ";
    }
    std::cout << std::endl;
  }

  // Free allocated memory
  for (int i = 0; i < n; ++i) {
    delete[] spiral[i];
  }
  delete[] spiral;

  return 0;
}
