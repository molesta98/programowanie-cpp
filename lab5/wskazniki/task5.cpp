#include <ctime>
#include <iostream>

// Funkcja losująca liczby z podanego przedziału
void LosujTablice(int* array, int size, int min, int max, unsigned int* seed) {
  for (int i = 0; i < size; ++i) {
    array[i] = min + rand_r(seed) % (max - min + 1);
  }
}

// Sprawdza, czy liczba użytkownika znajduje się w tablicy
bool SprawdzLiczbe(int liczba, int* array, int size) {
  for (int i = 0; i < size; ++i) {
    if (array[i] == liczba) {
      return true;
    }
  }
  return false;
}

int main() {
  unsigned int seed = time(0);

  int iloscLiczb;
  int minZakres, maxZakres;

  std::cout << "Ile liczb wylosowac? ";
  std::cin >> iloscLiczb;

  std::cout << "Wartosc poczatkowa: ";
  std::cin >> minZakres;

  std::cout << "Wartosc koncowa: ";
  std::cin >> maxZakres;

  if (minZakres > maxZakres) {
    std::cout << "Blad: wartosc poczatkowa nie moze byc wieksza od koncowej."
              << std::endl;
    return 1;
  }

  int* tablica = new int[iloscLiczb];
  LosujTablice(tablica, iloscLiczb, minZakres, maxZakres, &seed);

  std::cout << "Tablica: ";
  for (int i = 0; i < iloscLiczb; ++i) {
    std::cout << tablica[i];
    if (i < iloscLiczb - 1) std::cout << ", ";
  }
  std::cout << std::endl;

  int tries, triesCounter = 0;

  // Gra
  do {
    std::cout << "Podaj liczbe: ";
    std::cin >> tries;
    triesCounter++;

    if (SprawdzLiczbe(tries, tablica, iloscLiczb)) {
      std::cout << "Zgadles!" << std::endl;
      break;
    } else {
      std::cout << "Nie zgadles" << std::endl;
    }
  } while (true);

  std::cout << "Zgadles za " << triesCounter << " razem." << std::endl;

  delete[] tablica;  // zwolnienie pamięci
  return 0;
}
