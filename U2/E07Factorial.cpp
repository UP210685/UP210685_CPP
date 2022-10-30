/* Unidad 2. Factorial
Autor: María Fernanda Aguilar González
Fecha: --/10/2022
Objetivo: Calcular el factorial de un número
*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int s = 1;
    int contador = 1;
    int n;

    cout << "Dame un numero" << endl;
    cin >> n;
    if (n == 0)
    {
        cout << "El factorial es 1 \n"
             << endl;
    }
    else
    {
        while (contador <= n)
        {
            s = s * contador;
            contador = contador + 1;
        }
        cout << "El factorial es: " << s;
    }
    return 0;
}
