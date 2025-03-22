#include <iostream>

int main() {
  const int SIZE = 21;
  char buffer[SIZE];
  std::cout << "Podaj ciag znakow (max 20 znakow): ";
  std::cin.getline(buffer, SIZE);

  for (int i = 0; i < SIZE - 1; i++) {
    if (buffer[i] == 'a') buffer[i] = 'o';
  }
  std::cout << "Zmodyfikowany ciag znakow: " << buffer << std::endl;
}
