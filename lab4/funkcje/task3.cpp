#include <iostream>
#include <string>

std::string GetTextFromUser() {
  std::string text;
  std::cout << "Podaj ciag znakow: ";
  std::getline(std::cin, text);
  return text;
}

std::string ReverseString(std::string input) {
  int len = 0;

  while (input[len] != '\0') {
    ++len;
  }

  for (int i = 0; i < len / 2; i++) {
    char tmp = input[i];
    input[i] = input[len - 1 - i];
    input[len - 1 - i] = tmp;
  }
  return input;
}

void DisplayResult(std::string result) {
  std::cout << "Odwrocony ciag: " << result << std::endl;
}

int main() {
  std::string userText = GetTextFromUser();
  std::string reversedText = ReverseString(userText);
  DisplayResult(reversedText);
  return 0;
}
