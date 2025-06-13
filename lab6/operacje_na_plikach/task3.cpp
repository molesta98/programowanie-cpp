#include <fstream>
#include <iostream>
#include <string>

struct Osoba {
  std::string imie;
  std::string nazwisko;
  short wiek;
};

bool fileExists(const std::string& fileName) {
  std::ifstream file(fileName);
  return file.good();
}

void zapisPrzykladowychDanych(const std::string& fileName) {
  std::ofstream file(fileName);
  if (file.is_open()) {
    file << "Jan Kowalski 25\n";
    file << "Anna Nowak 30\n";
    file.close();
    std::cout
        << "Plik " << fileName
        << " nie istnieje. Tworzenie pliku i zapis przykładowych danych..."
        << std::endl;
  } else {
    std::cout << "Nie można utworzyć pliku " << fileName << std::endl;
  }
}

void dopiszOsobe(const std::string& fileName, const Osoba& osoba) {
  std::ofstream file(fileName, std::ios::app);
  if (file.is_open()) {
    file << osoba.imie << " " << osoba.nazwisko << " " << osoba.wiek << "\n";
    file.close();
  } else {
    std::cout << "Nie można dopisać do pliku " << fileName << std::endl;
  }
}

void wyswietlZawartoscPliku(const std::string& fileName) {
  std::ifstream file(fileName);
  std::string imie, nazwisko;
  short wiek;

  std::cout << "\nDane w pliku po dopisaniu:" << std::endl;

  while (file >> imie >> nazwisko >> wiek) {
    std::cout << "Imię: " << imie << ", Nazwisko: " << nazwisko
              << ", Wiek: " << wiek << std::endl;
  }

  file.close();
}

int main() {
  const std::string fileName = "dane.txt";

  if (!fileExists(fileName)) {
    zapisPrzykladowychDanych(fileName);
  }

  char decyzja;
  std::cout << "Czy chcesz dodać nową osobę? (t/n): ";
  std::cin >> decyzja;

  if (decyzja == 't' || decyzja == 'T') {
    Osoba nowaOsoba;
    std::cout << "Podaj imię: ";
    std::cin >> nowaOsoba.imie;
    std::cout << "Podaj nazwisko: ";
    std::cin >> nowaOsoba.nazwisko;
    std::cout << "Podaj wiek: ";
    std::cin >> nowaOsoba.wiek;
    if (nowaOsoba.wiek <= 0) {
      std::cout << "Niepoprawny wiek. Spróbuj ponownie.\n";
      return 1;
    }

    dopiszOsobe(fileName, nowaOsoba);
  }

  wyswietlZawartoscPliku(fileName);

  return 0;
}
