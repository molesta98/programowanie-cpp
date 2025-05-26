#include <iostream>

int main() {
  int a = 5;
  float b = 3.14;
  char c = 'A';
  bool d = true;

  std::cout << "Zmienna calkowita: " << a << std::endl;
  std::cout << "Zmienna zmiennoprzecinkowa: " << b << std::endl;
  std::cout << "Zmienna znakowa: " << c << std::endl;
  std::cout << std::boolalpha;
  std::cout << "Zmienna logiczna: " << d << std::endl;
  std::cout << std::noboolalpha;

  return 0;
}
