/* Unidad 3. Moneda
Autor: María Fernanda Aguilar González
Fecha: --/10/2022
Objetivo: Entregar el minimo de cambio
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int dinero=3699, cambio=0;
    cambio= dinero/1000;
    dinero%=1000;
    cout <<"Billetes de 1000: "<<cambio<< endl;
    cambio= dinero/500;
    dinero%=500;
    cout <<"Billetes de 500: "<<cambio<<endl;
    cambio= dinero/200;
    dinero%=200;
    cout <<"Billetes de 200: "<<cambio<<endl;
    cambio= dinero/100;
    dinero%=100;
    cout <<"Billetes de 100: "<<cambio<<endl;
    cambio= dinero/50;
    dinero%=50;
    cout <<"Billetes de 50: "<<cambio<<endl;
    cambio= dinero/20;
    dinero%=20;
    cout <<"Billetes de 20: "<<cambio<<endl;
    cambio= dinero/10;
    dinero%=10;
    cout <<"Monedas de 10: "<<cambio<<endl;
    cambio= dinero/5;
    dinero%=5; 
    cout <<"Monedas de 5: "<<cambio<<endl;
    cambio= dinero/2;
    dinero%=2;
    cout <<"Monedas de 2: "<<cambio<<endl;
    cambio= dinero/1;
    dinero%=1;
    cout <<"Monedas de 1: "<<cambio<<endl;
    return 0;
}
