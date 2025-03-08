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
  short userValueN, result = 0, i;
  const short BEGIN_VALUE = 1;

  std::cout << "Podaj liczbe N: ";
  std::cin >> userValueN;

  if (userValueN < 0) {
    std::cout << "Podana liczba jest mniejsza od 0" << std::endl;
    return 1;
  }

  std::cout << "Kwadraty liczb od " << BEGIN_VALUE << " do " << userValueN
            << ": " << std::endl;
  for (i = 1; i <= userValueN; i++) {
    result = i * i;
    std::cout << i << "^2 = " << result << std::endl;
  }

  return 0;
}
