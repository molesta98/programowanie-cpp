#include <iostream>

/*
 * Napisz program, który wczyta od użytkownika ciąg znaków o
 * długości maksymalnie 20 znaków, a następnie zamieni wszystkie
 * wystąpienia litery 'a' na literę 'o'. Program wyświetli zmodyfikowany ciąg
 * znaków. Kroki do wykonania:
 * - Program wczytuje ciąg znaków od użytkownika i zapisuje go w tablicy o
 * rozmiarze 21.
 * - Program przechodzi przez każdy znak w tablicy, sprawdzając, czy jest to
 * litera 'a'.
 * - Jeśli znajdzie literę 'a', zamienia ją na literę 'o'.
 * - Na końcu program wyświetla zmodyfikowany ciąg znaków.
 */

int main() {
  const int SIZE = 21;
  char buffer[SIZE];
  std::cout << "Podaj ciag znakow (max 20 znakow): ";
  std::cin.getline(buffer, SIZE);

  for (int i = 0; i < SIZE - 1; i++) {
    if (buffer[i] == 'a') buffer[i] = 'o';
  }
  std::cout << "Zmodyfikowany ciag znakow: " << buffer << std::endl;
}
