#include <iostream>

int main() {
  short userValueN, i = 1, evenNumbers = 0;
  std::cout << "Podaj liczbe calkowita dodatnia N: ";
  std::cin >> userValueN;

  do {
    if (i % 2 == 0) {
      evenNumbers++;
    }
    i++;
  } while (userValueN >= i);

  std::cout << "Liczba liczb parzystych od 1 do " << userValueN << ": "
            << evenNumbers << std::endl;
}
