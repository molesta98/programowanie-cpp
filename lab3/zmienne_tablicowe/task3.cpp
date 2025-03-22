#include <iostream>

/*
 * Napisz program w C++, który wczyta od użytkownika 10 liczb całkowitych
 * do tablicy jednowymiarowej. Następnie program powinien przeanalizować
 * tablicę i znaleźć najmniejszą liczbę. Na koniec program wyświetli
 * najmniejszą liczbę znalezioną w tablicy.
 * Kroki do wykonania:
 * - Program wczytuje 10 liczb całkowitych od użytkownika i zapisuje je w
 *   tablicy.
 * - Program analizuje zawartość tablicy, porównując elementy, aby znaleźć
 *   najmniejszą liczbę.
 * - Na końcu program wyświetla najmniejszą liczbę.
 */
int main() {
  const int SIZE = 10;
  int numbers[SIZE];

  std::cout << "Podaj " << SIZE << " liczb calkowitych:" << std::endl;
  for (int i = 0; i < SIZE; i++) {
    std::cout << "Podaj liczbe nr " << i + 1 << ": ";
    std::cin >> numbers[i];
  }

  int min = numbers[0];
  for (int i = 0; i < SIZE; i++) {
    if (numbers[i] < min) {
      min = numbers[i];
    }
  }
  std::cout << "Najmniejsza liczba to: " << min << std::endl;
}
