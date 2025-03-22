#include <iostream>

/*
 * Napisz program, który wczyta od użytkownika
 * macierz 2x3 (2 wiersze i 3 kolumny) i zapisze ją do
 * dwuwymiarowej tablicy. Następnie program obliczy transpozycję
 * tej macierzy (zamieni wiersze z kolumnami) i wyświetli wynik.
 * Kroki do wykonania:
 * - Program wczytuje sześć liczb całkowitych od
 *   użytkownika i zapisuje je w dwuwymiarowej tablicy 2x3.
 * - Program tworzy nową macierz 3x2 do przechowywania transpozycji.
 * - Program przechodzi przez elementy oryginalnej macierzy i
 *   przypisuje je do odpowiednich miejsc w macierzy transponowanej.
 * - Na końcu program wyświetla transponowaną macierz.
 */
int main() {
  const int RAWS = 2, COLS = 3;
  int array[RAWS][COLS];
  int transposed[COLS][RAWS];

  std::cout << "Podaj 6 liczb calkowitych do macierzy 2x3:" << std::endl;
  for (int i = 0; i < RAWS; i++) {
    for (int j = 0; j < COLS; j++) {
      std::cout << "Podaj liczbe dla wiersza " << i + 1 << ", kolumny " << j + 1
                << ": ";
      std::cin >> array[i][j];
      transposed[j][i] = array[i][j];
    }
  }

  std::cout << "Transponowana macierz: " << std::endl;
  for (int i = 0; i < COLS; i++) {
    for (int j = 0; j < RAWS; j++) {
      std::cout << transposed[i][j] << " ";
    }
    std::cout << std::endl;
  }
}
