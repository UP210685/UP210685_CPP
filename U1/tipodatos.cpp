/* Unidad 1. Tipos de datos
Autor: María Fernanda Aguilar González
Fecha: 15/09/2022
Descripcion: Muestra los diferentes tipos de datos en c++
*/

//Librería de manejo de entradas y salidas de pantalla
#include <iostream>
//Libreria para uso del print y scanf
#include <stdio.h>

//Uso del nombre para evitar el std; ;
using namespace std;

//Funcion principal del tipo entero 
int main()
{
    //Mas informacion en:
    //http://www.geeksforgeeks.org/c-data-types/
    int entero = 214723343;
    float flotante = 3.4e38;
    double grande = 2.345467676;
    char caracter = '@';

    cout << "Este programa muestra los tipos de datos. \n";
    cout << "El numero entero es: "<< entero << endl;
    cout << "El tamaño del entero es: " << sizeof(entero) << "bytes" << endl;
    cout << "El numero flotante es: " << flotante << endl;
    
}
