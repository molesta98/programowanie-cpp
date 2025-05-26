#include <iostream>

struct Osoba {
  std::string imie;
  std::string nazwisko;
  short wiek;
};

int main() {
  const int SIZE = 3;
  Osoba Osoba[SIZE] = {{"Daniel", "Molenda", 27},
                       {"Jan", "Nowak", 30},
                       {"Piotr", "Wiśniewski", 40}};

  std::cout << "Dane zapisane w tablicy struktur:" << std::endl;
  for (int i = 0; i < SIZE; i++) {
    std::cout << "Imię: " << Osoba[i].imie
              << ", Nazwisko: " << Osoba[i].nazwisko << ", Wiek; "
              << Osoba[i].wiek << std::endl;
  }
  return 0;
}
