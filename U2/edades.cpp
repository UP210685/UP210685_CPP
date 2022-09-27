/* Unidad 1.
Autor: María Fernanda Aguilar González
Fecha: 27/09/2022
Objetivo: Definir la etapa de la persona
            [1..150] Validación
            [1..30] 1ra edad
            [31..60] 2nda edad
            {61..90] 3ra edad
            [91..] Horas extras
*/
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int e;
    printf("Cual es tu edad \n");
printf("%d \n" , e);
    if (e >= 1 && e <= 150)
    {
        if (e <= 30)
        {
            printf("1era edad");
        }
        else if (e >= 31 && e <= 60)
        {
            printf("2nda edad");
        }
        else if (e >= 61 && e <= 90)
        {
            printf("3era edad");
        }
        else {
            printf("Horas extras");
        }
    }
    else{
        printf("Rango es invalido");
    }
    getchar();
    return 0;
}