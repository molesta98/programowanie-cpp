#include <iostream>

int main() {
  const int SIZE = 3;
  int matrix[SIZE][SIZE];
  int sum = 0;

  std::cout << "Podaj 9 liczb calkowitych do macierzy 3x3:" << std::endl;
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      std::cout << "Podaj liczbe dla wiersza " << i + 1 << ", kolumny " << j + 1
                << ": ";
      std::cin >> matrix[i][j];
      sum += matrix[i][j];
    }
  }
  std::cout << "Suma elementow macierzy: " << sum << std::endl;

  return 0;
}
