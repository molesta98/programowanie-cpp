#include <iostream>

int GetNumberFromUser() {
  int n;
  std::cout << "Podaj liczbe calkowita: ";
  std::cin >> n;
  return n;
}

int CalculateFactorial(int n) {
  if (n < 0) {
    return 0;
  }
  int result = 1;
  for (int i = 1; i <= n; ++i) {
    result *= i;
  }
  return result;
}

void DisplayResult(int n, unsigned int factorial) {
  if (n < 0) {
    std::cout << "Silnia nie jest zdefiniowana dla liczb ujemnych."
              << std::endl;
  } else {
    std::cout << "Silnia liczby " << n << " wynosi: " << factorial << std::endl;
  }
}

int main() {
  int number = GetNumberFromUser();
  int fact = CalculateFactorial(number);
  DisplayResult(number, fact);
  return 0;
}
