#include "moka.h"
#include "../MarsCore.h"
#include "../MarsMath.h"
#include "../MarsExtra.h"
#include "../MarsString.h"

#include <vector>

vector<string> testVector = {"Emiliano", "Guerrero", "Lagunes"};

Moka::Context test("Marslib testing!", [](Moka::Context& it) {

  it.has("Extra functions testing", [](Moka::Context& it) {

    it.should("helloWorld function", []() {
        must_equal(mextra::helloWorld(),"Hello World");
      });

  });

  it.has("String functions testing", [](Moka::Context& it) {

    it.should("split function", []() {
        must_equal(mstr::splitString("Emiliano Guerrero      Lagunes",' ') , testVector);
      });

    it.should("countWords function", []() {
        must_equal(mstr::countWords("Emiliano Guerrero      Lagunes",' ') , 3);
      });

  });

});

int main() {
  return test.run();
}
