#include <iostream>

int main() {
  int first_number, second_number;

  std::cout << "Podaj pierwsza liczbe: ";
  std::cin >> first_number;

  std::cout << "Podaj druga liczbe: ";
  std::cin >> second_number;

  std::cout << "Suma: " << first_number + second_number << std::endl;
  std::cout << "Roznica: " << first_number - second_number << std::endl;
  std::cout << "Iloczyn: " << first_number * second_number << std::endl;
  std::cout << "Iloraz: " << first_number / second_number << std::endl;
  std::cout << "Reszta z dzielenia: " << first_number % second_number
            << std::endl;
}
