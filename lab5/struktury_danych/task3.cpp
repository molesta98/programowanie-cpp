#include <iostream>

struct Samochod {
  std::string marka;
  std::string model;
  short rok_produkcji;
};

void WyswietlDane(const Samochod samochod) {
  std::cout << "Marka: " << samochod.marka << std::endl;
  std::cout << "Model: " << samochod.model << std::endl;
  std::cout << "Rok produkcji: " << samochod.rok_produkcji << std::endl;
}

int main() {
  Samochod samochod;
  samochod.marka = "Toyota";
  samochod.model = "Corolla";
  samochod.rok_produkcji = 2020;
  WyswietlDane(samochod);
}
