#include <iostream>

bool isEven(int number) { return number % 2 == 0; }

int main() {
  int number;

  std::cout << "Podaj liczbe calkowita: ";
  std::cin >> number;

  if (isEven(number))
    std::cout << "Liczba " << number << " jest parzysta." << std::endl;
  else
    std::cout << "Liczba " << number << " jest nieparzysta." << std::endl;

  return 0;
}
