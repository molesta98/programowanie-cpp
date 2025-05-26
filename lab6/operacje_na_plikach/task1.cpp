#include <fstream>
#include <iostream>

int main() {
  std::string imie, nazwisko;
  short wiek;

  std::ifstream plik("dane.txt");
  if (!plik.is_open()) {
    std::cout << "Nie można otworzyć pliku!" << std::endl;
    return 1;
  }
  std::string linia;

  while (plik >> imie >> nazwisko >> wiek) {
    std::cout << "Imię: " << imie << ", Nazwisko: " << nazwisko
              << ", Wiek: " << wiek << std::endl;
  }
  plik.close();

  return 0;
}
