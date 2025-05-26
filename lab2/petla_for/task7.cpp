#include <iostream>

int main() {
  short height, width;

  std::cout << "Podaj szerokosc: ";
  std::cin >> width;

  std::cout << "Podaj wysokosc: ";
  std::cin >> height;

  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      if (i == 0 || i == height - 1) {
        std::cout << "-";
      } else if (j == 0 || j == width - 1) {
        std::cout << "|";
      } else {
        if ((i + j) % 2 == 0) {
          std::cout << "#";
        } else {
          std::cout << "*";
        }
      }
    }
    std::cout << std::endl;
  }

  return 0;
}
