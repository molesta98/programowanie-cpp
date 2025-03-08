#include <iostream>

/*
 * Napisz program, który poprosi użytkownika o podanie szerokości oraz
 * wysokości, a następnie wyświetli odwrócony trójkąt z gwiazdek *.
 * Program powinien narysować trójkąt, gdzie szerokość podstawy odpowiada
 * podanej szerokości, a liczba wierszy odpowiada podanej wysokości.
 * Gwiazdki są rozmieszczone w taki sposób, że w każdym kolejnym wierszu
 * margines po bokach trójkąta zwiększa się o jeden znak
 * spacji, aż do osiągnięcia wierzchołka.
 * Kroki do wykonania:
 * - Poproś użytkownika o podanie szerokości i wysokości.
 * - Zainicjuj zmienną margin, która będzie określać liczbę spacji na początku i
 * końcu wiersza.
 * - Użyj zagnieżdżonej pętli for do iteracji przez wiersze i kolumny:
 *   - W każdej iteracji wiersza zwiększaj margin o 1.
 *   - Wypisz gwiazdki w zakresie od 'margin' do 'szerokosc-margin-1', a resztę
 *     wypełnij spacjami.
 */
int main() {
  short width, height;

  std::cout << "Podaj szerokosc: ";
  std::cin >> width;

  std::cout << "Podaj wysokosc: ";
  std::cin >> height;

  for (int i = 0; i < height; i++) {
    int margin = i;
    for (int j = 0; j < margin; j++) {
      std::cout << " ";
    }
    for (int j = 0; j < width - 2 * margin; j++) {
      std::cout << "*";
    }
    for (int j = 0; j < margin; j++) {
      std::cout << " ";
    }

    std::cout << std::endl;
  }

  return 0;
}
