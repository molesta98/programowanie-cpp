#include <iostream>

/*
 * Napisz program, który wczyta od użytkownika ciąg znaków o
 * maksymalnej długości 20 znaków i zapisze go do tablicy znakowej.
 * Następnie program wyświetli wprowadzony ciąg znaków.
 * Kroki do wykonania:
 * - Program deklaruje tablicę znakową o
 *   rozmiarze 21 (20 znaków plus jeden znak \0 kończący ciąg).
 * - Program prosi użytkownika o wpisanie ciągu znaków,
 *   który zostanie zapisany w tablicy znakowej.
 * - Program używa funkcji cin.getline, aby wczytać cały
 *   ciąg znaków (w tym potencjalne spacje) do tablicy znakowej.
 * - Program wyświetla wprowadzony ciąg znaków, korzystając z tablicy znakowej.
 */
int main() {
  const int SIZE = 21;
  char buffer[SIZE];
  std::cout << "Podaj ciag znakow (max 20 znakow): ";
  std::cin.getline(buffer, SIZE);
  std::cout << "Wprowadzony ciag znakow: " << buffer << std::endl;
}
