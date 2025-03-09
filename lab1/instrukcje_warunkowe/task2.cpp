#include <iostream>

/*
 * Napisz program, który oblicza wskaźnik masy ciała (BMI)
 * na podstawie wprowadzonych przez użytkownika danych:
 * masy ciała w kilogramach i wzrostu w metrach. Program powinien
 * następnie wyświetlić interpretację wyniku BMI
 * na podstawie poniższych kategorii:
 * - BMI poniżej 18.5: Niedowaga
 * - BMI od 18.5 do 24.9: W normie
 * - BMI od 25 do 29.9: Nadwaga
 * - BMI powyżej 30: Otyłość
 * Wskazówki:
 * Skorzystaj z instrukcji warunkowej if-else do porównania wartości
 * BMI z przedziałami i ustalenia odpowiedniej kategorii.
 * Wagę podajemy w kg a wzrost w metrach.
 * Do obliczenia BMI użyj wzoru: BMI = masa_ciała / (wzrost * wzrost).
 */
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
