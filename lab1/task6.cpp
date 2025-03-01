#include <iostream>

int main() {
  short first_number, second_number;
  short sum = 0;

  std::cout << "Podaj pierwsza liczbe: ";
  std::cin >> first_number;

  std::cout << "Podaj druga liczbe: ";
  std::cin >> second_number;

  sum = first_number + second_number;
  std::cout << "Suma: " << sum << std::endl;

  if (sum > 0) {
    if (sum % 2 == 0)
      std::cout << "Suma jest liczba parzysta." << std::endl;
    else
      std::cout << "Suma jest liczba nieparzysta." << std::endl;
  } else {
    std::cout << "Suma jest rowna 0." << std::endl;
  }
}
