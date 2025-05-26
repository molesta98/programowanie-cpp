#include <iostream>

int main() {
  float weight, height, BMI;
  std::string bmiStatus;

  std::cout << "Podaj masę ciała w kilogramach: ";
  std::cin >> weight;

  std::cout << "Podaj wzrost w metrach: ";
  std::cin >> height;

  BMI = weight / (height * height);
  std::cout << "\nTwoje BMI wynosi: " << BMI << std::endl;

  if (BMI < 18.5)
    bmiStatus = "Niedowaga";
  else if (BMI >= 18.5 && BMI < 24.9)
    bmiStatus = "W normie";
  else if (BMI >= 24.9 && BMI < 29.9)
    bmiStatus = "Nadwaga";
  else
    bmiStatus = "Otyłość";

  std::cout << "Twoj stan wagowy: " << bmiStatus << std::endl;
}
