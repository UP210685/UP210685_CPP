/* Unidad 3. Funcion Factorial
Autor: María Fernanda Aguilar González
Fecha: 26/10/2022
Objetivo: Con el uso de funciones, resolver diversos problemas que requieren formulas
*/
#include <iostream>
using namespace std;

// Declaración
long int factorial(int n);
long int permutacion(int n, int r); // 5P2=20
long int combinacion(int n, int r); // 5C2=10

int main()
{
    long int r;
    long int p;
    long int c;

    r = factorial(10);
    cout << r << endl;
    p = permutacion(5, 2);
    cout << p << endl;
    c = combinacion(5, 2);
    cout << c << endl;
    return 0;
}
long int factorial(int n)
{
    long int ft = 1;
    int i;
    for (i = 1; i <= n; i++)
    {
        ft = ft * i;
    }
    return ft;
}
long int permutacion(int n, int r)
{
    long int fact;
    long int fact2;
    long int p = 0;
    fact = factorial(n);
    fact2 = factorial(n - r);
    p = fact / fact2;

    return p;
}
long int combinacion(int n, int r)
{
    long int fact;
    long int fact2;
    long int fact3;
    long int c = 0;
    fact = factorial(n);
    fact2 = factorial(n - r);
    fact3 = factorial(r);
    c = fact / (fact2 * fact3);
}
