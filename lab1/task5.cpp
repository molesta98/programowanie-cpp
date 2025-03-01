#include <iostream>

// Stwórz program, który wczyta dwie liczby całkowite od użytkownika i
// wykona na nich następujące operacje: dodawanie, odejmowanie, mnożenie,
// dzielenie oraz resztę z dzielenia. Utrwalenie wiedzy na temat operatorów
// arytmetycznych oraz pracy z liczbami.

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
