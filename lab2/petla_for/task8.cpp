#include <iostream>

int main() {
  short width, height;

  std::cout << "Podaj szerokosc: ";
  std::cin >> width;

  std::cout << "Podaj wysokosc: ";
  std::cin >> height;

  for (int i = 0; i < height; i++) {
    int margin = i;
    for (int j = 0; j < margin; j++) {
      std::cout << " ";
    }
    for (int j = 0; j < width - 2 * margin; j++) {
      std::cout << "*";
    }
    for (int j = 0; j < margin; j++) {
      std::cout << " ";
    }

    std::cout << std::endl;
  }

  return 0;
}
