#include <iostream>

int main() {
  const double KELVIN = 273.15;
  double temperture;
  char temperature_unit;
  std::string temperature_unit_name;

  std::cout << "Podaj temperature w stopniach Celsjusza: ";
  std::cin >> temperture;

  std::cout << "Wybierz jednostke docelowa (K - Kelvin, F - Fahrenheit): ";
  std::cin >> temperature_unit;

  switch (temperature_unit) {
    case 'K':
      temperture += KELVIN;
      temperature_unit_name = "Kelvina";
      break;
    case 'F':
      temperture = temperture * 9 / 5 + 32;
      temperature_unit_name = "Fahrenheita";
      break;
    default:
      std::cout << "Nieznana jednostka" << std::endl;
      return 1;
  }

  std::cout << "Temperatura w stopniach " << temperature_unit_name << ": "
            << temperture << std::endl;

  return 0;
}
