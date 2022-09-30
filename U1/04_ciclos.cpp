#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int suma = 0;
    int sumap = 0;
    int sumai = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sumap = sumap + i;
        }
        else if (i % 2 == 1)
        {
            sumai = sumai + i;
        }
    }
    printf("la suma de los pares es %d \n", sumap);
    printf("la suma de los impares es %d \n", sumai);
    suma = sumap + sumai;
    printf("La suma de los pares e impares es %d \n", suma);
    return 0;
}
