#include <iostream>

/*
 * Napisz program, który wczyta od użytkownika dwie liczby całkowite oraz
 * znak działania (+, -, *, /). Program powinien wykonać odpowiednie działanie
 * matematyczne na podanych liczbach w zależności od wprowadzonego znaku
 * działania. W przypadku podania nieznanego znaku, program powinien wyświetlić
 * odpowiedni komunikat o błędzie.
 * Kroki do wykonania:
 * - Program wczytuje dwie liczby całkowite oraz znak działania matematycznego
 *   od użytkownika.
 * - Na podstawie wprowadzonego znaku działania program wykonuje odpowiednią
 *   operację (dodawanie, odejmowanie, mnożenie, dzielenie).
 * - Jeśli zostanie podany nieznany znak działania, program wyświetla komunikat
 *   o błędzie.
 * - Po poprawnym wprowadzeniu wartości oblicza wynik i wyświetla go.
 */
int main() {
  short firstNumber, secondNumber, result = 0;
  char operation;

  std::cout << "Podaj pierwsza liczbe: ";
  std::cin >> firstNumber;

  std::cout << "Podaj druga liczbe: ";
  std::cin >> secondNumber;

  std::cout << "Podaj znak dzialania (+, -, *, /): ";
  std::cin >> operation;

  switch (operation) {
    case '+':
      result = firstNumber + secondNumber;
      break;
    case '-':
      result = firstNumber - secondNumber;
      break;
    case '*':
      result = firstNumber * secondNumber;
      break;
    case '/':
      if (secondNumber == 0) {
        std::cout << "Nie mozna dzielic przez 0." << std::endl;
        return 1;
      }
      result = firstNumber / secondNumber;
      break;
    default:
      std::cout << "\nPodano nieprawidlowy znak dzialania." << std::endl;
      return 1;
  }

  std::cout << "\nWynik: " << result << std::endl;
}
