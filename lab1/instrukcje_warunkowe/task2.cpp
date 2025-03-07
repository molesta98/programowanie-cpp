#include <iostream>

int main() {
  float weight, height, bmi;
  std::string bmi_status;

  std::cout << "Podaj masę ciała w kilogramach: ";
  std::cin >> weight;

  std::cout << "Podaj wzrost w metrach: ";
  std::cin >> height;

  bmi = weight / (height * height);
  std::cout << "\nTwoje BMI wynosi: " << bmi << std::endl;

  if (bmi < 18.5)
    bmi_status = "Niedowaga";
  else if (bmi >= 18.5 && bmi < 24.9)
    bmi_status = "W normie";
  else if (bmi >= 24.9 && bmi < 29.9)
    bmi_status = "Nadwaga";
  else
    bmi_status = "Otyłość";

  std::cout << "Twoj stan wagowy: " << bmi_status << std::endl;
}
