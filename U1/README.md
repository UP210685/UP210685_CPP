
<center>
<b>UNIDAD 1 INTRODUCCIÓN A LA PROGRAMACIÓN </b>
</center>  
  
___
  
<center>
<b>EJERCICIO 1 "HOLAMUNDO" </b>  

*Objetivo: Mostrar un mensaje*  
**CÓDIGO**
```
#include <iostream>
using namespace std;
int main()
{
    cout << "Hola mundo cruel" << endl;
    system("pause");
    return 0;
}
```
**RESULTADO**
<div align="center">
<img alt="Yop" src="Imagenes\holamundo.png" width= '300'>
</div>  

___
<b>EJERCICIO 2 "PARIMPAR" </b>  

*Objetivo: Mostrar un mensaje*  
**CÓDIGO** 
```
#include <iostream>
using namespace std;

int main()
{
    cout <<"Par o impar"<< endl << "\n"<< endl;
    return 0;
}
```

**RESULTADO**
<div align="center">
<img alt="Yop" src="Imagenes\parimpar.png" width= '300'>
</div>

___
<b>EJERCICIO 3 "TIPODATO"</b>  

*Objetivo: Mostrar los diferentes tipos de datos en c++*  
**CÓDIGO** 
```
#include <iostream>
// Libreria para uso del print y scanf
#include <stdio.h>

// Uso del nombre para evitar el std; ;
using namespace std;

// Funcion principal del tipo entero
int main()
{
    // Mas informacion en:
    // http://www.geeksforgeeks.org/c-data-types/
    int entero = 214723343;
    float flotante = 3.4e38;
    double grande = 2.345467676;
    char caracter = '@';

    cout << "Este programa muestra los tipos de datos. \n";
    cout << "El numero entero es: " << entero << endl;
    cout << "El tamaño del entero es: " << sizeof(entero) << "bytes" << endl;
    cout << "El numero flotante es: " << sizeof(flotante) << "bytes" << endl;

```

**RESULTADO**
<div align="center">
<img alt="Yop" src="Imagenes\tipodatos.png" width= '300'>
</div>  

___

<b>EJERCICIO 4 "CICLOS" </b>  
 
 *Objetivo: Manejos de if*  
 **CÓDIGO**
 ```
 #include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int suma = 0;
    int sumap = 0;
    int sumai = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sumap = sumap + i;
        }
        else if (i % 2 == 1)
        {
            sumai = sumai + i;
        }
    }
    printf("la suma de los pares es %d \n", sumap);
    printf("la suma de los impares es %d \n", sumai);
    suma = sumap + sumai;
    printf("La suma de los pares e impares es %d \n", suma);
    return 0;
```
 **RESULTADO**
<div align="center">
<img alt="Yop" src="Imagenes\ciclos.png" width= '300'>
</div>  

___
<b>EJERCICIO 5 "EDADES"</b>  
*Objetivo: Definir la etapa de la persona*  
**CÓDIGO**
```
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int e;
    printf("Cual es tu edad \n");
    scanf("%d" , &e);
    if (e >= 1 && e <= 150)
    {
        if (e>=1 && e <= 30)
        {
            printf("1era edad");
        }
        else if (e >= 31 && e <= 60)
        {
            printf("2nda edad");
        }
        else if (e >= 61 && e <= 90)
        {
            printf("3era edad");
        }
        else {
            printf("Horas extras");
        }
    }
    else{
        printf("Rango es invalido");
    }
   
    return 0;
}
```

**RESULTADOS**

<div align="center">
<img alt="Yop" src="Imagenes\edades.png" width= '300'>
</div>  
<div align="center">  
<img alt="Yop" src="Imagenes\edades2.png" width= '300'>
</div> 
<div align="center">
<img alt="Yop" src="Imagenes\edades3.png" width= '300'>
</div> 
<div align="center">
<img alt="Yop" src="Imagenes\edades4.png" width= '300'>
</div> 
</center>

