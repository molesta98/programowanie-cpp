#include <iostream>

int main() {
  int yourNumber;
  short even, divisible;
  std::string evenOutput, divisibleOutput;

  std::cout << "Podaj liczbe calkowita: ";
  std::cin >> yourNumber;

  if (yourNumber > 0) {
    if (yourNumber % 2 == 0 && yourNumber % 3 == 0) {
      even = 0;
      divisible = 0;
    } else if (yourNumber % 2 == 0 && yourNumber % 3 != 0) {
      even = 0;
      divisible = 1;
    } else if (yourNumber % 2 != 0 && yourNumber % 3 == 0) {
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
    evenOutput = "jest parzysta";
  } else {
    evenOutput = "jest nieparzysta";
  }

  if (divisible == 0) {
    divisibleOutput = "jest podzielna";
  } else {
    divisibleOutput = "nie jest podzielna";
  }

  std::cout << "Liczba " << yourNumber << " " << evenOutput << std::endl;
  std::cout << "Liczba " << yourNumber << " " << divisibleOutput << " przez 3."
            << std::endl;

  return 0;
}
