#include <ctime>
#include <iostream>

void LosujTablice(int *array, int size, int minRange, int maxRange) {
  unsigned int seed = time(0);
  for (int i = 0; i < size; i++) {
    array[i] = minRange + rand_r(&seed) % (maxRange - minRange + 1);
  }
}

bool SprawdzLiczbe(int *userNumber, int *array, int arraySize) {
  for (int i = 0; i < arraySize; i++) {
    if (array[i] == *userNumber) {
      return true;
    }
  }
  return false;
}

int main() {
  int arraySize;
  int minRange, maxRange;

  std::cout << "Ile liczb chcesz wylosowac? ";
  std::cin >> arraySize;

  std::cout << "Podaj poczatek przedzialu: ";
  std::cin >> minRange;

  std::cout << "Podaj koniec przedzialu: ";
  std::cin >> maxRange;

  if (minRange > maxRange) {
    std::cout << "Nieprawidlowy przedzial (poczatek > koniec)" << std::endl;
    return 1;
  }

  int *array = new int[arraySize];
  LosujTablice(array, arraySize, minRange, maxRange);

  std::cout << "Tablica: ";
  for (int i = 0; i < arraySize; ++i) {
    std::cout << array[i];
    if (i < arraySize - 1) {
      std::cout << ", ";
    }
  }
  std::cout << std::endl;

  int userNumber;
  int tries = 0;

  while (true) {
    std::cout << "Podaj liczbe: ";
    std::cin >> userNumber;
    tries++;

    if (SprawdzLiczbe(&userNumber, array, arraySize)) {
      std::cout << "Zgadles za " << tries << " razem." << std::endl;
      break;
    } else {
      std::cout << "Nie zgadles" << std::endl;
    }
  }

  delete[] array;
  return 0;
}
