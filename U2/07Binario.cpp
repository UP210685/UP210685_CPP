/* Unidad 3. Binario
Autor: María Fernanda Aguilar González
Fecha: 27/09/2022
Objetivo: Convertir números del sistema decimal al sistema binario
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    string binario = "";

    cout << "Ingresa un número para convertirlo a binario" << endl;
    cin >> n;

    while (n > 0)
    {
        if (n % 2 == 0)
        {
            binario = "0" + binario;
        }
        else
        {
            binario = "1" + binario;
        }
        n = n / 2;
    }

    cout << "El numero convertido a binario es: " << binario << endl;
}
