/* Unidad 2
Autor: María Fernanda Aguilar González
Fecha:08/10/2022
Objetivo: For anidados
    Tablas del 1 al 10  */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int r = 0;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            r = i * j;
            printf("%d x %d = %d \n", i, j, r);
        }
        r=0;
        printf("\n");
    }

    return 0;
}
