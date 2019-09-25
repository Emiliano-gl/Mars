#include "moka.h"
#include "../MarsCore.h"
#include "../MarsMath.h"
#include "../MarsExtra.h"
#include "../MarsString.h"

#include <vector>

vector<string> testVector = {"Emiliano", "Edgar", "Luis"};

Moka::Context test("Mars testing!", [](Moka::Context& it) {

  it.has("Extra functions testing", [](Moka::Context& it) {

    it.should("helloWorld function", []() {
        must_equal(mextra::helloWorld(),"Hello World");
      });

  });

  it.has("Math functions testing", [](Moka::Context& it) {

    it.should("countDigits function", []() {
        must_equal(mmath::countDigits(3),1);
        must_equal(mmath::countDigits(323),3);
        must_equal(mmath::countDigits(34567755),8);
      });

  });

  it.has("String functions testing", [](Moka::Context& it) {

    it.should("split function", []() {
        must_equal(mstr::splitString("Emiliano Edgar      Luis",' ') , testVector);
      });

    it.should("countWords function", []() {
        must_equal(mstr::countWords("Emiliano Edgar      Luis",' ') , 3);
      });

    it.should("isLetter function", []() {
        must_equal(mstr::isLetter('E') , true);
        must_equal(mstr::isLetter('a') , true);
        must_equal(mstr::isLetter(';') , false);
        must_equal(mstr::isLetter('[') , false);
        must_equal(mstr::isLetter(' ') , false);
      });

    it.should("isUpperCase function", []() {
        must_equal(mstr::isUpperCase('E') , true);
        must_equal(mstr::isUpperCase('a') , false);
        must_equal(mstr::isUpperCase(';') , false);
        must_equal(mstr::isLetter('[') , false);
        must_equal(mstr::isLetter(' ') , false);
      });

    it.should("isLowerCase function", []() {
        must_equal(mstr::isLowerCase('E') , false);
        must_equal(mstr::isLowerCase('a') , true);
        must_equal(mstr::isLowerCase(';') , false);
        must_equal(mstr::isLetter('[') , false);
        must_equal(mstr::isLetter(' ') , false);
      });

    it.should("toLowerCase Char version function", []() {
        must_equal(mstr::toLowerCase('A') , 'a');
        must_equal(mstr::toLowerCase('E') , 'e');
        must_equal(mstr::toLowerCase('I') , 'i');
        must_equal(mstr::toLowerCase('O') , 'o');
        must_equal(mstr::toLowerCase('U') , 'u');
        must_equal(mstr::toLowerCase('a') , 'a');
        must_equal(mstr::toLowerCase('e') , 'e');
        must_equal(mstr::toLowerCase('i') , 'i');
        must_equal(mstr::toLowerCase('o') , 'o');
        must_equal(mstr::toLowerCase('u') , 'u');
        must_equal(mstr::toLowerCase(';') , ';');
        must_equal(mstr::toLowerCase('[') , '[');
        must_equal(mstr::toLowerCase(' ') , ' ');
        must_equal(mstr::toLowerCase('2') , '2');
        must_equal(mstr::toLowerCase('1') , '1');
      });

    it.should("toLowerCase String version function", []() {
        must_equal(mstr::toLowerCase("AleRGia") , "alergia");
        must_equal(mstr::toLowerCase("EsME  rALdA") , "esme  ralda");
        must_equal(mstr::toLowerCase("IgNaCiO") , "ignacio");
        must_equal(mstr::toLowerCase("OCtUBre") , "octubre");
        must_equal(mstr::toLowerCase("UrA NiO") , "ura nio");
        must_equal(mstr::toLowerCase("adi os") , "adi os");
        must_equal(mstr::toLowerCase("estornudo") , "estornudo");
        must_equal(mstr::toLowerCase("imaginacion") , "imaginacion");
        must_equal(mstr::toLowerCase("oscuridad") , "oscuridad");
        must_equal(mstr::toLowerCase("universo") , "universo");
        must_equal(mstr::toLowerCase("./././{}[]()") , "./././{}[]()");
        must_equal(mstr::toLowerCase("1234567890") , "1234567890");
      });

    it.should("toUpperCase Char version function", []() {
        must_equal(mstr::toUpperCase('A') , 'A');
        must_equal(mstr::toUpperCase('E') , 'E');
        must_equal(mstr::toUpperCase('I') , 'I');
        must_equal(mstr::toUpperCase('O') , 'O');
        must_equal(mstr::toUpperCase('U') , 'U');
        must_equal(mstr::toUpperCase('a') , 'A');
        must_equal(mstr::toUpperCase('e') , 'E');
        must_equal(mstr::toUpperCase('i') , 'I');
        must_equal(mstr::toUpperCase('o') , 'O');
        must_equal(mstr::toUpperCase('u') , 'U');
        must_equal(mstr::toUpperCase(';') , ';');
        must_equal(mstr::toUpperCase('[') , '[');
        must_equal(mstr::toUpperCase(' ') , ' ');
        must_equal(mstr::toUpperCase('2') , '2');
        must_equal(mstr::toUpperCase('1') , '1');
      });

    it.should("toUpperCase String version function", []() {
        must_equal(mstr::toUpperCase("AlerGia") , "ALERGIA");
        must_equal(mstr::toUpperCase("Esm ErA LdA") , "ESM ERA LDA");
        must_equal(mstr::toUpperCase("IgNaciO") , "IGNACIO");
        must_equal(mstr::toUpperCase("Oc tUb re") , "OC TUB RE");
        must_equal(mstr::toUpperCase("UrA  niO") , "URA  NIO");
        must_equal(mstr::toUpperCase("ADIOS") , "ADIOS");
        must_equal(mstr::toUpperCase("ESTORNUDO") , "ESTORNUDO");
        must_equal(mstr::toUpperCase("IMAGINACION") , "IMAGINACION");
        must_equal(mstr::toUpperCase("OSCURIDAD") , "OSCURIDAD");
        must_equal(mstr::toUpperCase("UNIVERSO") , "UNIVERSO");
        must_equal(mstr::toUpperCase("./././{}[]()") , "./././{}[]()");
        must_equal(mstr::toUpperCase("1234567890") , "1234567890");
      });

  });

});

int main() {
  return test.run();
}
