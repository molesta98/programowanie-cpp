#include <iostream>

int ObliczSume(int *array, int size) {
  int sum = 0;
  for (int i = 0; i < size; ++i) {
    sum += array[i];
  }
  return sum;
}

int main() {
  const int SIZE = 5;
  int exampleArray[SIZE] = {1, 2, 3, 4, 5};

  int sum = ObliczSume(exampleArray, SIZE);
  std::cout << "Suma elementow tablicy: " << sum << std::endl;

  for (int i = 0; i < SIZE; i++) {
    std::cout << "Podaj nowa wartosc dla elementu " << i << ": ";
    std::cin >> *(exampleArray + i);
  }

  std::cout << "Nowa tablica: ";
  for (int i = 0; i < SIZE; i++) {
    std::cout << *(exampleArray + i) << " ";
  }
  std::cout << std::endl;

  sum = ObliczSume(exampleArray, SIZE);
  std::cout << "Nowa suma elementow tablicy: " << sum << std::endl;
}
