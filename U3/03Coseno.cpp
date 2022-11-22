/* Unidad 3. Función Coseno
Autor: María Fernanda Aguilar González
Fecha: --/10/2022
Objetivo: Realizar la formula del coseno y usar el margen de error*/
#include <iostream>
#include <cmath>
double PI = 3.14159265358979323846;

using namespace std;
double Radianes(double grados)
{
    grados = (grados*PI)/180; 
    return grados;
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
long double Cos(double x)
{
    double coseno;
    double n=10;
    coseno = (1-(pow(x,2)/factorial(2))+(pow(x,4)/factorial(4))-(pow(x,6)/factorial(6))+(pow(x,8)/factorial(8))-(pow(x,10)/factorial(10)))+(pow (-1,n)*(pow (x,2*n))/factorial(2*n));
    return coseno;
}
int main(int argc, char const *argv[])
{
    double grados=45.00;
    double x = Radianes(grados);
    double coseno=cos(x);
    
    cout << "El coseno de: "<< x << " radianes es: " <<coseno;
    /*double g1= 20;
    double g2= 50;
    double x1= Radianes(g1);
    double x2= Radianes(g2);
    long double es= 0.0001;
    double er= abs(x2-x1);
    double xm;
    double cos1;
    double cos2;
    int i;
    while (er>es)
    {
        xm= (x1+x2)/2;
        cos1=Cos(x1);
        cos2=Cos(xm);
        if (cos1*cos2 < 0)
        {
            x2=xm;
        }
        else
        {
            x1=xm;
        }
        er=abs(x2-x1);
        i++;
    }
    cout <<xm<<er<<x2<<x1;*/

}


