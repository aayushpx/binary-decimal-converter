#include <iostream>
#include <string>
#include "converter.h"

int main() {

  std::string input;
  std::cout << "Enter a number: ";
  std::cin >> input;

  int len = input.length();

  // validate characters
  for (int i = 0; i < len; i++) {
    if (input[i] < '0' || input[i] > '9') {
      std::cout << "This is not a valid number." << std::endl;
      return 0;
    }
  }

  // binary case
  if (input[0] == '0') {

    if (len > 9) {
      std::cout << "This binary number has more than 9 binary digits." << std::endl;
      return 0;
    }

    for (int i = 0; i < len; i++) {
      if (input[i] != '0' && input[i] != '1') {
        std::cout << "This is not a valid binary number." << std::endl;
        return 0;
      }
    }

    int result = binTodec(input);

    std::cout << "Converting binary to decimal. The result is "
      << intTostr(result) << std::endl;

    return 0;
  }

  // decimal case
  int value = strToint(input);

  if (value < 0 || value > 255) {
    std::cout << "This decimal number is outside the range 0 to 255." << std::endl;
    return 0;
  }

  std::cout << "Converting decimal to binary. The result is "
    << decTobin(value) << std::endl;

  return 0;
}
