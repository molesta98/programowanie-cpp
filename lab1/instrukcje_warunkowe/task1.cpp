#include <iostream>

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
