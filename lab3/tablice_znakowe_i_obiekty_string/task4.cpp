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
  std::string exampleString;

  std::cout << "Podaj ciag znakow: ";
  std::getline(std::cin, exampleString);
  std::cout << exampleString << std::endl;
}
