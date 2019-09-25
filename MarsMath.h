#ifndef MARSMATH_H
#define MARSMATH_H

#include<iostream>

using namespace std;

namespace mmath {
  auto countDigits(const short &number) -> int{
    string num = to_string(number);
    return num.length();
  }

  auto countDigits(const int &number) -> int{
    string num = to_string(number);
    return num.length();
  }

  auto countDigits(const long &number) -> int{
    string num = to_string(number);
    return num.length();
  }
}

#endif // MARSMATH_H
