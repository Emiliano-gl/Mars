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

  auto maxNumber3(const short &number1, const short &number2, const short &number3) -> short{
    if(number1 <= number2){
        if(number2 >= number3)
          return number2;
        else
          return number3;
      } else {
        if(number1 >= number3)
          return number1;
        else
          return number3;
      }
  }

  auto maxNumber3(const int &number1, const int &number2, const int &number3) -> int{
    if(number1 <= number2){
        if(number2 >= number3)
          return number2;
        else
          return number3;
      } else {
        if(number1 >= number3)
          return number1;
        else
          return number3;
      }
  }

  auto maxNumber3(const long &number1, const long &number2, const long &number3) -> long{
    if(number1 <= number2){
        if(number2 >= number3)
          return number2;
        else
          return number3;
      } else {
        if(number1 >= number3)
          return number1;
        else
          return number3;
      }
  }
}

#endif // MARSMATH_H
