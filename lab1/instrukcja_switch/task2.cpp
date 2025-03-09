#include <iostream>

/*
 * Napisz program, który poprosi użytkownika o wprowadzenie temperatury w
 * stopniach Celsjusza oraz wybór jednostki, do której ma zostać przeliczona
 * (Kelvin, Fahrenheit). Program powinien dokonać odpowiedniego przeliczenia
 * temperatury na podstawie wyboru użytkownika. Użyj instrukcji switch do
 * obsługi dwóch opcji: K dla Kelvina i F dla Fahrenheita. W przypadku podania
 * nieprawidłowej opcji, program powinien wyświetlić odpowiedni komunikat.
 * Działanie programu:
 * - Program wczytuje temperaturę w stopniach Celsjusza od użytkownika.
 * - Na podstawie wyboru użytkownika (K lub F), program przelicza temperaturę na
 *   wybraną jednostkę:
 *   - Dla opcji K (Kelvin): temperatura w Kelwinach jest równa temperaturze w
 *     Celsjuszach plus 273.15.
 *   - Dla opcji F (Fahrenheit): temperatura w Fahrenheitach to wynik działania
 *     (Celsjusz * 9/5) + 32.
 * - Jeśli użytkownik wprowadzi inną literę niż K lub F, program wyświetla
 *   komunikat o błędzie.
 */
int main() {
  const float KELVIN = 273.15;
  float temperture;
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
