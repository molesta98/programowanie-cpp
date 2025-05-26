#include <iostream>

int main() {
  int N;

  std::cout << "Podaj liczbe N: ";
  std::cin >> N;

  for (short i = 1; i <= N; i++) {
    for (short j = 1; j <= N; j++) {
      std::cout << i << " * " << j << " = " << i * j << "\n";
    }
    std::cout << std::endl;
  }

  return 0;
}
