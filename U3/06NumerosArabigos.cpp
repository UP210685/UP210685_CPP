/* Unidad 3. Números ARabigos a Romanos
Autor: María Fernanda Aguilar González
Fecha: --/10/2022
Objetivo: Función que convierta los números arabigos a romanos
*/
#include <iostream>
using namespace std;

int romano (int n)
{
    do
    {
        if (n <= 3999 && n >= 1000)
        {
            cout << "M";
            n= n - 1000;
        }
        else if (n < 1000 && n >= 900)
        {
            cout << "CM";
            n= n - 900;
        }
        else if (n < 900 && n > 500)
        {
            cout << "D";
            n= n - 500;
        }
        else if (n == 500)
        {
            cout << "D";
            n= n - 500;
        }
        else if (n < 500 && n >= 400)
        {
            cout << "CD";
            n= n - 400;
        }
        else if (n < 400 && n > 99)
        {
            cout << "C";
            n= n - 100;
        }
        else if (n < 100 && n > 89)
        {
            cout << "XC";
            n= n - 90;
        }
        else if (n < 90 && n > 59)
        {
            cout << "L";
            n= n - 50;
        }
        else if (n < 60 && n > 50)
        {
            cout << "L";
            n= n - 50;
        }
        else if (n == 50)
        {
            cout << "L";
            n= n - 50;
        }
        else if (n < 50 && n > 39)
        {
            cout << "XL";
            n= n - 40;
        }
        else if (n < 40 && n > 10)
        {
            cout << "X";
            n= n - 10;
        }
        else if (n == 10)
        {
            cout << "X";
            n= n - 10;
        }
        else if (n == 9)
        {
            cout << "IX";
            n= n - 9;
        }
        else if (n <= 8 && n >= 6)
        {
            cout << "V";
            n= n - 5;
        }
        else if (n == 5)
        {
            cout << "V";
            n= n - 5;
        }
        else if (n == 4)
        {
            cout << "IV";
            n= n - 4;
        }
        else if (n <= 3 && n >= 1)
        {
            cout << "I";
            n= n - 1;
        }
    } while (n != 0);
}
int main(int argc, char const *argv[])
{
    int n;
    int rom;
    cout <<"¿Cual es el numero que desesas convetir a romano?" << endl;
    cin >> n;
    rom= romano(n);
}
