#include <iostream>

int main() {
  int your_number;
  short even, divisible;
  std::string even_output, divisible_output;

  std::cout << "Podaj liczbe calkowita: ";
  std::cin >> your_number;

  if (your_number > 0) {
    if (your_number % 2 == 0 && your_number % 3 == 0) {
      even = 0;
      divisible = 0;
    } else if (your_number % 2 == 0 && your_number % 3 != 0) {
      even = 0;
      divisible = 1;
    } else if (your_number % 2 != 0 && your_number % 3 == 0) {
      even = 1;
      divisible = 0;
    } else {
      even = 1;
      divisible = 1;
    }
  } else {
    std::cout << "Podano liczbe mniejsza lub rowna 0." << std::endl;

    return 1;
  }

  if (even == 0) {
    even_output = "jest parzysta";
  } else {
    even_output = "jest nieparzysta";
  }

  if (divisible == 0) {
    divisible_output = "jest podzielna";
  } else {
    divisible_output = "nie jest podzielna";
  }

  std::cout << "Liczba " << your_number << " " << even_output << std::endl;
  std::cout << "Liczba " << your_number << " " << divisible_output
            << " przez 3." << std::endl;

  return 0;
}
