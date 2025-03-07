#include <iostream>

int main() {
  short userValue;
  const short BEGIN_VALUE = 1;

  std::cout << "Podaj liczbe N: ";
  std::cin >> userValue;

  for (short i = BEGIN_VALUE; i <= userValue; i++) {
    for (short j = BEGIN_VALUE; j <= userValue; j++) {
      std::cout << i << " * " << j << " = " << i * j << "\n";
    }
    std::cout << std::endl;
  }

  return 0;
}
