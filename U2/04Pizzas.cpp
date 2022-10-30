/* Unidad 2. PIZZERIA
Autor: María Fernanda Aguilar González
Fecha: 27/09/2022
Objetivo: Preguntar por la pizza que desea el usuario
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string tipo = " ";
    string ingrediente = " ";
    cout << "¿Qué tipo de pizza quieres?" << endl;
    cin >> tipo;
    if (tipo == "vegetariana" || tipo == "carne")
    {

        if (tipo == "vegetariana")
        {
            cout << "Los ingredientes extra para la pizza vegetariana son: \n 1.Pimiento \n 2.Tofu"<< endl;
            cout << "¿Qué ingrendiente extra deseas para tu pizza vegetariana...?"<< endl;
            cin >> ingrediente;
            if (ingrediente == "pimiento")
            {
                cout << "Tu pizza es vegetariana y como ingrediente extra lleva salsa de tomate, mozzarella y pimiento" << endl;
            }
            else if (ingrediente == "tofu")
            {
                cout << "Tu pizza es vegetariana y como ingredientes extra lleva salsa de tomate, mozzarella y tofu " << endl;
            }

            else
            {
                cout << "Ingrediente inválido" << endl;
            }
        }
        if (tipo == "carne")
        {
            cout << "Los ingredientes extra para la pizza son: \n1.Peperoni \n2.Jamón \n3.Salmón" << endl;
            cout << "¿Qué ingrediente extra deseas para tu pizza de carne...?" << endl;
            cin >> ingrediente;
            if (ingrediente == "peperoni")
            {
                cout << "Tu pizza es de carnes y como ingredientes extra lleva salsa de tomate, mozzarella y peperoni" << endl;
            }
            else if (ingrediente == "jamón")
            {
                cout << "Tu pizza es de carnes y como ingredientes extra lleva salsa de tomate, mozzarella y jamón" << endl;
            }
            else if (ingrediente == "salmon")
            {
                cout << "Tu pizza es de carnes y como ingredientes extra lleva salsa de tomate, mozzarella y salmón" << endl;
            }
            else
                cout << "Ingrediente inválido" << endl;
        }
    }
    else
        cout <<"no válido" << endl;
    return 0;
}
