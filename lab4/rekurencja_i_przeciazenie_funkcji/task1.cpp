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

void DisplayResult(int number, int sum) {
  std::cout << "Suma liczb od 1 do " << number << " wynosi: " << sum
            << std::endl;
}

int main() {
  int number = GetNumberFromUser();
  int sum = CalculateSumRecursive(number);
  if (number <= 0) {
    std::cout << "Liczba musi byc wieksza od 0" << std::endl;
    return 1;
  }
  DisplayResult(number, sum);
  return 0;
}
