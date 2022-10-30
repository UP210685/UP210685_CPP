/* Unidad 2. Sumatoria
Autor: María Fernanda Aguilar González
Fecha: --/10/2022
Objetivo: Debugear
*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n = 10;
    int i;
    int r = 0;
    while (i <= n)
    {
        r = r + i;
        i = i + 1;
    }
    printf("La sumatoria es %d", r);
    return 0;

}
