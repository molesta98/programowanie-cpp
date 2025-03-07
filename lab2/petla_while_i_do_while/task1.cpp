#include <iostream>

int main() {
  short userValueN, i = 2;

  std::cout << "Podaj liczbe N: ";
  std::cin >> userValueN;

  if (userValueN < 2) {
    std::cout << "Podana liczba jest mniejsza od 2" << std::endl;
    return 1;
  }

  std::cout << "Liczby parzyste od 2 do " << userValueN << ": " << std::endl;
  while (userValueN >= i) {
    if (i % 2 == 0) std::cout << i << std::endl;
    i++;
  }

  return 0;
}
