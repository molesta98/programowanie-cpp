#include <iostream>

int main() {
  short userValueN, sum = 0, i = 1;

  std::cout << "Podaj liczbe N: ";
  std::cin >> userValueN;

  if (userValueN < 0) {
    std::cout << "Podana liczba jest mniejsza od 0" << std::endl;
    return 1;
  }

  while (userValueN >= i) {
    sum += i;
    i++;
  }

  std::cout << "Suma liczb naturalnych do " << userValueN << ": " << sum
            << std::endl;
}
