#include <iostream>

int main() {
  float weight, height, bmi;
  std::string bmiStatus;

  std::cout << "Podaj masę ciała w kilogramach: ";
  std::cin >> weight;

  std::cout << "Podaj wzrost w metrach: ";
  std::cin >> height;

  bmi = weight / (height * height);
  std::cout << "\nTwoje BMI wynosi: " << bmi << std::endl;

  if (bmi < 18.5)
    bmiStatus = "Niedowaga";
  else if (bmi >= 18.5 && bmi < 24.9)
    bmiStatus = "W normie";
  else if (bmi >= 24.9 && bmi < 29.9)
    bmiStatus = "Nadwaga";
  else
    bmiStatus = "Otyłość";

  std::cout << "Twoj stan wagowy: " << bmiStatus << std::endl;
}
