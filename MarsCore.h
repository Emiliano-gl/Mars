#ifndef MARS_HPP
#define MARS_HPP

#include <iostream>
#include <vector>

using namespace std;


namespace mmath {
  auto countDigits(const short &number) -> int;
  auto countDigits(const int &number) -> int;
  auto countDigits(const long &number) -> int;
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
