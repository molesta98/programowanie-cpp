#include <cstring>
#include <iostream>

int main() {
  const short MAX_LENGTH = 100;
  char inputString[MAX_LENGTH];
  char reversedString[MAX_LENGTH];

  std::cout << "Podaj ciag znakow: ";
  std::cin.getline(inputString, MAX_LENGTH);
  int stringLength = strlen(inputString);
  for (int i = 0; i < stringLength; i++) {
    reversedString[i] = inputString[stringLength - 1 - i];
  }
  std::cout << "Odwrocony ciag: " << reversedString << std::endl;

  return 0;
}
