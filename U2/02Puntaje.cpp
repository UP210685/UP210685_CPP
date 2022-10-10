#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float p=1;
    int r;

    if (p == 0.0 || p == 0.4 || p >= 0.6)
    {
        printf("puntuacion valida \n");
        if (p == 0)
        {
            r = 2400 * 0;
            printf("Tu nivel es INACEPTABLE, has consegido %d", r);
        }
        else if (p == 0.4)
        {
            r = 2400 * 0.4;
            printf("Tu nivel es ACEPTABLE, has consegido %d", r);
        }
        else
        {
            r = 2400 * p;
            printf("Tu nivel es MERITORIO, has consegido %d", r);
        }
    }
    else
        printf("puntuacion invalida ");
    return 0;
}
