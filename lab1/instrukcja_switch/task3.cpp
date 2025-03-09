#include <iostream>

/*
 * Napisz program, który poprosi użytkownika o wprowadzenie liczby godzin
 * parkowania oraz rodzaju pojazdu. Program powinien wyliczyć opłatę za
 * parkowanie na podstawie liczby godzin i rodzaju pojazdu.
 * Użyj instrukcji switch, aby obsłużyć trzy rodzaje pojazdów:
 * samochód osobowy (S), motocykl (M) oraz autobus (A).
 * Opłaty za parkowanie są naliczane w następujący sposób:
 * - Samochód osobowy: 5 zł za każdą godzinę.
 * - Motocykl: 3 zł za każdą godzinę.
 * - Autobus: 10 zł za każdą godzinę.
 * Działanie programu:
 * - Program wczytuje liczbę godzin parkowania oraz typ pojazdu od użytkownika.
 * - Na podstawie wprowadzonego typu pojazdu, program wylicza całkowitą opłatę
 *   za parkowanie:
 *   - Samochód osobowy (S): 5 zł za każdą godzinę.
 *   - Motocykl (M): 3 zł za każdą godzinę.
 *   - Autobus (A): 10 zł za każdą godzinę.
 * - W przypadku wprowadzenia nieznanego typu pojazdu, program powinien
 *   wyświetlić odpowiedni komunikat.
 */
int main() {
  short numberOfHours, cost = 0;
  char typeOfVehicle;

  std::cout << "Podaj liczbe godzin parkowania: ";
  std::cin >> numberOfHours;

  std::cout << "Podaj typ pojazdu (S - samochod, M - motocykl, A - autobus): ";
  std::cin >> typeOfVehicle;

  switch (typeOfVehicle) {
    case 'S':
      cost = numberOfHours * 5;
      break;
    case 'M':
      cost = numberOfHours * 3;
      break;
    case 'A':
      cost = numberOfHours * 10;
      break;
    default:
      std::cout << "\nNieznany typ pojazdu." << std::endl;
      return 1;
  }

  std::cout << "Oplata za parkowanie: " << cost << " zl" << std::endl;
}
