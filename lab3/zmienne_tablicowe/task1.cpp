#include <iostream>

int main() {
  int count = 5;
  int numbers[5], sum = 0;
  float avg = 0;

  for (int i = 0; i < count; i++) {
    std::cout << "Podaj liczbe calkowita nr " << i + 1 << ": ";
    std::cin >> numbers[i];
    sum += numbers[i];
  }

  avg = sum / count;
  std::cout << "Srednia liczb: " << avg << std::endl;

  return 0;
}
