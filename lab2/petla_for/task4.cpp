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
  short rows, columns, oddNumbers = 1;

  std::cout << "Podaj liczbe wierszy: ";
  std::cin >> rows;

  std::cout << "Podaj liczbe kolumn: ";
  std::cin >> columns;

  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < columns; ++j) {
      std::cout << oddNumbers << "\t";
      oddNumbers += 2;
    }
    std::cout << std::endl;
  }

  return 0;
}
