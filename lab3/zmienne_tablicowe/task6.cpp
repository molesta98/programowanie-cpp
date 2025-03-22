#include "iostream"

/*
 * Napisz program, który wczyta od użytkownika macierz 3x3
 * (3 wiersze i 3 kolumny) i zapisze ją do dwuwymiarowej tablicy.
 * Następnie program obliczy sumę wszystkich elementów w tej
 * macierzy i wyświetli wynik. Kroki do wykonania:
 * - Program wczytuje dziewięć liczb całkowitych od użytkownika i
 *   zapisuje je w dwuwymiarowej tablicy 3x3.
 * - Program przechodzi przez wszystkie elementy macierzy, sumując ich wartości.
 * - Na końcu program wyświetla wynik obliczonej sumy.

*/
int main() {
  int matrix[3][3];
  int sum = 0, count = 3;

  std::cout << "Podaj 9 liczb calkowitych do macierzy 3x3:" << std::endl;
  for (int i = 0; i < count; i++) {
    for (int j = 0; j < count; j++) {
      std::cout << "Podaj liczbe dla wiersza " << i + 1 << ", kolumny " << j + 1
                << ": ";
      std::cin >> matrix[i][j];
    }
  }
  for (int i = 0; i < count; i++) {
    for (int j = 0; j < count; j++) {
      sum += matrix[i][j];
    }
  }
  std::cout << "Suma elementow macierzy: " << sum << std::endl;

  return 0;
}
