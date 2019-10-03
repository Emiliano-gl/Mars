#include "moka.h"
#include "../MarsCore.h"
#include "../MarsMath.h"
#include "../MarsExtra.h"
#include "../MarsString.h"
#include "../MarsTime.h"

#include <vector>

vector<string> testVector = {"Emiliano", "Edgar", "Luis"};
vector<string> testVector2 = {"Dog", "Cat", "Fish", "Mouse"};

vector<int> timeTestMinute = {0,1,0};
vector<int> timeTestHour = {1,0,0};
vector<int> timeTestSecond = {0,0,1};
vector<int> timeTest = {3,2,1};

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

    it.should("maxNumber3 function", []() {
        must_equal(mmath::maxNumber3(3,6,9),9);
        must_equal(mmath::maxNumber3(323,23664,67886),67886);
        must_equal(mmath::maxNumber3(9999999,888888,666666),9999999);
      });

  });

  it.has("Time functions testing", [](Moka::Context& it) {

    it.should("secondsToTime function", []() {
        must_equal(mtime::secondsToTime(60),timeTestMinute);
        must_equal(mtime::secondsToTime(3600),timeTestHour);
        must_equal(mtime::secondsToTime(1),timeTestSecond);
        must_equal(mtime::secondsToTime(10921),timeTest);
      });

    it.should("isLeapYear function", []() {
        must_equal(mtime::isLeapYear(2020),true);
        must_equal(mtime::isLeapYear(2016),true);
        must_equal(mtime::isLeapYear(2019),false);
        must_equal(mtime::isLeapYear(2031),false);
      });

  });

  it.has("String functions testing", [](Moka::Context& it) {

    it.should("split function", []() {
        must_equal(mstr::splitString("Emiliano Edgar      Luis", ' ') , testVector);
        must_equal(mstr::splitString("Dog Cat      Fish    Mouse", ' ') , testVector2);
      });

    it.should("countWords function", []() {
        must_equal(mstr::countWords("Emiliano Edgar      Luis" , ' ') , 3);
        must_equal(mstr::countWords("Dog Cat      Fish    Mouse", ' ') , 4);
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

    it.should("capitalizeWord function", []() {
        must_equal(mstr::capitalizeWord("AlerGia") , "Alergia");
        must_equal(mstr::capitalizeWord("CoMIdA") , "Comida");
        must_equal(mstr::capitalizeWord("hola") , "Hola");
        must_equal(mstr::capitalizeWord("PeDrO") , "Pedro");
      });

    it.should("joinString function", []() {
        must_equal(mstr::joinString(testVector, ' ') , "Emiliano Edgar Luis");
        must_equal(mstr::joinString(testVector2, ' ') , "Dog Cat Fish Mouse");
      });

    it.should("toCapitalize function", []() {
        must_equal(mstr::toCapitalize("hEmORRaGia iNtERnA", ' ') , "Hemorragia Interna");
        must_equal(mstr::toCapitalize("cOMiDa dE PerRO", ' ') , "Comida De Perro");
        must_equal(mstr::toCapitalize("EsE oSo NeGrO 2", ' ') , "Ese Oso Negro 2");
        must_equal(mstr::toCapitalize("ArRiBa y ABaJo", ' ') , "Arriba Y Abajo");
      });

    it.should("isPalindrome function", []() {
        must_equal(mstr::isPalindrome("radar") , true);
        must_equal(mstr::isPalindrome("ana") , true);
        must_equal(mstr::isPalindrome("oso") , true);
        must_equal(mstr::isPalindrome("reconocer") , true);
        must_equal(mstr::isPalindrome("sometemos") , true);
        must_equal(mstr::isPalindrome("perro") , false);
        must_equal(mstr::isPalindrome("oreja") , false);
        must_equal(mstr::isPalindrome("pegamento") , false);
        must_equal(mstr::isPalindrome("jefa") , false);
      });

  });

});

int main() {
  return test.run();
}
