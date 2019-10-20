# Mars <img src="https://images.vexels.com/media/users/3/152536/isolated/preview/401b51c3a9098f12b566121c92009877-mars-planet-icon-by-vexels.png" width="40"> <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/1/18/ISO_C%2B%2B_Logo.svg/1200px-ISO_C%2B%2B_Logo.svg.png" width="36">

Una libreria en c++ para el uso en trabajos universitarios **(Es necesario usar el estandar C++11)** 🎓

## Contenido 📚
a
### namespace mstr ✏️

| tipo de funcion  | nombre de funcion  | parametros                                     | retorno                                                   |
| ---------------- | ------------------ | ---------------------------------------------- | --------------------------------------------------------- |
| vector\<string\> | splitString        | **string** text, **char** separator            | Un vector con todas las palabras dentro del string        |
| int              | countWords         | **string** text, **char** separator            | La cantidad de palabras en un string                      |
| bool             | isUpperCase        | **char** letter                                | Verdadero si la letra es mayuscula                        |
| bool             | isLowerCase        | **char** letter                                | Verdadero si la letra es minuscula                        |
| bool             | isLetter           | **char** letter                                | Verdadero si el caracter una letra                        |
| char/string      | toLowerCase        | **char** letter / **string** text              | Transforma el char o string a minuscula                   |
| char/string      | toUpperCase        | **char** letter / **string** text              | Transforma el char o string a mayuscula                   |
| string           | capitalizeWord     | **string** word                                | Un string con la palabra capitalizada                     |
| string           | joinString         | **vector\<string\>** words, **char** separator | Un string con todas las palabras unidas por el separador  |
| string           | toCapitalize       | **string** text, **char** separator            | Un string con el texto capitalizado                       |
| bool             | isPalindrome       | **string** text                                | Verdadero si el textoes un palindromo                     |
| string           | removeCharToString | **string** text, **char** character            | Un string sin el caracter ingresado como parametro        |
| int              | countCharInString  | **string** text, **char** character            | El numero de veces que aparece el caracter como parametro |
| map\<char,int\>  | countLetters       | **string** text                                | Un map con los caracteres y cuantas veces aparecen        |

---

### namespace mmath 📐

| tipo de funcion | nombre de funcion | parametros                             | retorno                                       |
| --------------- | ----------------- | -------------------------------------- | --------------------------------------------- |
| int             | countDigits       | **int/long** number                    | Cantidad de digitos del numero                |
| int             | maxNumber3        | **int/long** number1, number2, number3 | El numero mas grande de los tres ingresados   |
| int             | addDigits         | **int/long** number                    | La suma de todos los digitos                  |
| int             | randomNumber      | **int** min, **int** max               | Un numero al azar entre el minimo y el maximo |

---

### namespace mtime ⏰

| tipo de funcion | nombre de funcion | parametros                               | retorno                                     |
| --------------- | ----------------- | ---------------------------------------- | ------------------------------------------- |
| int             | getDay            | none                                     | El numero de dia actual                     |
| int             | getMonth          | none                                     | El numero de mes actual                     |
| int             | getYear           | none                                     | El numero de año actual                     |
| int             | getAge            | **int** day, **int** month, **int** year | La edad actual de los valores ingresados    |
| vector\<int\>   | secondsToTime     | **int** seconds                          | Un vector con las horas, minutos y segundos |
| bool            | isLeapYear        | **int** year                             | Verdadero si un año es bisiesto             |

---

### namespace mextra 🤔

| tipo de funcion | nombre de funcion | parametros | retorno       |
| --------------- | ----------------- | ---------- | ------------- |
| string          | helloWorld        | none       | "Hello world" |

## Uso ℹ️

* Pon la carpeta Mars en el directorio de tu proyecto
* Importa en tu archivo main los headers **MarsCore**  y el header del namespace que quieras usar

```cpp
#include "Mars/MarsCore.h"
#include "Mars/MarsExtra.h" // para el namespace mextra
#include "Mars/MarsMath.h" // para el namespace mmath
#include "Mars/MarsString.h" // para el namespace mstr
#include "Mars/MarsTime" // para el namespace mtime
```

Ejemplo de uso de la libreria

```cpp
#include <iostream>
#include "Mars/MarsCore.h"
#include "Mars/MarsExtra.h"

using namespace std;

int main(){
    cout << mextra::helloWorld() << endl;
    return 0;
}

```
