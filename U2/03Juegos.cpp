/* Unidad 3. JUEGOS
Autor: María Fernanda Aguilar González
Fecha: 27/09/2022
Objetivo: Calcular automaticamente el costo a pagar por la entrada a una sala de videojuegos
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int edad;

    cout << "Dime tu edad y te diré cuando debes pagar por tu entrada a la sala de juegos" << endl;
    cin >> edad;
    if (edad >= 0 && edad < 4)
    {
        cout << "Entrada gratuita" << endl;
    }
    else if (edad >= 4 && edad < 18)
    {
        cout << "El costo de tu entrada es de $5 pesos" << endl;
    }
    else
    {
        cout << "El costo de tu entrada es de $10 pesos" << endl;
    }
    return 0;
}
