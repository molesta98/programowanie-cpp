#include <iostream>

/*
 * Napisz program, który wczyta od użytkownika pięć liczb
 * całkowitych i zapisze je do tablicy.
 * Następnie program zamieni wszystkie liczby ujemne na
 * zera i wyświetli zmodyfikowaną tablicę.
 * Kroki do wykonania:
 * - Program wczytuje pięć liczb całkowitych od użytkownika i zapisuje je w
 *   tablicy jednowymiarowej.
 * - Program przechodzi przez wszystkie elementy tablicy i sprawdza, czy dana
 *   liczba jest ujemna.
 * - Jeśli liczba jest ujemna, zostaje zastąpiona zerem.
 * - Program wyświetla zmodyfikowaną tablicę na ekranie.
 */

int main() {
  int count = 5;
  int numbers[5];

  std::cout << "Wprowadz " << count << " liczb calkowitych:" << std::endl;
  for (int i = 0; i < count; i++) {
    std::cin >> numbers[i];
    if (numbers[i] < 0) {
      numbers[i] = 0;
    }
  }

  std::cout << "Liczby ujemne zamienione na 0: ";
  for (int i = 0; i < count; i++) {
    std::cout << numbers[i];
    if (i < count - 1) {
      std::cout << ", ";
    }
  }
  std::cout << std::endl;

  return 0;
}
