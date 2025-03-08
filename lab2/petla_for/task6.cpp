#include <iostream>

/*
 * Napisz program, który poprosi użytkownika o podanie szerokości i
 * wysokości prostokąta, a następnie wyświetli ramkę prostokąta
 * utworzoną z gwiazdek *. Program powinien użyć zagnieżdżonej
 * pętli for, aby narysować ramkę, gdzie:
 * - Pierwszy i ostatni wiersz będą całkowicie wypełnione gwiazdkami.
 * - Pierwsza i ostatnia kolumna będą całkowicie wypełnione gwiazdkami.
 * - W pozostałych przypadkach, czyli środek, będzie pusty (spacje).
 */
int main() {
  short height, width;
  char frame = '*';

  std::cout << "Podaj szerokosc: ";
  std::cin >> width;

  std::cout << "Podaj wysokosc: ";
  std::cin >> height;

  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
        std::cout << frame;
      } else {
        std::cout << " ";
      }
    }
    std::cout << std::endl;
  }

  return 0;
}
