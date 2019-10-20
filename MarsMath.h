#ifndef MARSMATH_H
#define MARSMATH_H

#include<iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

namespace mmath {

  auto countDigits(const int &number) -> int{
    string num = to_string(number);
    return num.length();
  }

  auto countDigits(const long &number) -> int{
    string num = to_string(number);
    return num.length();
  }

  auto addDigits(const int &number) -> int{
    int extNum, sumDigit = 0, numberAux = number;

    while(numberAux != 0) {
        extNum = numberAux % 10;
        numberAux /= 10;
        sumDigit += extNum;
      }

    return sumDigit;
  }

  auto addDigits(const long &number) -> int{
    long extNum, numberAux = number;
    int sumDigit = 0;

    while(numberAux != 0) {
        extNum = numberAux % 10;
        numberAux /= 10;
        sumDigit += extNum;
      }

    return sumDigit;
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

  auto randomNumber(const int &min, const int &max) -> int{
    srand(time(NULL));

    return rand() % max + min;
  }
}

#endif // MARSMATH_H
