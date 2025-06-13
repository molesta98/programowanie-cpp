#include <iostream>

float CalculateVolume(float a);
float CalculateVolume(float a, float b, float h);
float CalculateVolume(float r, float h);
void DisplayResult(float volume);

void DisplayMenu() {
  std::cout << "Wybierz bryle do obliczenia objetosci:\n"
               "1 - Szescian (V = a^3)\n"
               "2 - Prostopadloscian (V = a * b * h)\n"
               "3 - Walec (V = pi * r^2 * h)\n"
               "Wybierz numer bryly: ";
}
const float PI = 3.1415;

int main() {
  int decision;
  float a, b, h, r;

  DisplayMenu();
  std::cin >> decision;

  switch (decision) {
    case 1:
      std::cout << "Podaj dlugosc boku a: ";
      std::cin >> a;
      DisplayResult(CalculateVolume(a));
      break;
    case 2:
      std::cout << "Podaj dlugosc boku a: ";
      std::cin >> a;
      std::cout << "Podaj szerokosc boku b: ";
      std::cin >> b;
      std::cout << "Podaj wysokosc: ";
      std::cin >> h;
      DisplayResult(CalculateVolume(a, b, h));
      break;
    case 3:
      std::cout << "Podaj promien: ";
      std::cin >> r;
      std::cout << "Podaj wysokosc: ";
      std::cin >> h;
      DisplayResult(CalculateVolume(r, h));
    default:
      break;
  }
}

float CalculateVolume(float a) { return a * a * a; }
float CalculateVolume(float a, float b, float h) { return a * b * h; }
float CalculateVolume(float r, float h) { return PI * r * r * h; }
void DisplayResult(float volume) {
  std::cout << "Objetosc wynosi: " << volume << std::endl;
}
