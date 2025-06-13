#include <iostream>

struct Osoba {
  std::string imie;
  std::string nazwisko;
  short wiek;
};

void WyswietlDane(const Osoba osoba) {
  std::cout << "Imię: " << osoba.imie << ", Nazwisko: " << osoba.nazwisko
            << ", Wiek: " << osoba.wiek << std::endl;
}

int main() {
  Osoba osoba;
  osoba.imie = "Jan";
  osoba.nazwisko = "Kowalski";
  osoba.wiek = 25;

  std::cout << "Dane przed modyfikacją:" << std::endl;
  WyswietlDane(osoba);

  osoba.imie = "Jan";
  osoba.nazwisko = "Kowalski";
  osoba.wiek = 27;
  std::cout << "\nDane po modyfikacji:" << std::endl;
  WyswietlDane(osoba);
}
