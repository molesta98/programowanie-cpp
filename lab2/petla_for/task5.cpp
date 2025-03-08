#include <iostream>

/*
 * Napisz program, który wyświetli tabliczkę mnożenia od 1 do N w
 * formacie a * b = wynik, gdzie N zostanie podane przez użytkownika.
 * Program powinien użyć zagnieżdżonej pętli for, aby dla każdej
 * pary liczb z zakresu od 1 do N wyświetlić iloczyn. Kroki do wykonania:
 * - Poproś użytkownika o podanie liczby N.
 * - Użyj zagnieżdżonej pętli for do iteracji przez wszystkie liczby od 1 do N.
 * - Wypisz wynik mnożenia w formacie a * b = wynik dla każdej kombinacji liczb.
 */
int main() {
  int N;

  std::cout << "Podaj liczbe N: ";
  std::cin >> N;

  for (short i = 1; i <= N; i++) {
    for (short j = 1; j <= N; j++) {
      std::cout << i << " * " << j << " = " << i * j << "\n";
    }
    std::cout << std::endl;
  }

  return 0;
}
