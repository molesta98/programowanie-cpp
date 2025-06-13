#include <iostream>

int main() {
  const int SIZE = 21;
  char array[SIZE];
  std::cout << "Podaj ciag znakow (max 20 znakow): ";
  std::cin.getline(array, SIZE);

  for (int i = 0; i < SIZE - 1; i++) {
    if (array[i] == 'a') array[i] = 'o';
  }
  std::cout << "Zmodyfikowany ciag znakow: " << array << std::endl;
}
