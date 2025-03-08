#include <iostream>

/*
 * Napisz program, który obliczy sumę wszystkich liczb od 1 do N,
 * gdzie N zostanie podane przez użytkownika.
 * Użyj pętli for, aby wykonać to zadanie.
 * - Poproś użytkownika o podanie liczby całkowitej dodatniej N.
 * - Użyj pętli for, aby dodać wszystkie liczby od 1 do N i wyświetlić wynik
 *   sumy na ekranie.
 * - Po wyświetleniu wyniku zakończ działanie programu.
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
