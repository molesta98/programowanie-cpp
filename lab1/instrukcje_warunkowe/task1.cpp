#include <iostream>

/*
 * Napisz program, który pobiera od użytkownika wynik egzaminu
 * (liczbę punktów) i przypisuje odpowiednią ocenę na podstawie poniższej skali:
 * - 0-49 punktów: Ocena niedostateczna
 * - 50-69 punktów: Ocena dostateczna
 * - 70-84 punktów: Ocena dobra
 * - 85-99 punktów: Ocena bardzo dobra
 * - 100 punktów: Ocena celująca
 * Program powinien również sprawdzać poprawność wprowadzonych danych,
 * informując użytkownika, gdy wprowadzi on punkty spoza zakresu od 0 do 100.
 */
int main() {
  short examResult;
  std::string grade;

  std::cout << "Podaj wynik egzaminu (liczba punktow): ";
  std::cin >> examResult;

  if (examResult >= 0 && examResult <= 49) {
    grade = "Niedostateczna";
  } else if (examResult >= 50 && examResult <= 69) {
    grade = "Dostateczna";
  } else if (examResult >= 70 && examResult <= 84) {
    grade = "Dobra";
  } else if (examResult >= 85 && examResult <= 99) {
    grade = "Bardzo dobra";
  } else if (examResult == 100) {
    grade = "Celujaca";
  } else {
    std::cout << "Podano niepoprawny wynik egzaminu." << std::endl;
    return 1;
  }

  std::cout << "Ocena: " << grade << std::endl;
  return 0;
}
