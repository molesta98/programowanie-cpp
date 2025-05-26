#include <iostream>

int main() {
  int count = 5;
  int numbers[5];

  std::cout << "Wprowadz " << count << " liczb calkowitych:" << std::endl;
  for (int i = 0; i < count; i++) {
    std::cin >> numbers[i];
    if (numbers[i] < 0) {
      numbers[i] = 0;
    }
  }

  std::cout << "Liczby ujemne zamienione na 0: ";
  for (int i = 0; i < count; i++) {
    std::cout << numbers[i];
    if (i < count - 1) {
      std::cout << ", ";
    }
  }
  std::cout << std::endl;

  return 0;
}
