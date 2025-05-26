#include <iostream>

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
