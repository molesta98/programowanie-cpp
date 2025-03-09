#include <iostream>

/*
 * Napisz program, który wczyta od użytkownika pięć liczb
 * całkowitych i zapisze je do tablicy.
 * Następnie program obliczy średnią tych liczb i wyświetli wynik.
 * Kroki do wykonania:
 * - Program wczytuje pięć liczb całkowitych od użytkownika i zapisuje je w
 *   tablicy jednowymiarowej.
 * - Program przechodzi przez wszystkie elementy tablicy, sumując ich wartości.
 * - Po obliczeniu sumy program dzieli ją przez liczbę elementów, aby uzyskać
 *   średnią.
 * - Na końcu program wyświetla wynik obliczonej średniej.
 */
int main() {
  int count = 5;
  int numbers[count], sum = 0;
  float avg = 0;

  for (int i = 0; i < count; i++) {
    std::cout << "Podaj liczbe calkowita nr " << i + 1 << ": ";
    std::cin >> numbers[i];
    sum += numbers[i];
  }

  avg = sum / count;
  std::cout << "Srednia liczb: " << avg << std::endl;

  return 0;
}
