#include <cstring>
#include <iostream>

/*
 * Napisz program, który wczyta od użytkownika ciąg znaków oraz znak,
 * którego wystąpienia w ciągu mają zostać zliczone.
 * Program powinien także wyświetlić pozycje, na których dany znak występuje w
 * podanym ciągu. Kroki do wykonania:
 * - Program wczytuje ciąg znaków od użytkownika, zapisując go w tablicy znaków.
 * - Program następnie wczytuje pojedynczy znak, którego wystąpienia mają być
 *   zliczone.
 * - Zmienna licznik jest inicjalizowana do zera, oraz stworzona tablica do
 *   przechowywania pozycji wystąpień znaku.
 * - Pętla przechodzi przez każdy element tablicy, porównując każdy znak z
 *   podanym przez użytkownika znakiem do zliczenia.
 * - Jeśli dany znak w tablicy jest taki sam, jak szukany, licznik zwiększa
 *   swoją wartość o jeden, a pozycja jest zapisywana w tablicy.
 * - Na końcu program wyświetla liczbę wystąpień danego znaku w ciągu oraz listę
 *   pozycji, na których dany znak występuje.
 */
int main() {
  std::string exampleString;
  char charToCount;
  int count = 0, stringLength = 0;

  std::cout << "Podaj ciag znakow: ";
  std::getline(std::cin, exampleString);
  std::cout << "Podaj znak do zliczenia: ";
  std::cin >> charToCount;
  std::cout << "Liczba wystapien: '" << charToCount << "': ";
  stringLength = exampleString.length();
  for (int i = 0; i < stringLength; i++) {
    if (exampleString[i] == charToCount) {
      count++;
    }
  }
  std::cout << count << std::endl;
  std::cout << "Pozycje wystapien: ";
  for (int i = 1; i < stringLength; i++) {
    if (exampleString[i] == charToCount) {
      std::cout << i;
      if (i != stringLength - 1) {
        std::cout << ", ";
      }
    }
  }
  std::cout << std::endl;
}
