/* Unidad 2. Switch Case
Autor: María Fernanda Aguilar González
Fecha: --/10/2022
Objetivo: Uso de switch case
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 6, b = 2, r = 0;
    int opcion = 1;

    while (opcion != 0)
    {

        switch (opcion)
        {
        case 1:
            cout << "Suma: " << a + b << endl;
            break;
        case 2:
            cout << "Resta: " << a - b << endl;
        case 3:
            cout << "Multiplicación: " << a * b << endl;
            break;
        case 4:
            cout << "División: " << endl;
            if (b != 0)
            {
                r = a / b;
                cout << "Resultado: " << r << endl;
            }
            else
            {
                cout << "ERROR, DIVISOR ENTRE 0 INDETERMINADA" << endl;
            }
            break;

        default:
            cout << "Opción inválida" << endl;
            break;
        }
        cout << "Operación <1...4>" << endl;
        cin >> opcion;
    }

    return 0;
}
