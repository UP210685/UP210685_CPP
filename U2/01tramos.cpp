/* Unidad 2. TRAMOS
Autor: María Fernanda Aguilar González
Fecha: 27/09/2022
Objetivo: Calcular el impuesto a pagar y la renta anual
*/
#include <iostream>
#include <iostream>
using namespace std;

int main()
{
    int renta;
    int ranual;
    int impuesto;

    cout <<"¿Cuál es su renta?" << endl;
    cin>> renta;

    if (renta >= 1)
    {
        if (renta <= 10000)
        {
            impuesto = renta * 0.05;
        }
        else if (renta >= 10000 && renta <= 20000)
        {
            impuesto = renta * 0.15;
        }
        else if (renta >= 20000 && renta <= 35000)
        {
            impuesto = renta * 0.20;
        }
        else if (renta >= 35000 && renta <= 60000)
        {
            impuesto = renta * 0.30;
        }
        else
        {
            impuesto = renta * 0.45;
        }
    }
    ranual = renta * 12;
    printf ("Su renta anual es %d \n", ranual);
    printf ("El impuesto a pagar es de %d \n", impuesto);
}
