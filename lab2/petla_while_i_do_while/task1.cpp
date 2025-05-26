#include <iostream>

int main() {
  short N, i = 2;

  std::cout << "Podaj liczbe N: ";
  std::cin >> N;

  if (N < 2) {
    std::cout << "Podana liczba jest mniejsza od 2" << std::endl;
    return 1;
  }

  std::cout << "Liczby parzyste od 2 do " << N << ": " << std::endl;
  while (N >= i) {
    if (i % 2 == 0) std::cout << i << std::endl;
    i++;
  }

  return 0;
}
