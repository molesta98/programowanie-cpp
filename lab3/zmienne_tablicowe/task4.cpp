#include "iostream"

/*
 * Napisz program, który pozwoli użytkownikowi wprowadzić 10 liczb całkowitych
 * do tablicy jednowymiarowej, a następnie wyświetli liczby parzyste po
 * przecinku i obliczy sumę wszystkich liczb parzystych.
 * Kroki do wykonania:
 *   - Użytkownik wprowadza liczby całkowite.
 *   - Program przeszukuje tablicę, sprawdzając, które liczby są parzyste,
 *     wyświetla je i dodaje do sumy.
 *   - Program wyświetla liczby parzyste po przecinku.
 *   - Program wyświetla sumę wszystkich liczb parzystych.
 */
int main() {
  const int SIZE = 10;
  int numbers[SIZE];
  int sum = 0;

  for (int i = 0; i < SIZE; ++i) {
    std::cout << "Podaj liczbe nr " << i + 1 << ": ";
    std::cin >> numbers[i];
  }

  std::cout << "Liczby parzyste: ";
  for (int i = 0; i < SIZE; ++i) {
    if (numbers[i] % 2 == 0) {
      std::cout << numbers[i];
      if (i < SIZE) {
        std::cout << ", ";
      }
      sum += numbers[i];
    }
  }
  std::cout << std::endl;

  std::cout << "Suma liczb parzystych: " << sum << std::endl;

  return 0;
}
