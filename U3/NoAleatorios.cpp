#include <iostream>
using namespace std;
#define f 2
#define c 3

int main(int argc, char const *argv[])
{
    srand(time(NULL)); // Generar semilla
    int n;
    cout << "HECHO" << endl;

    int matriz[f][c];
    int matrizT[c][f];

    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            n = 21 + rand() % (10);
            matriz[i][j] = n;
            cout << matriz[i][j] << "\t";
            matrizT[j][i] = matriz [i][j];
        }
        cout << endl;
    }
    // matriz transpuesta
    cout << "M A T R I Z  T R A N S P U E S T A" << endl;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < f; j++)
        {
            cout << matrizT[i][j] << "\t";
        }
        cout << endl;
    }
    

    return 0;
}
