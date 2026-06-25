#include "converter.h"

// binary → decimal
int binTodec(std::string bin) {
  int result = 0;

  for (int i = 0; i < bin.length(); i++) {
    result = result << 1;
    if (bin[i] == '1') {
      result += 1;
    }
  }

  return result;
}

// decimal → binary (8-bit formatted)
std::string decTobin(int n) {
  std::string result = "";

  while (n > 0) {
    result = (n % 2 == 0 ? "0" : "1") + result;
    n /= 2;
  }

  if (result == "") result = "0";

  while (result.length() < 8) {
    result = "0" + result;
  }

  std::string formatted = "";
  for (int i = 0; i < 8; i++) {
    if (i == 4) formatted += " ";
    formatted += result[i];
  }

  return formatted;
}

// string → int
int strToint(std::string str) {
  int result = 0;

  for (char c : str) {
    result = result * 10 + (c - '0');
  }

  return result;
}

// int → string
std::string intTostr(int n) {
  if (n == 0) return "0";

  std::string result = "";
  while (n > 0) {
    result = char((n % 10) + '0') + result;
    n /= 10;
  }

  return result;
}
