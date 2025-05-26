#include <iostream>

int main() {
  int yourNumber;
  std::string even, divisible;

  std::cout << "Podaj liczbe calkowita: ";
  std::cin >> yourNumber;

  if (yourNumber > 0) {
    if (yourNumber % 2 == 0 && yourNumber % 3 == 0) {
      even = "jest parzysta";
      divisible = "jest podzielna";
    } else if (yourNumber % 2 == 0 && yourNumber % 3 != 0) {
      even = "jest parzysta";
      divisible = "nie jest podzielna";
    } else if (yourNumber % 2 != 0 && yourNumber % 3 == 0) {
      even = "jest nieparzysta";
      divisible = "jest podzielna";
    } else {
      even = "jest nieparzysta";
      divisible = "nie jest podzielna";
    }
  } else {
    std::cout << "Podano liczbe mniejsza lub rowna 0." << std::endl;

    return 1;
  }

  std::cout << "Liczba " << yourNumber << " " << even << std::endl;
  std::cout << "Liczba " << yourNumber << " " << divisible << " przez 3."
            << std::endl;

  return 0;
}
