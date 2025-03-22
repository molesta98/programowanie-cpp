#include <iostream>

/*
 * Napisz program, który wczyta od użytkownika dziewięć liczb
 * całkowitych i zapisze je do dwuwymiarowej tablicy 3x3.
 * Następnie program obliczy średnią tych liczb i wyświetli wynik.
 * Kroki do wykonania:
 *   - Program wczytuje dziewięć liczb całkowitych od
 *     użytkownika i zapisuje je w dwuwymiarowej tablicy 3x3.
 *   - Program przechodzi przez wszystkie elementy tablicy,
 *     sumując ich wartości.Po obliczeniu sumy program dzieli
 *     ją przez liczbę elementów (9), aby uzyskać średnią.
 *   - Na końcu program wyświetla wynik obliczonej średniej.
 */

int main() {
  const int SIZE = 3;
  int array[SIZE][SIZE];
  int sum = 0;

  std::cout << "Podaj 9 liczb calkowitych do macierzy 3x3:\n";
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      std::cout << "Podaj liczbe dla wiersza " << i + 1 << ", kolumny " << j + 1
                << ": ";
      std::cin >> array[i][j];
      sum += array[i][j];
    }
  }

  int avg = sum / 9.0;

  std::cout << "Srednia liczb: " << avg << std::endl;

  return 0;
}
