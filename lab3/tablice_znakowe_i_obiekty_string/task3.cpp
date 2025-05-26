#include <cstring>
#include <iostream>

int main() {
  std::string exampleString;
  char charToCount;
  int counter = 0, stringLength = 0;

  std::cout << "Podaj ciag znakow: ";
  std::getline(std::cin, exampleString);

  std::cout << "Podaj znak do zliczenia: ";
  std::cin >> charToCount;

  std::cout << "Liczba wystapien: '" << charToCount << "': ";

  stringLength = exampleString.length();
  for (int i = 0; i < stringLength; i++) {
    if (exampleString[i] == charToCount) {
      counter++;
    }
  }

  std::cout << counter << std::endl;
  std::cout << "Pozycje wystapien: ";
  for (int i = 1; i < stringLength; i++) {
    if (exampleString[i] == charToCount) {
      std::cout << i;
      if (i != stringLength - 1) {
        std::cout << ", ";
      }
    }
  }
  std::cout << std::endl;
}
