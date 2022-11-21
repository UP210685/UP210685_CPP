/* Unidad 3. Desviación Estandar
Autor: María Fernanda Aguilar González
Fecha: --/10/2022
Objetivo: Sacar la desviación estándar de una cantidad de datos dada.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int num[]={600,470,170,430,300};
    int media;
    double x1;
    double ds;
    double x[]={0,0,0,0,0};

    media=0;
    for (int i = 0; i < 5; i++)
    {
        media= media+num[i];
    }
    media= media/5;
    for (int i = 0; i < 5; i++)
    {
        x[i]= pow((num[i]-media),2)/5;
        x1= x1+x[i];
    }
    ds= sqrt(x1);
    cout<<"Para los siguientes datos " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << num[i] << "\t"; 
    }
    cout << endl;
    cout << "La desviación estandar es de " << ds <<" y la media es de "<< media << endl;
    return 0;
}
