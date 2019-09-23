#include "moka.h"
#include "../MarsCore.h"
#include "../MarsMath.h"
#include "../MarsExtra.h"
#include "../MarsString.h"

Moka::Context test("Marslib testing!", [](Moka::Context& it) {

  it.has("Extra functions testing", [](Moka::Context& it) {

    it.should("helloWorld function", []() {
        must_not_equal(extra::helloWorld(), "");
        must_equal(extra::helloWorld(),"Hello World");
      });

    it.should("Prueba", [](){
      must_equal(extra::helloWorld(), "asdf");
    });

  });

});

int main() {
  return test.run();
}
