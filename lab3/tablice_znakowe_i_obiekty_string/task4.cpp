#include <cstring>
#include <iostream>
/*
 * Napisz program, który odwróci podany przez użytkownika ciąg znaków i
 * wyświetli wynik. Kroki do wykonania:
 * - Program wczytuje ciąg znaków od użytkownika i zapisuje go w tablicy znaków.
 * - Program oblicza długość wprowadzonego ciągu, aby wiedzieć, ile znaków
 *   należy odwrócić. Należy zaimportować bibliotekę 'cstring' i użyć metody
 *   strlen()
 * - Program przechodzi przez tablicę znaków od końca do początku i zapisuje
 *   odwrócony ciąg w nowej tablicy.
 * - Na końcu program wyświetla odwrócony ciąg znaków.
 */

int main() {
  const short MAX_LENGTH = 100;
  char inputString[MAX_LENGTH];
  char reversedString[MAX_LENGTH];

  std::cout << "Podaj ciag znakow: ";
  std::cin.getline(inputString, MAX_LENGTH);
  int stringLength = strlen(inputString);
  for (int i = 0; i < stringLength; i++) {
    reversedString[i] = inputString[stringLength - 1 - i];
  }
  std::cout << "Odwrocony ciag: " << reversedString << std::endl;

  return 0;
}
