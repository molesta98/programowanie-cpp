#include <iostream>

void FindMinMax(float *array, int size, float *min, float *max) {
  *min = *max = array[0];
  for (int i = 1; i < size; i++) {
    if (array[i] < *min) *min = array[i];
    if (array[i] > *max) *max = array[i];
  }
}

int main() {
  const int SIZE = 10;
  float exampleArray[SIZE] = {1.5, -3.2, 4.8,  7.0, -1.1,
                              0.0, 3.3,  -6.6, 8.9, 2.2};
  float min, max;
  FindMinMax(exampleArray, 10, &min, &max);
  std::cout << "Tablica: ";
  for (int i = 0; i < SIZE; i++) {
    std::cout << exampleArray[i] << " ";
  }
  std::cout << "\nNajwieksza liczba: " << max << std::endl;
  std::cout << "Najmniejsza liczba: " << min << std::endl;
  return 0;
}
