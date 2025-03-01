#include <iostream>

int main() {
  short exam_result;
  std::string grade;

  std::cout << "Podaj wynik egzaminu (liczba punktow): ";
  std::cin >> exam_result;

  if (exam_result >= 0 && exam_result <= 49) {
    grade = "Niedostateczna";
  } else if (exam_result >= 50 && exam_result <= 69) {
    grade = "Dostateczna";
  } else if (exam_result >= 70 && exam_result <= 84) {
    grade = "Dobra";
  } else if (exam_result >= 85 && exam_result <= 99) {
    grade = "Bardzo dobra";
  } else if (exam_result == 100) {
    grade = "Celujaca";
  } else {
    std::cout << "Podano niepoprawny wynik egzaminu." << std::endl;
    return 1;
  }

  std::cout << "Ocena: " << grade << std::endl;
  return 0;
}
