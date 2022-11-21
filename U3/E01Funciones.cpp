/* Unidad 3. Funciones
Autor: María Fernanda Aguilar González
Fecha: --/10/2022
Objetivo: Uso de distintas funciones
*/
#include <iostream>
#include <cmath>
using namespace std;
const double E = 2.71828182;

int doble(int a)
{
    int r;
    r = a * 2;
    return r;
}
int sumatoria(int n)
{
    int x = 0;
    int i=0;
    for (int i = 1; i <= n; i++)
    {
        x = x + i;
    }
    
    return x;
}
double EC (int x)
{
    double y;
    y = (x*x)-(8*x)+15;
    return y;
}
double EC2 (double x)
{
    return (pow(E, -x)+4*pow(x,3)-5);
}
string camello (string x)
{
    int lon = x.length();
    for (int i = 0; i < lon; i++)
    {
        if (islower(x[i]))
        {
            x[i] = toupper(x[i]);
        }
        else
        {
            x[i] = tolower(x[i]);
        }

    }
    return x;
    
}
int main()
{
    double x;
    int sum = sumatoria(x);
    int r = doble(x);


    double Ecu;
    /*for (int i = 0; i <= 10; i++)
    {
        Ecu = EC(i);
        cout << "El resultado de la ecuación cuando el valor es: " << i << " es de: " << Ecu << endl;
    } 
     cout << "El doble del numero es "<< r << endl;
    cout << "La sumatoria de "<< x << " numeros es " << sum << endl; 
    x = EC2(1.05151652);
    cout << "El resultado de la ecuación 2 es " << x << endl;
    printf ("%12.10f \n" ,x); */
    string res = camello("Upa");
    cout << res << endl;
    return 0;
}

