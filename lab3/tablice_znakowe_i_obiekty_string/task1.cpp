#include <iostream>

int main() {
  const int SIZE = 21;
  char buffer[SIZE];
  std::cout << "Podaj ciag znakow (max 20 znakow): ";
  std::cin.getline(buffer, SIZE);
  std::cout << "Wprowadzony ciag znakow: " << buffer << std::endl;
}
