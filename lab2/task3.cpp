#include <iostream>

int main() {
  int your_number;
  std::string even, divisible;

  std::cout << "Podaj liczbe calkowita: ";
  std::cin >> your_number;

  if (your_number > 0) {
    if (your_number % 2 == 0 && your_number % 3 == 0) {
      even = "jest parzysta";
      divisible = "jest podzielna";
    } else if (your_number % 2 == 0 && your_number % 3 != 0) {
      even = "jest parzysta";
      divisible = "nie jest podzielna";
    } else if (your_number % 2 != 0 && your_number % 3 == 0) {
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

  std::cout << "Liczba " << your_number << " " << even << std::endl;
  std::cout << "Liczba " << your_number << " " << divisible << " przez 3."
            << std::endl;

  return 0;
}
