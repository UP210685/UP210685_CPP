/* Unidad 3. Bisección
Autor: María Fernanda Aguilar González
Fecha: --/10/2022
Objetivo: Encontrar las diversas raíces de una ecuación
*/
#include <iostream>
#include <cmath>
using namespace std;
double fnEcuacion1(double x) //x^2-8x+15
{
    double y;
    y= pow(x,2) - 8*x +15;
    return y;
}

int main()
{
    double x1 = 7;
    double x2 = 20;
    double xm;
    double y1,y2;

    double Es = .00001; // Error estándar o error absoluto
    double Er = abs(x2 - x1); //Error relativo

    int i=1;
    while (Er > Es)
    {
        xm = (x1+x2)/2;
        y1 = fnEcuacion1(x1);
        y2 = fnEcuacion1(xm);
        if (y1*y2 < 0)
        {
            x2 = xm;
        }
        else 
        {
            x1 = xm;
        }
        Er = abs(x2 - x1);
        i= i+1;
    }
    cout << "i= " << i << " raiz= " << xm << endl;
    return 0;
}

