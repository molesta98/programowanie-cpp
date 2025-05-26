#include <iostream>

int main() {
  short number;
  char decision;

  do {
    std::cout << "Podaj liczbe: ";
    std::cin >> number;
    std::cout << "Wprowadziles liczbe: " << number << std::endl;
    std::cout << "Czy chcesz wprowadzic kolejna liczbe? (t/n): ";
    std::cin >> decision;
  } while (decision == 't' || decision == 'T');

  std::cout << "Dziekuje za wprowadzenie liczb!" << std::endl;

  return 0;
}
