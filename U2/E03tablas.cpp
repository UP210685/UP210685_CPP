/* Unidad 2. TABLAS DE MULTIPLICAR
Autor: María Fernanda Aguilar González
Fecha: 27/09/2022
Objetivo: Realizar las tablas de multiplicar
*/
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    int r = 0;
    int i=0;
    
    printf("¿Cuál tabla de multiplicar quieres?");
    scanf("%d",&n);
    printf ("\n");
    for (int i = 0; i <= 10 ; i++)
    {
        r = n * i;
        printf ("%d por %d = %d \n", n,i,r);
    }

    printf ("\n");
    i = 10;
    for (int i = 10; i >= 0 ; i--)
    {
        r = n * i;
        printf ("%d por %d = %d \n", n,i,r);
    }

    printf ("\n");
    i = 1;
    while (i <= 10)
    {
        r = n * i;
        printf("%d por %d = %d \n", n,i,r);
        i = i + 1;
    }

    printf ("\n");
    i = 10;
    while (i >= 1)
    {
        r = n * i;
        printf("%d por %d = %d \n", n,i,r);
        i = i - 1;
    }

    printf ("\n");
    i = 1;
    do
    {
        r = n * i;
        printf("%d por %d = %d \n", n,i,r);
        i = i +1;
    } while (i <= 10);

    printf ("\n");
    i = 10;
    do
    {
        r= n * i;
        printf("%d por %d = %d \n", n,i,r);
        i = i - 1;
    } while (i>=1);

    return 0;
}


