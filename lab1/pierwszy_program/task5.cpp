#include <iostream>

// Stwórz program, który wczyta dwie liczby całkowite od użytkownika i
// wykona na nich następujące operacje: dodawanie, odejmowanie, mnożenie,
// dzielenie oraz resztę z dzielenia. Utrwalenie wiedzy na temat operatorów
// arytmetycznych oraz pracy z liczbami.

int main() {
  int firstNumber, secondNumber;

  std::cout << "Podaj pierwsza liczbe: ";
  std::cin >> firstNumber;

  std::cout << "Podaj druga liczbe: ";
  std::cin >> secondNumber;

  std::cout << "Suma: " << firstNumber + secondNumber << std::endl;
  std::cout << "Roznica: " << firstNumber - secondNumber << std::endl;
  std::cout << "Iloczyn: " << firstNumber * secondNumber << std::endl;
  std::cout << "Iloraz: " << firstNumber / secondNumber << std::endl;
  std::cout << "Reszta z dzielenia: " << firstNumber % secondNumber
            << std::endl;

  return 0;
}
