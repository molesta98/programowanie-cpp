#include <iostream>

int main() {
  short rows, columns, oddNumbers = 1;

  std::cout << "Podaj liczbe wierszy: ";
  std::cin >> rows;

  std::cout << "Podaj liczbe kolumn: ";
  std::cin >> columns;

  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < columns; ++j) {
      std::cout << oddNumbers << "\t";
      oddNumbers += 2;
    }
    std::cout << std::endl;
  }

  return 0;
}
