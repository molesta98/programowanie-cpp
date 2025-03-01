#include <iostream>

int main() {
  short exam_result;
  std::string grade;

  std::cout << "Podaj wynik egzaminu (liczba punktow): ";
  std::cin >> exam_result;

  if (exam_result >= 50 && exam_result <= 69)
    grade = "Dostateczna";
  else if (exam_result >= 70 && exam_result <= 84)
    grade = "Dobra";
  else if (exam_result >= 85 && exam_result <= 99)
    grade = "Bardzo dobra";
  else if (exam_result == 100)
    grade = "Celujaca";
  else
    grade = "Niedostateczna";

  std::cout << "Ocena: " << grade << std::endl;
}
