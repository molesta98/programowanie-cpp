#include <iostream>

int main() {
  short numberOfHours;
  char typeOfVehicle;
  double cost = 0;

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
