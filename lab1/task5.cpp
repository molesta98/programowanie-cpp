#include <iostream>

int main() {
  int first_number, second_number;

  std::cout << "Podaj pierwszą liczbę: ";
  std::cin >> first_number;

  std::cout << "Podaj drugą liczbę: ";
  std::cin >> second_number;

  std::cout << "Suma: " << first_number + second_number << std::endl;
  std::cout << "Różnica: " << first_number - second_number << std::endl;
  std::cout << "Iloczyn: " << first_number * second_number << std::endl;
  std::cout << "Iloraz: " << first_number / second_number << std::endl;
  std::cout << "Reszta z dzielenia: " << first_number % second_number
            << std::endl;
}
