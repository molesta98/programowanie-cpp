#include <iostream>

/*
 * Napisz program, który policzy, ile liczb parzystych znajduje się w
 * zakresie od 1 do N, gdzie N będzie liczbą podaną przez użytkownika.
 * Użyj pętli do-while, aby wykonać to zadanie.
 * - Poproś użytkownika o podanie liczby całkowitej dodatniej N.
 * - Zainicjuj zmienną przechowującą licznik parzystych na 0 oraz
 *   zmienną pomocniczą do iteracji, rozpoczynając od 1.
 * - Użyj pętli do-while, aby sprawdzać każdą liczbę w zakresie od 1 do N:
 *   Jeśli liczba jest parzysta, zwiększ licznik parzystych o 1.
 * - Po zakończeniu pętli wyświetl liczbę liczb parzystych na ekranie.
 */

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
