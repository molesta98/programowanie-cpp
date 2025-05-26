#include <iostream>

int main() {
  short N;
  const short BEGIN_VALUE = 1;

  std::cout << "Podaj liczbe N: ";
  std::cin >> N;

  std::cout << "Liczby nieparzyste od " << BEGIN_VALUE << " do " << N << ": "
            << std::endl;
  for (short i = 1; i <= N; i++) {
    if (i % 2 != 0) std::cout << i << std::endl;
  }

  return 0;
}
