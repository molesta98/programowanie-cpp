#include <fstream>
#include <iostream>
#include <string>

struct Osoba {
  std::string imie;
  std::string nazwisko;
  short wiek;
};

bool FileExists(const std::string& fileName) {
  std::ifstream file(fileName);
  return file.good();
}

void SaveSampleData(const std::string& fileName) {
  std::ofstream file(fileName);
  if (file.is_open()) {
    file << "Jan Kowalski 25\n";
    file << "Anna Nowak 30\n";
    file.close();
    std::cout
        << "Plik " << fileName
        << " nie istnieje. Tworzenie pliku i zapis przykładowych danych..."
        << std::endl;
  } else {
    std::cout << "Nie można utworzyć pliku " << fileName << std::endl;
  }
}

void AppendPerson(const std::string& fileName, const Osoba& person) {
  std::ofstream file(fileName, std::ios::app);
  if (file.is_open()) {
    file << person.imie << " " << person.nazwisko << " " << person.wiek << "\n";
    file.close();
  } else {
    std::cout << "Nie można dopisać do pliku " << fileName << std::endl;
  }
}

void DisplayFileContents(const std::string& fileName) {
  std::ifstream file(fileName);
  std::string imie, surname;
  short age;

  std::cout << "\nDane w pliku po dopisaniu:" << std::endl;

  while (file >> imie >> surname >> age) {
    std::cout << "Imię: " << imie << ", Nazwisko: " << surname
              << ", Wiek: " << age << std::endl;
  }

  file.close();
}

int main() {
  const std::string fileName = "dane.txt";

  if (!FileExists(fileName)) {
    SaveSampleData(fileName);
  }

  char decision;
  std::cout << "Czy chcesz dodać nową osobę? (t/n): ";
  std::cin >> decision;

  if (decision == 't' || decision == 'T') {
    Osoba newPerson;
    std::cout << "Podaj imię: ";
    std::cin >> newPerson.imie;
    std::cout << "Podaj nazwisko: ";
    std::cin >> newPerson.nazwisko;
    std::cout << "Podaj wiek: ";
    std::cin >> newPerson.wiek;
    if (newPerson.wiek <= 0) {
      std::cout << "Niepoprawny wiek. Spróbuj ponownie.\n";
      return 1;
    }

    AppendPerson(fileName, newPerson);
  }

  DisplayFileContents(fileName);

  return 0;
}
