#ifndef MARSSTRING_H
#define MARSSTRING_H

#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

namespace mstr {

  auto splitString(const string &text, const char &separator) -> vector<string>{
    vector<string> tokens;
    string prepro = text + separator;
    string token = "";

    for(auto itk : prepro){
        if(itk != separator)
          token += itk;

        else {
            if(token != "") {
                tokens.push_back(token);
                token = "";
              }
          }
      }

    return tokens;
  }

  auto countWords(const string &text, const char &separator) -> auto{
    vector<string> words = splitString(text,separator);
    return words.size();
  }

  auto isUpperCase(const char &letter) -> bool{
    if(letter >= 'A' && letter <= 'Z')
      return true;
    else
      return false;
  }

  auto isLowerCase(const char &letter) -> bool{
    if(letter >= 'a' && letter <= 'z' )
      return true;
    else
      return false;
  }

  auto isLetter(const char &letter) -> bool{
    if(isUpperCase(letter) || isLowerCase(letter))
      return true;
    else
      return false;
  }

  auto toLowerCase(const char &letter) -> char{
    if(isUpperCase(letter))
      return letter + 32;
    else
      return letter;
  }

  auto toLowerCase(const string &text) -> string{
    string lowerText = "";

    for(char token : text){
        if(isLetter(token)){
            if(isUpperCase(token))
              lowerText += toLowerCase(token);
            else
              lowerText += token;
          }
        else
          lowerText += token;
      }

    return lowerText;
  }

  auto toUpperCase(const char &letter) -> char{
    if(isLowerCase(letter))
      return letter - 32;
    else
      return letter;
  }

  auto toUpperCase(const string &text) -> string{
    string upperText = "";

    for(char token : text){
        if(isLetter(token)){
            if(isLowerCase(token))
              upperText += toUpperCase(token);
            else
              upperText += token;
          }
        else
          upperText += token;
      }

    return upperText;
  }
}

#endif // MARSSTRING_H
