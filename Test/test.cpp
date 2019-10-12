#include "moka.h"
#include "../MarsCore.h"
#include "../MarsMath.h"
#include "../MarsExtra.h"
#include "../MarsString.h"
#include "../MarsTime.h"

#include <vector>

using namespace mmath;
using namespace mtime;
using namespace mextra;
using namespace mstr;


Moka::Context test("\nMars testing!", [](Moka::Context& it) {

  it.has("\nExtra functions testing", [](Moka::Context& it) {

    it.should("helloWorld function", []() {
        must_equal(helloWorld(),"Hello World");
      });

  });

  it.has("\nMath functions testing", [](Moka::Context& it) {

    it.should("countDigits function", []() {
        must_equal(countDigits(3),1);
        must_equal(countDigits(323),3);
        must_equal(countDigits(34567755),8);
      });

    it.should("maxNumber3 function", []() {
        must_equal(maxNumber3(3,6,9),9);
        must_equal(maxNumber3(323,23664,67886),67886);
        must_equal(mmath::maxNumber3(9999999,888888,666666),9999999);
      });

  });

  it.has("\nTime functions testing", [](Moka::Context& it) {

    it.should("secondsToTime function", []() {

        vector<int> timeTestMinute = {0,1,0};
        vector<int> timeTestHour = {1,0,0};
        vector<int> timeTestSecond = {0,0,1};
        vector<int> timeTest = {3,2,1};

        must_equal(secondsToTime(60),timeTestMinute);
        must_equal(secondsToTime(3600),timeTestHour);
        must_equal(secondsToTime(1),timeTestSecond);
        must_equal(secondsToTime(10921),timeTest);
      });

    it.should("isLeapYear function", []() {
        must_equal(isLeapYear(2020),true);
        must_equal(isLeapYear(2016),true);
        must_equal(isLeapYear(2019),false);
        must_equal(isLeapYear(2031),false);
      });

  });

  it.has("\nString functions testing", [](Moka::Context& it) {

    it.should("split function", []() {

        vector<string> testVector = {"Emiliano", "Edgar", "Luis"};
        vector<string> testVector2 = {"Dog", "Cat", "Fish", "Mouse"};

        must_equal(splitString("Emiliano Edgar      Luis", ' ') , testVector);
        must_equal(splitString("Dog Cat      Fish    Mouse", ' ') , testVector2);
      });

    it.should("countWords function", []() {
        must_equal(countWords("Emiliano Edgar      Luis" , ' ') , 3);
        must_equal(countWords("Dog Cat      Fish    Mouse", ' ') , 4);
      });

    it.should("isLetter function", []() {
        must_equal(isLetter('E') , true);
        must_equal(isLetter('a') , true);
        must_equal(isLetter(';') , false);
        must_equal(isLetter('[') , false);
        must_equal(isLetter(' ') , false);
      });

    it.should("isUpperCase function", []() {
        must_equal(isUpperCase('E') , true);
        must_equal(isUpperCase('a') , false);
        must_equal(isUpperCase(';') , false);
        must_equal(isLetter('[') , false);
        must_equal(isLetter(' ') , false);
      });

    it.should("isLowerCase function", []() {
        must_equal(isLowerCase('E') , false);
        must_equal(isLowerCase('a') , true);
        must_equal(isLowerCase(';') , false);
        must_equal(isLetter('[') , false);
        must_equal(isLetter(' ') , false);
      });

    it.should("toLowerCase Char version function", []() {
        must_equal(toLowerCase('A') , 'a');
        must_equal(toLowerCase('E') , 'e');
        must_equal(toLowerCase('I') , 'i');
        must_equal(toLowerCase('O') , 'o');
        must_equal(toLowerCase('U') , 'u');
        must_equal(toLowerCase('a') , 'a');
        must_equal(toLowerCase('e') , 'e');
        must_equal(toLowerCase('i') , 'i');
        must_equal(toLowerCase('o') , 'o');
        must_equal(toLowerCase('u') , 'u');
        must_equal(toLowerCase(';') , ';');
        must_equal(toLowerCase('[') , '[');
        must_equal(toLowerCase(' ') , ' ');
        must_equal(toLowerCase('2') , '2');
        must_equal(toLowerCase('1') , '1');
      });

    it.should("toLowerCase String version function", []() {
        must_equal(toLowerCase("AleRGia") , "alergia");
        must_equal(toLowerCase("EsME  rALdA") , "esme  ralda");
        must_equal(toLowerCase("IgNaCiO") , "ignacio");
        must_equal(toLowerCase("OCtUBre") , "octubre");
        must_equal(toLowerCase("UrA NiO") , "ura nio");
        must_equal(toLowerCase("adi os") , "adi os");
        must_equal(toLowerCase("estornudo") , "estornudo");
        must_equal(toLowerCase("imaginacion") , "imaginacion");
        must_equal(toLowerCase("oscuridad") , "oscuridad");
        must_equal(toLowerCase("universo") , "universo");
        must_equal(toLowerCase("./././{}[]()") , "./././{}[]()");
        must_equal(toLowerCase("1234567890") , "1234567890");
      });

    it.should("toUpperCase Char version function", []() {
        must_equal(toUpperCase('A') , 'A');
        must_equal(toUpperCase('E') , 'E');
        must_equal(toUpperCase('I') , 'I');
        must_equal(toUpperCase('O') , 'O');
        must_equal(toUpperCase('U') , 'U');
        must_equal(toUpperCase('a') , 'A');
        must_equal(toUpperCase('e') , 'E');
        must_equal(toUpperCase('i') , 'I');
        must_equal(toUpperCase('o') , 'O');
        must_equal(toUpperCase('u') , 'U');
        must_equal(toUpperCase(';') , ';');
        must_equal(toUpperCase('[') , '[');
        must_equal(toUpperCase(' ') , ' ');
        must_equal(toUpperCase('2') , '2');
        must_equal(toUpperCase('1') , '1');
      });

    it.should("toUpperCase String version function", []() {
        must_equal(toUpperCase("AlerGia") , "ALERGIA");
        must_equal(toUpperCase("Esm ErA LdA") , "ESM ERA LDA");
        must_equal(toUpperCase("IgNaciO") , "IGNACIO");
        must_equal(toUpperCase("Oc tUb re") , "OC TUB RE");
        must_equal(toUpperCase("UrA  niO") , "URA  NIO");
        must_equal(toUpperCase("ADIOS") , "ADIOS");
        must_equal(toUpperCase("ESTORNUDO") , "ESTORNUDO");
        must_equal(toUpperCase("IMAGINACION") , "IMAGINACION");
        must_equal(toUpperCase("OSCURIDAD") , "OSCURIDAD");
        must_equal(toUpperCase("UNIVERSO") , "UNIVERSO");
        must_equal(toUpperCase("./././{}[]()") , "./././{}[]()");
        must_equal(toUpperCase("1234567890") , "1234567890");
      });

    it.should("capitalizeWord function", []() {
        must_equal(capitalizeWord("AlerGia") , "Alergia");
        must_equal(capitalizeWord("CoMIdA") , "Comida");
        must_equal(capitalizeWord("hola") , "Hola");
        must_equal(capitalizeWord("PeDrO") , "Pedro");
      });

    it.should("joinString function", []() {

        vector<string> testVector = {"Emiliano", "Edgar", "Luis"};
        vector<string> testVector2 = {"Dog", "Cat", "Fish", "Mouse"};

        must_equal(joinString(testVector, ' ') , "Emiliano Edgar Luis");
        must_equal(joinString(testVector2, ' ') , "Dog Cat Fish Mouse");
      });

    it.should("toCapitalize function", []() {
        must_equal(toCapitalize("hEmORRaGia iNtERnA", ' ') , "Hemorragia Interna");
        must_equal(toCapitalize("cOMiDa dE PerRO", ' ') , "Comida De Perro");
        must_equal(toCapitalize("EsE oSo NeGrO 2", ' ') , "Ese Oso Negro 2");
        must_equal(toCapitalize("ArRiBa y ABaJo", ' ') , "Arriba Y Abajo");
      });

    it.should("isPalindrome function", []() {
        must_equal(isPalindrome("radar") , true);
        must_equal(isPalindrome("ana") , true);
        must_equal(isPalindrome("oso") , true);
        must_equal(isPalindrome("reconocer") , true);
        must_equal(isPalindrome("sometemos") , true);
        must_equal(isPalindrome("perro") , false);
        must_equal(isPalindrome("oreja") , false);
        must_equal(isPalindrome("pegamento") , false);
        must_equal(isPalindrome("jefa") , false);
      });

    it.should("removeCharToString function", []() {
        must_equal(removeCharToString("radar roto", 'r') , "ada oto");
        must_equal(removeCharToString("pedro", 'e') , "pdro");
        must_equal(removeCharToString("arana fea", 'a') , "rn fe");
        must_equal(removeCharToString("comida", 'm') , "coida");
        must_equal(removeCharToString("aaaaaa", 'a') , "");
        must_equal(removeCharToString("super", 'a') , "super");
      });

    it.should("countCharsInString function", []() {
        must_equal(countCharsInString("radar", 'r') , 2);
        must_equal(countCharsInString("pedro", 'e') , 1);
        must_equal(countCharsInString("arana", 'a') , 3);
        must_equal(countCharsInString("oso hormiguero", 'o') , 4);
        must_equal(countCharsInString("aaaaaa", 'a') , 6);
        must_equal(countCharsInString("perro", 'z') , 0);
      });

  });

});

int main() {
  return test.run();
}
