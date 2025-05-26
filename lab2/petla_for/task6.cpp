#include <iostream>

int main() {
  short height, width;
  char frame = '*';

  std::cout << "Podaj szerokosc: ";
  std::cin >> width;

  std::cout << "Podaj wysokosc: ";
  std::cin >> height;

  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
        std::cout << frame;
      } else {
        std::cout << " ";
      }
    }
    std::cout << std::endl;
  }

  return 0;
}
