
// MakeSpiral function generates a 2D spiral matrix of size n x n
int** MakeSpiral(int n) {
  if (n <= 0) {
    return nullptr;
  }

  int** spiral = new int*[n];
  for (int i = 0; i < n; ++i) {
    spiral[i] = new int[n];
  }

  if (n % 2 == 1) {
    spiral[n / 2][n / 2] = n * n;
  }

  int value = 1;
  for (int i = 0; i < n / 2; i++) {
    for (int j = i; j < n - i; j++) {
      spiral[i][j] = value++;
    }
    for (int j = i + 1; j < n - i - 1; j++) {
      spiral[j][n - i - 1] = value++;
    }
    for (int j = n - i - 1; j >= i; j--) {
      spiral[n - i - 1][j] = value++;
    }
    for (int j = n - i - 2; j >= i + 1; j--) {
      spiral[j][i] = value++;
    }
  }
  return spiral;
}
