#include <iostream>

int main() {
  short N, i = 1, evenNumbers = 0;
  std::cout << "Podaj liczbe calkowita dodatnia N: ";
  std::cin >> N;

  do {
    if (i % 2 == 0) evenNumbers++;
    i++;
  } while (N >= i);

  std::cout << "Liczba liczb parzystych od 1 do " << N << ": " << evenNumbers
            << std::endl;
}
