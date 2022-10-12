#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float p= 0.0f;
    int r;
    printf("¿cuál es su puntaje? \n");
    scanf("%f", &p);
    
    if (p == 0.0f || p == 0.4f || p >= 0.6f)
    {
        printf("puntuacion valida \n");
        if (p == 0.0f)
        {

            r = 2400 * 0.0f;
            printf("Tu nivel es INACEPTABLE, has consegido %d", r);
        }
        else if (p == 0.4f)
        {
            r = 2400 * 0.4f;
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
