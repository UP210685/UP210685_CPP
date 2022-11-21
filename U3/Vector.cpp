// vector 5 materias que de calificaciones sin repetir, con numeros aleatorios
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int cal;
    int materias[5];
    int n;
    srand(time(NULL));

    materias[5]=0;
    
    for (int i = 0; i < 5; i++)
    {
        n=rand()%(5); 
        if (n != materias[i])
        {
            materias[i]= n;
        }
        else
        {
            
        }
        
        
    }
    for (int i = 0; i < 5; i++)
    {
        cout << materias[i] << endl;
    }
    

    return 0;
}
