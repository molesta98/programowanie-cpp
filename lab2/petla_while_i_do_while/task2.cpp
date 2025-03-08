#include <iostream>

/*
 * Napisz program, który obliczy sumę wszystkich liczb naturalnych od 1 do N,
 * gdzie N będzie liczbą podaną przez użytkownika. Użyj pętli while, aby wykonać
 * to zadanie.
 * - Poproś użytkownika o podanie liczby całkowitej dodatniej N.
 * - Zainicjuj zmienną przechowującą sumę na 0.
 * - Użyj pętli while, aby dodawać kolejne liczby naturalne do sumy.
 * - Po osiągnięciu liczby N wyświetl sumę na ekranie.
 */

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
