#include <iostream>

/*
 * Napisz program, który wczyta liczby od użytkownika,
 * aż ten zdecyduje się zakończyć wprowadzanie. Użyj pętli do-while, aby wykonać
 * to zadanie.
 * - Zainicjuj zmienną do przechowywania liczby.
 * - W pętli do-while:
 *    - Poproś użytkownika o podanie liczby.
 *    - Wyświetl wprowadzone liczby na ekranie.
 *    - Zapytaj użytkownika, czy chce kontynuować (np. 'Czy chcesz wprowadzić
 *      kolejną liczbę? (t/n)').
 * - Kontynuuj pętlę, jeśli użytkownik wybierze 't', a zakończ, jeśli wybierze
 * 'n'.
 */
int main() {
  short userValueN;
  const short BEGIN_VALUE = 1;

  std::cout << "Podaj liczbe N: ";
  std::cin >> userValueN;

  std::cout << "Liczby nieparzyste od " << BEGIN_VALUE << " do " << userValueN
            << ": " << std::endl;
  for (short i = 1; i <= userValueN; i++) {
    if (i % 2 != 0) std::cout << i << std::endl;
  }

  return 0;
}
