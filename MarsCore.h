#ifndef MARS_HPP
#define MARS_HPP

#include <iostream>
#include <vector>

using namespace std;


namespace mmath {

}

namespace mstr {
  auto splitString(const string &text, const char &separator) -> vector<string>;
  auto countWords(const string &text, const char &separator) -> auto;
}

namespace mextra {
  auto helloWorld() -> string;
}

#endif // MARS_HPP
