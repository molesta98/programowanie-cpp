#include <iostream>

int main() {
  short userValueN, sum = 0, i = 1;

  std::cout << "Podaj liczbe N: ";
  std::cin >> userValueN;

  while (userValueN >= i) {
    sum += i;
    i++;
  }

  std::cout << "Suma liczb naturalnych do " << userValueN << ": " << sum
            << std::endl;
}
