#include <iostream>

int main() {
  const double KELVIN = 273.15;
  double temperture;
  char temperatureUnit;
  std::string temperatureUnitName;

  std::cout << "Podaj temperature w stopniach Celsjusza: ";
  std::cin >> temperture;

  std::cout << "Wybierz jednostke docelowa (K - Kelvin, F - Fahrenheit): ";
  std::cin >> temperatureUnit;

  switch (temperatureUnit) {
    case 'K':
      temperture += KELVIN;
      temperatureUnitName = "Kelvina";
      break;
    case 'F':
      temperture = temperture * 9 / 5 + 32;
      temperatureUnitName = "Fahrenheita";
      break;
    default:
      std::cout << "Nieznana jednostka" << std::endl;
      return 1;
  }

  std::cout << "Temperatura w stopniach " << temperatureUnitName << ": "
            << temperture << std::endl;

  return 0;
}
