#include <iostream>

/*
 * Napisz program, który obliczy i wyświetli kwadraty kolejnych liczb od 1 do N,
 * gdzie N zostanie podane przez użytkownika. Użyj pętli for, aby wykonać to
 * zadanie.
 * - Poproś użytkownika o podanie liczby całkowitej N.
 * - Użyj pętli for, aby obliczyć i wyświetlić kwadrat każdej liczby od 1 do N.
 * - Po wyświetleniu kwadratów zakończ działanie programu.
 */
int main() {
  short N, result = 0;
  const short BEGIN_VALUE = 1;

  std::cout << "Podaj liczbe N: ";
  std::cin >> N;

  if (N < 0) {
    std::cout << "Podana liczba jest mniejsza od 0" << std::endl;
    return 1;
  }

  std::cout << "Kwadraty liczb od " << BEGIN_VALUE << " do " << N << ": "
            << std::endl;
  for (int i = 1; i <= N; i++) {
    result = i * i;
    std::cout << i << "^2 = " << result << std::endl;
  }

  return 0;
}
