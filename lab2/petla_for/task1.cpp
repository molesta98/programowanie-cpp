#include <iostream>

/*
 * Napisz program, który wyświetli wszystkie liczby parzyste od 2 do N,
 * gdzie N będzie podane przez użytkownika. Użyj pętli while, aby wykonać to
 * zadanie.
 * - Poproś użytkownika o podanie liczby całkowitej dodatniej N.
 * - Użyj pętli while, aby sprawdzić i wyświetlić wszystkie liczby parzyste od 2
 * do N na ekranie.
 * - Po wyświetleniu wszystkich liczb parzystych zakończ działanie programu.
 */
int main() {
  short userValueN, sum = 0;
  const short BEGIN_VALUE = 1;

  std::cout << "Poda liczbe N: ";
  std::cin >> userValueN;

  if (userValueN < BEGIN_VALUE) {
    std::cout << "Podana liczba jest mniejsza od " << BEGIN_VALUE << std::endl;
    return 1;
  }

  for (short i = 0; i <= userValueN; i++) {
    sum += i;
  }

  std::cout << "Suma liczb od " << BEGIN_VALUE << " do " << userValueN
            << " wynosi: " << sum << std::endl;

  return 0;
}
