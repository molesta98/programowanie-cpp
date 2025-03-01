#include <iostream>

// Napisz program, który pobierze od użytkownika jego imię i wiek,
// a następnie wyświetli wiadomość powitalną.

int main() {
  std::string name;
  short age;

  std::cout << "Podaj swoje imie: ";
  std::cin >> name;

  std::cout << "Podaj swoj wiek: ";
  std::cin >> age;

  std::cout << "Witaj, " << name << "!" << " Masz " << age << " lat."
            << std::endl;
}
