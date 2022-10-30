/* Unidad 2. TEMPERATURA
Autor: María Fernanda Aguilar González
Fecha: 27/09/2022
Objetivo: Sacar el promedio de las temperaturas dadas
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    double temperatura;
    int cont;
    double acum;
    double promedio;
    for (int i = 1; i <= 6; i++)
    {
        cout << "Ingrese la temperatura" << endl;
        cin>> temperatura;
        acum = acum + temperatura; 
        cont= cont+1;
        promedio = acum/cont;
        
    }
    cout <<"El promedio de temperaturas es: " << promedio << endl;

    return 0;
}
