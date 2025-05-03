#include <iostream>

int GetNumberFromUser() {
  int number;
  std::cout << "Podaj liczbe: ";
  std::cin >> number;

  return number;
}

int CalculateFibonacciRecursive(int number) {
  if (number <= 1) return number;
  if (number == 2) return 1;

  return CalculateFibonacciRecursive(number - 1) +
         CalculateFibonacciRecursive(number - 2);
}

void DisplayFibonacciSequence(int number) {
  std::cout << "Ciąg Fibonacciego: ";
  for (int i = 1; i <= number; i++) {
    std::cout << CalculateFibonacciRecursive(i);
    if (i < number) {
      std::cout << ", ";
    }
  }
  std::cout << std::endl;
}

int main() {
  int number = GetNumberFromUser();
  if (number < 1) {
    std::cout << "Podaj liczbe wieksza od 0." << std::endl;
    return 1;
  }
  DisplayFibonacciSequence(number);
  return 0;
}
