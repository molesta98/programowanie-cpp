#include <iostream>

int main() {
  short N, sum = 0;
  int i = 1;

  std::cout << "Podaj liczbe N: ";
  std::cin >> N;

  if (N < 0) {
    std::cout << "Podana liczba jest mniejsza od 0" << std::endl;
    return 1;
  }

  while (N >= i) {
    sum += i;
    i++;
  }

  std::cout << "Suma liczb naturalnych do " << N << ": " << sum << std::endl;
}
