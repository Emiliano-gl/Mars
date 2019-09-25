# Mars <img src="https://images.vexels.com/media/users/3/152536/isolated/preview/401b51c3a9098f12b566121c92009877-mars-planet-icon-by-vexels.png" width="40"> <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/1/18/ISO_C%2B%2B_Logo.svg/1200px-ISO_C%2B%2B_Logo.svg.png" width="36">

Una libreria en c++ para el uso en trabajos universitarios **(Es necesario usar el estandar C++11)** 🎓

## Contenido 📚

| Namespace | cantidad de funciones |
| --------- | --------------------- |
| mextra    | 1                     |
| mstr      | 7                     |
| mmath     | 0                     |

### namespace mstr ✏️

| tipo de funcion  | nombre de funcion | parametros                   | retorno                                            |
| ---------------- | ----------------- | ---------------------------- | -------------------------------------------------- |
| vector\<string\> | splitString       | string texto, char separador | Un vector con todas las palabras dentro del string |
| int              | countWords        | string texto, char separador | La cantidad de palabras en un string               |
| bool             | isUpperCase       | char letra                   | retorna verdadero si la letra es mayuscula         |
| bool             | isLowerCase       | char letra                   | retorna verdadero si la letra es minuscula         |
| bool             | isLetter          | char letra                   | retorna verdadero si el caracter una letra         |
| char/string      | toLowerCase       | char letra / string texto    | transforma el char o string a minuscula            |
| char/string      | toUpperCase       | char letra / string texto    | transforma el char o string a mayuscula            |

---

### namespace mmath 📐

| tipo de funcion | nombre de funcion | parametros | retorno |
| --------------- | ----------------- | ---------- | ------- |

---

### namespace mextra 🤔

| tipo de funcion | nombre de funcion | parametros | retorno       |
| --------------- | ----------------- | ---------- | ------------- |
| string          | helloWorld        | ninguno    | "Hello world" |

## Uso ℹ️

* Pon la carpeta Mars en el directorio de tu proyecto
* Importa en tu archivo main los headers **MarsCore**  y el header del namespace que quieras usar

```cpp
#include "Mars/MarsCore.h"
#include "Mars/MarsExtra.h" //para el namespace extra
#include "Mars/MarsMath.h" //para el namespace math
#include "Mars/MarsString.h" //para el namespace str
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
