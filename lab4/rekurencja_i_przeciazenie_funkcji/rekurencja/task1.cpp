#include <iostream>

int GetNumberFromUser() {
  int number;
  std::cout << "Podaj liczbe: ";
  std::cin >> number;

  return number;
}

int CalculateSumRecursive(int number) {
  if (number <= 1) return number;

  return number + CalculateSumRecursive(number - 1);
}

void DisplayResult(int sum) { std::cout << sum << std::endl; }

int main() {
  int number = GetNumberFromUser();
  int sum = CalculateSumRecursive(number);
  if (number <= 0) {
    std::cout << "Liczba musi byc wieksza od 0" << std::endl;
    return 1;
  }
  std::cout << "Suma liczb od 1 do " << number << " wynosi: ";
  DisplayResult(sum);
  return 0;
}
