#include <iostream>

void GetArrayFromUser(int arr[], int size) {
  for (int i = 0; i < size; ++i) {
    std::cout << "Podaj liczbe nr " << (i + 1) << ": ";
    std::cin >> arr[i];
  }
}

int FindMaxValue(int arr[], int size) {
  int maxVal = arr[0];
  for (int i = 1; i < size; i++) {
    if (arr[i] > maxVal) {
      maxVal = arr[i];
    }
  }
  return maxVal;
}

void DisplayResult(int maxVal) {
  std::cout << "Najwieksza liczba: " << maxVal << std::endl;
}

int main() {
  const int SIZE = 5;
  int numbers[SIZE];

  GetArrayFromUser(numbers, SIZE);

  int maxValue = FindMaxValue(numbers, SIZE);

  DisplayResult(maxValue);

  return 0;
}
