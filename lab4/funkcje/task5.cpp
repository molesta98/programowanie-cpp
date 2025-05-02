#include <cstdlib>
#include <ctime>
#include <iostream>

void DuzaMala(int liczba, int wylosowanaLiczba) {
  if (liczba < wylosowanaLiczba) {
    std::cout << "Za mało" << std::endl;
  } else if (liczba > wylosowanaLiczba) {
    std::cout << "Za dużo" << std::endl;
  }
}

bool CheckLiczba(int liczba, int wylosowanaLiczba) {
  return liczba == wylosowanaLiczba;
}

int main() {
  std::srand(std::time(NULL));
  int wylosowanaLiczba = std::rand() % 100 + 1;
  int liczba;

  do {
    std::cout << "Podaj liczbe: ";
    std::cin >> liczba;

    if (CheckLiczba(liczba, wylosowanaLiczba)) {
      std::cout << "Gratulacje! Odgadles liczbe." << std::endl;
      break;
    }

    DuzaMala(liczba, wylosowanaLiczba);
  } while (true);

  return 0;
}
