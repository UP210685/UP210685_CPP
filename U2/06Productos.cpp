/* Unidad 2. PRODUCTOS
Autor: María Fernanda Aguilar González
Fecha: 27/09/2022
Objetivo: Realizar un programa donde se pueda ingresar un total indefinido de productos y nos de el precio total a pagar
*/
#include <iostream>
using namespace std;

int main()
{
    double precio;
    int cont;
    int cuenta;
    cuenta=0;
    do
    {
        cout << "Ingresa el precio del producto." << endl;
        cin >> precio;
        cuenta = cuenta + precio;
        cont = cont + 1;
    } while (precio != 0);
    cout << "El total de cuenta es: " << cuenta << endl;
    return 0;
}
