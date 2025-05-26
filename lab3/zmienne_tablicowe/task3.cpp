#include <iostream>

int main() {
  const int SIZE = 10;
  int numbers[SIZE];

  std::cout << "Podaj " << SIZE << " liczb calkowitych:" << std::endl;
  for (int i = 0; i < SIZE; i++) {
    std::cout << "Podaj liczbe nr " << i + 1 << ": ";
    std::cin >> numbers[i];
  }

  int min = numbers[0];
  for (int i = 0; i < SIZE; i++) {
    if (numbers[i] < min) {
      min = numbers[i];
    }
  }
  std::cout << "Najmniejsza liczba to: " << min << std::endl;
}
