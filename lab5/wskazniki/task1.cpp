#include <iostream>

int main() {
  int a = 5, b = 10;
  int *wskaznik_a = &a, *wskaznik_b = &b;

  std::cout << "Przed modyfikacją:" << std::endl;
  std::cout << "a = " << *wskaznik_a << std::endl;
  std::cout << "b = " << *wskaznik_b << std::endl;

  *wskaznik_a = 15;
  *wskaznik_b = 20;

  std::cout << "\nPo modyfikacji:" << std::endl;
  std::cout << "a = " << *wskaznik_a << std::endl;
  std::cout << "b = " << *wskaznik_b << std::endl;
}
