#include <iostream>

int main() {
  short N, sum = 0;
  const short BEGIN_VALUE = 1;

  std::cout << "Poda liczbe N: ";
  std::cin >> N;

  if (N < BEGIN_VALUE) {
    std::cout << "Podana liczba jest mniejsza od " << BEGIN_VALUE << std::endl;
    return 1;
  }

  for (int i = 0; i <= N; i++) {
    sum += i;
  }

  std::cout << "Suma liczb od " << BEGIN_VALUE << " do " << N
            << " wynosi: " << sum << std::endl;

  return 0;
}
