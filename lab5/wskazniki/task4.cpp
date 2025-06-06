#include <ctime>
#include <iostream>

void LosujTablice(int* array, int size, unsigned int* seed) {
  for (int i = 0; i < size; ++i) {
    array[i] = rand_r(seed) % 51;
  }
}

bool SprawdzLiczbe(int userNumber, int* array, int arraySize) {
  for (int i = 0; i < arraySize; ++i) {
    if (array[i] == userNumber) {
      return true;
    }
  }
  return false;
}

int main() {
  unsigned int seed = time(0);
  const int ARRAY_SIZE = 10;
  int array[ARRAY_SIZE];

  LosujTablice(array, ARRAY_SIZE, &seed);

  std::cout << "Tablica: ";
  for (int i = 0; i < ARRAY_SIZE; ++i) {
    std::cout << array[i] << (i == ARRAY_SIZE - 1 ? "" : ", ");
  }
  std::cout << std::endl;

  int userNumber;
  int tries = 0;

  while (true) {
    std::cout << "Podaj liczbe: ";
    std::cin >> userNumber;
    tries++;

    if (SprawdzLiczbe(userNumber, array, ARRAY_SIZE)) {
      std::cout << "Zgadles za " << tries << " razem." << std::endl;
      break;
    } else {
      std::cout << "Nie zgadles" << std::endl;
    }
  }

  return 0;
}
