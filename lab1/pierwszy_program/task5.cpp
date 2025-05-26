#include <iostream>

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
