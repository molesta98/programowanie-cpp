#include <iostream>

// Napisz program, który pobierze dwie liczby od użytkownika,
// wyświetli ich sumę, a następnie poinformuje użytkownika,
// czy wynik jest liczbą parzystą czy nieparzystą.

int main() {
  short firstNumber, secondNumber;
  short sum = 0;

  std::cout << "Podaj pierwsza liczbe: ";
  std::cin >> firstNumber;

  std::cout << "Podaj druga liczbe: ";
  std::cin >> secondNumber;

  sum = firstNumber + secondNumber;
  std::cout << "Suma: " << sum << std::endl;

  if (sum > 0) {
    if (sum % 2 == 0)
      std::cout << "Suma jest liczba parzysta." << std::endl;
    else
      std::cout << "Suma jest liczba nieparzysta." << std::endl;
  } else {
    std::cout << "Suma jest rowna 0." << std::endl;
  }

  return 0;
}
