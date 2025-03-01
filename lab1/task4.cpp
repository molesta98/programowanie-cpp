#include <iostream>

int main() {
  std::string name;
  short age;

  std::cout << "Podaj swoje imię: ";
  std::cin >> name;

  std::cout << "Podaj swój wiek: ";
  std::cin >> age;

  std::cout << "Witaj, " << name << "!" << " Masz " << age << " lat."
            << std::endl;
}
