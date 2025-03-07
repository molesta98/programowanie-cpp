#include <iostream>

int main() {
  short userValueN;
  const short BEGIN_VALUE = 1;

  std::cout << "Podaj liczbe N: ";
  std::cin >> userValueN;

  std::cout << "Liczby nieparzyste od " << BEGIN_VALUE << " do " << userValueN
            << ": " << std::endl;
  for (short i = 1; i <= userValueN; i++) {
    if (i % 2 != 0) std::cout << i << std::endl;
  }

  return 0;
}
