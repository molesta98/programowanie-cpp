#include <iostream>

int CalculateexponentRecursive(int number, int exponent) {
  int result = 0;

  if (exponent == 0)
    result = 1;
  else
    result = number * CalculateexponentRecursive(number, exponent - 1);

  return result;
}

void DisplayResult(int result) { std::cout << result << std::endl; }

int main() {
  int number, exponent;

  std::cout << "Podaj liczbe podstawowa: ";
  std::cin >> number;

  std::cout << "Podaj wykladnik: ";
  std::cin >> exponent;

  int result = CalculateexponentRecursive(number, exponent);
  std::cout << number << " do potegi " << exponent << " wynosi: ";
  DisplayResult(result);

  return 0;
}
