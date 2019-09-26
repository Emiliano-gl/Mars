#ifndef MARS_HPP
#define MARS_HPP

#include <iostream>
#include <vector>

using namespace std;


namespace mmath {
  auto countDigits(const short &number) -> int;
  auto countDigits(const int &number) -> int;
  auto countDigits(const long &number) -> int;
  auto maxNumber3(const short &number1, const short &number2, const short &number3) -> short;
  auto maxNumber3(const int &number1, const int &number2, const int &number3) -> int;
  auto maxNumber3(const long &number1, const long &number2, const long &number3) -> long;
}

namespace mtime {
  auto getDay() -> int;
  auto getMonth() -> int;
  auto getYear() -> int;
  auto getAge(const int &day, const int &month, const int &year) -> int;
  auto secondsToTime(const int &seconds) -> vector<int>;
  auto isLeapYear(const int &year) -> bool;
}

namespace mstr {
  auto splitString(const string &text, const char &separator) -> vector<string>;
  auto countWords(const string &text, const char &separator) -> auto;
  auto isUpperCase(const char &letter) -> bool;
  auto isLowerCase(const char &letter) -> bool;
  auto isLetter(const char &letter) -> bool;
  auto toLowerCase(const char &letter) -> char;
  auto toLowerCase(const string &text) -> string;
  auto toUpperCase(const char &letter) -> char;
  auto toUpperCase(const string &text) -> string;
}

namespace mextra {
  auto helloWorld() -> string;
}

#endif // MARS_HPP
