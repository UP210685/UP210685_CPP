/* Unidad 2. BreakContinue
Autor: María Fernanda Aguilar González
Fecha: --/10/2022
Objetivo: Conocer la función y diferencias de un break y un continue
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n  = 5;
    int i;
    for (int i = 0; i <= 10; i++)
    {
        if (i == 6)
        {   
            break;  //continue;
        }
        else
        {
            printf("numero %d \n", i);
        }
    printf("siguiente numero \n");    
    }
    printf(". . . Hecho \n");
    return 0;

}
