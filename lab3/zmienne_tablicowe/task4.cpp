#include "iostream"

int main() {
  const int SIZE = 10;
  int numbers[SIZE];
  int sum = 0;

  for (int i = 0; i < SIZE; ++i) {
    std::cout << "Podaj liczbe nr " << i + 1 << ": ";
    std::cin >> numbers[i];
  }

  std::cout << "Liczby parzyste: ";
  for (int i = 0; i < SIZE; ++i) {
    if (numbers[i] % 2 == 0) {
      std::cout << numbers[i];
      if (i < SIZE) {
        std::cout << ", ";
      }
      sum += numbers[i];
    }
  }
  std::cout << std::endl;

  std::cout << "Suma liczb parzystych: " << sum << std::endl;

  return 0;
}
