#include <iostream>

// Napisz program, który przypisze dwie liczby całkowite do zmiennych,
// a następnie wyświetli ich sumę, różnicę i iloczyn.

int main() {
  short a = 5, b = 3;

  std::cout << "Liczba a: " << a << std::endl;
  std::cout << "Liczba b: " << b << std::endl;
  std::cout << "Suma: " << a + b << std::endl;
  std::cout << "Roznica: " << a - b << std::endl;
  std::cout << "Iloczyn: " << a * b << std::endl;

  return 0;
}
