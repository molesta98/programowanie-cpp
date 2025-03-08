#include <iostream>

/*
 * Napisz program, który poprosi użytkownika o podanie szerokości i
 * wysokości dywanu, a następnie wyświetli wzór dywanu, który:
 * - Ma górną i dolną krawędź złożoną z myślników -.
 * - Ma boczne krawędzie (pierwsza i ostatnia kolumna) złożone z pionowych
     kresek |.
 * - Wnętrze dywanu składa się z naprzemiennych znaków # i *, tworzących
     szachownicę.
 * Program powinien użyć zagnieżdżonej pętli for, aby narysować dywan zgodnie z
 podanymi zasadami.
 * Kroki do wykonania:
 * - Poproś użytkownika o podanie szerokości i wysokości.
 * - Użyj zagnieżdżonej pętli for, aby iterować przez wiersze i kolumny dywanu:
 *   - Pierwszy i ostatni wiersz powinny być wypełnione myślnikami -.
 *   - Pierwsza i ostatnia kolumna wewnętrznych wierszy powinny być pionowymi
 *     kreskami |.
 *   - Wnętrze wierszy tworzy naprzemienne znaki # i * na podstawie sumy
 *     indeksów wiersza i kolumny.

*/
int main() {
  short height, width;

  std::cout << "Podaj szerokosc: ";
  std::cin >> width;

  std::cout << "Podaj wysokosc: ";
  std::cin >> height;

  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      if (i == 0 || i == height - 1) {
        std::cout << "-";
      } else if (j == 0 || j == width - 1) {
        std::cout << "|";
      } else {
        if ((i + j) % 2 == 0) {
          std::cout << "#";
        } else {
          std::cout << "*";
        }
      }
    }
    std::cout << std::endl;
  }

  return 0;
}
