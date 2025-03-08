#include <iostream>

/*
 * Napisz program, który wyświetli wszystkie liczby nieparzyste od 1 do N,
 * gdzie N zostanie podane przez użytkownika. Użyj pętli for, aby wykonać to
 * zadanie.
 * - Poproś użytkownika o podanie liczby całkowitej N.
 * - Użyj pętli for, aby sprawdzić i wyświetlić wszystkie liczby nieparzyste od
 * 1 do N na ekranie.
 * - Po wyświetleniu wszystkich liczb nieparzystych zakończ działanie programu.
 *
 * Wskazówka:
 * Aby rozwiązać to zadanie, możesz użyć pętli for, która będzie iterować od 1
 * do N. W każdej iteracji sprawdzisz, czy liczba jest nieparzysta. Jeśli jest
 * nieparzysta, wypiszesz ją na ekranie.
 */
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
