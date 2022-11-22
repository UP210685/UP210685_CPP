/* Unidad 3. Año bisiesto
Autor: María Fernanda Aguilar González
Fecha: --/10/2022
Objetivo: Detectar si el año ingresado es bisiesto
*/
#include <iostream>
using namespace std;
int ABisiesto(int a)
{
    int bis=0;
    if (a%400==0)
    {
        bis=1;
    }
    if (a%4==0 && a%100!=0)
    {
        bis=1;
    }
    else
    {
        bis=0;
    }
    return bis;
}

int main(int argc, char const *argv[])
{
    int a=2021; 
    int bis;
    bis = ABisiesto(a);
    cout << bis << endl;
    cout << ". . . Listo" << endl;
    return 0;
}