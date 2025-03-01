#include <iostream>

int main() {
  short first_number, second_number;
  short sum = 0;

  std::cout << "Podaj pierwszą liczbę: ";
  std::cin >> first_number;

  std::cout << "Podaj drugą liczbę: ";
  std::cin >> second_number;

  sum = first_number + second_number;
  std::cout << "Suma: " << sum << std::endl;

  if (sum > 0) {
    if (sum % 0 != 0)
      std::cout << "Suma jest liczbą nieparzystą." << std::endl;
    else
      std::cout << "Suma jest liczbą parzystą." << std::endl;
  } else {
    std::cout << "Suma jest równa 0." << std::endl;
  }
}
