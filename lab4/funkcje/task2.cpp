#include <iostream>

double add(double a, double b) { return a + b; }

double subtract(double a, double b) { return a - b; }

double multiply(double a, double b) { return a * b; }

double divide(double a, double b) {
  if (b == 0) {
    std::cout << "Nie mozna dzielic przez zero!" << std::endl;
    return 0;
  }
  return a / b;
}

void displayMenu() {
  std::cout << "Wybierz funkcje matematyczna:" << std::endl;
  std::cout << "1. Suma" << std::endl;
  std::cout << "2. Roznica" << std::endl;
  std::cout << "3. Iloczyn" << std::endl;
  std::cout << "4. Iloraz" << std::endl;
  std::cout << "0. Wyjscie" << std::endl;
}

int main() {
  int choice;
  double num1, num2;

  do {
    displayMenu();
    std::cout << "Wybierz opcje: ";
    std::cin >> choice;

    if (choice == 0) {
      std::cout << "Koniec programu." << std::endl;
      break;
    }

    std::cout << "Podaj pierwsza liczbe: ";
    std::cin >> num1;
    std::cout << "Podaj druga liczbe: ";
    std::cin >> num2;

    switch (choice) {
      case 1:
        std::cout << "Wynik: " << add(num1, num2) << "\n\n";
        break;
      case 2:
        std::cout << "Wynik: " << subtract(num1, num2) << "\n\n";
        break;
      case 3:
        std::cout << "Wynik: " << multiply(num1, num2) << "\n\n";
        break;
      case 4:
        std::cout << "Wynik: " << divide(num1, num2) << "\n\n";
        break;
      default:
        std::cout << "Niepoprawny wybor. Sproboj ponownie." << "\n\n";
    }
  } while (true);

  return 0;
}
