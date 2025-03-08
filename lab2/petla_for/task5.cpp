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
  short userValue;
  const short BEGIN_VALUE = 1;

  std::cout << "Podaj liczbe N: ";
  std::cin >> userValue;

  for (short i = BEGIN_VALUE; i <= userValue; i++) {
    for (short j = BEGIN_VALUE; j <= userValue; j++) {
      std::cout << i << " * " << j << " = " << i * j << "\n";
    }
    std::cout << std::endl;
  }

  return 0;
}
