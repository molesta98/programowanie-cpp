#include <iostream>

/*
 * Napisz program, który poprosi użytkownika o podanie liczby wierszy i kolumn,
 * a następnie wypełni macierz o podanych wymiarach liczbami nieparzystymi w
 * kolejności rosnącej, zaczynając od 1.
 * Każda liczba nieparzysta powinna być umieszczona w kolejnej pozycji macierzy,
 * a po zakończeniu wypełniania program powinien wypisać zawartość
 * macierzy w odpowiednim formacie. Kroki do wykonania:
 * - Poproś użytkownika o podanie liczby wierszy i kolumn.
 * - Użyj zagnieżdżonej pętli for, aby przejść przez wiersze i kolumny.
 * - Wypełniaj macierz kolejnymi liczbami nieparzystymi, zaczynając od 1.
 * - Wypisz zawartość macierzy w odpowiednim formacie po zakończeniu iteracji.
 */
int main() {
  short rows, columns, oddNumbers = 1;

  std::cout << "Podaj liczbe wierszy: ";
  std::cin >> rows;

  std::cout << "Podaj liczbe kolumn: ";
  std::cin >> columns;

  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < columns; ++j) {
      std::cout << oddNumbers << "\t";
      oddNumbers += 2;
    }
    std::cout << std::endl;
  }

  return 0;
}
