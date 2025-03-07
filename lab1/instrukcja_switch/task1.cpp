#include <iostream>

int main() {
  short first_number, second_number, result = 0;
  char operation;

  std::cout << "Podaj pierwsza liczbe: ";
  std::cin >> first_number;

  std::cout << "Podaj druga liczbe: ";
  std::cin >> second_number;

  std::cout << "Podaj znak dzialania (+, -, *, /): ";
  std::cin >> operation;

  switch (operation) {
    case '+':
      result = first_number + second_number;
      break;
    case '-':
      result = first_number - second_number;
      break;
    case '*':
      result = first_number * second_number;
      break;
    case '/':
      if (second_number == 0) {
        std::cout << "Nie mozna dzielic przez 0." << std::endl;
        return 1;
      }
      result = first_number / second_number;
      break;
    default:
      std::cout << "\nPodano nieprawidlowy znak dzialania." << std::endl;
      return 1;
  }

  std::cout << "\nWynik: " << result << std::endl;
}
