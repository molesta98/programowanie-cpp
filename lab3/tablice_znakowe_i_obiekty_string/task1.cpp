#include <iostream>

int main() {
  const int SIZE = 21;
  char array[SIZE];
  std::cout << "Podaj ciag znakow (max 20 znakow): ";
  std::cin.getline(array, SIZE);
  std::cout << "Wprowadzony ciag znakow: " << array << std::endl;
}
