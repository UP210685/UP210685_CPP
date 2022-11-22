/* Unidad 3. Función recursiva
Autor: María Fernanda Aguilar González
Fecha: --/10/2022
Objetivo: Crear una función que se pueda mandar a llamar dentro de sí misma...
*/
#include <iostream>
using namespace std;
string numero(int n)
{
    string respuesta;
    if (n==7)
    {
        respuesta="v";
        return respuesta;
    }else{
        cout<<"elige otro numero ";
        cin >> n;
        return numero(n);
    }
}
int main(int argc, char const *argv[])
{
    int n;
    cout <<"Adivina un número del 1 al 10" << endl;
    cin >> n;
    numero(n);
    return 0;
}
