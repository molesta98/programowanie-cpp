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
  short number;
  char decision;

  do {
    std::cout << "Podaj liczbe: ";
    std::cin >> number;
    std::cout << "Wprowadziles liczbe: " << number << std::endl;
    std::cout << "Czy chcesz wprowadzic kolejna liczbe? (t/n): ";
    std::cin >> decision;
  } while (decision == 't' || decision == 'T');

  std::cout << "Dziekuje za wprowadzenie liczb!" << std::endl;

  return 0;
}
