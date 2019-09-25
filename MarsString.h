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
}

#endif // MARSSTRING_H
