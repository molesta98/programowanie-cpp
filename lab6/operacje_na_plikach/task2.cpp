#include <cstdio>
#include <fstream>
#include <iostream>

void printMenu() {
  std::cout << "Wybierz operację:\n"
            << "1 - Utwórz nowy plik\n"
            << "2 - Usuń plik\n"
            << "3 - Zmień nazwę pliku\n"
            << "Twój wybór: ";
}

bool fileExists(const std::string& fileName) {
  std::ifstream file(fileName);
  return file.good();
}

int createFile(std::string fileName) {
  std::ofstream plik(fileName);
  if (!plik.is_open()) {
    return 1;
  }

  plik.close();
  return 0;
}

int removeFile(std::string fileName) {
  if (fileExists(fileName))
    std::remove(fileName.c_str());
  else
    return 1;

  return 0;
}

int renameFile(std::string fileName, std::string newFileName) {
  if (fileExists(fileName))
    std::rename(fileName.c_str(), newFileName.c_str());
  else
    return 1;

  return 0;
}

int main() {
  std::string fileName;
  char decision;

  printMenu();
  std::cin >> decision;

  switch (decision) {
    case '1':
      std::cout << "Podaj nazwę nowego pliku: ";
      std::cin >> fileName;
      if (createFile(fileName) == 0)
        std::cout << "Plik '" << fileName << "' został utworzony." << std::endl;
      else
        std::cout << "Tworzenie pliku nie powiodło się!" << std::endl;
      break;
    case '2':
      std::cout << "Podaj nazwę pliku do usunięcia: ";
      std::cin >> fileName;
      if (removeFile(fileName) == 0)
        std::cout << "Plik '" << fileName << "' został pomyślnie usunięty."
                  << std::endl;
      else
        std::cout << "Nie udało się usunąć pliku '" << fileName << "'."
                  << std::endl;
      break;
    case '3':
      std::string newFileName;
      std::cout << "Podaj nazwę pliku do zmiany: ";
      std::cin >> fileName;
      std::cout << "Podaj nową nazwę pliku: ";
      std::cin >> newFileName;
      if (renameFile(fileName, newFileName) == 0)
        std::cout << "Plik został pomyślnie zmieniony na " << newFileName
                  << std::endl;
      else
        std::cout << "Nie udało się zmienić nazwy pliku '" << fileName << "'."
                  << std::endl;
      break;
  }
}
