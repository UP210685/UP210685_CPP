/* Unidad 3.Euler
Autor: María Fernanda Aguilar González
Fecha: /10/2022
Objetivo: Calcular el número de Euler mediante su formula
*/
#include <iostream>
using namespace std;
long int factorial(int n);
long double euler(int fac);

int main()
{
    long double e;
    e = euler(10);
    cout <<"El valor del número de Euler es: " << e << endl;
    return 0;
}
long int factorial(int n)
{
    int fac = 1;
    int i;
    for (i = 1; i <= n; i++)
    {
        fac = fac * i;
    }
    return fac;
}
long double euler(int n)
{
    double sum;
    double e;
    int i;
    long double fact;
    for (i = 0; i <= n; i++)
    {
        fact = factorial(i);
        sum = 1 / fact;
        e = sum + e;
    }
    return e;
}
