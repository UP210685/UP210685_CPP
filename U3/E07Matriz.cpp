#include <iostream>
#include <windows.h>
#define c 4
#define f 4
#define c1 1
#define f1 4
using namespace std;
// suma por renglones y suma por columnas, y guardar los valores de las sumas
// matriz transpuesta
/* int sumaColumnas(int A[f][c])
{
    // limpiar matriz
    int suma[f1][c1];
    for (int i = 0; i < f1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            suma[f1][c1] = 0;
        }
        // imprimir matriz
    }
    for (int i = 0; i < f1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << suma[f1][c1] << endl;
        }
    }
    suma de columnas
    for (int i = 0; i < c1; i++)
    {
        for (int j = 0; j < f1; j++)
        {
            suma[f][c] = suma[f][c] + A[f][i];
            cout << suma[f][c] << endl;
        }
    }

    return suma;
}*/
void matrizT(int A[f][c])
{
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
    
}
void imprimirA(int A[f][c])
{
    cout << "M A T R I Z" << endl;
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << A[i][j] << "\t";
            // Sleep(1000);
        }
        cout << endl;
    }
}
void diagonal(int A[f][c])
{
    cout << "D I A G O N A L" << endl;
    for (int i = 0; i < c; i++)
    {
        cout << A[i][i] << "\t";
    }
    cout << endl;
}
void llenarM(int A[f][c])
{
    int contador;
    contador = 0;
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            A[i][j] = contador;
            contador = contador + 1;
        }
    }
}
int main(int argc, char const *argv[])
{
    int matriz[f][c];

    llenarM(matriz);
    imprimirA(matriz);
    diagonal(matriz);
    matrizT(matriz );

    int suma[f1][c1];
    for (int i = 0; i < f1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            suma[i][j] = 0;
        }
    }
    /*/imprimir matriz - prueba
    for (int i = 0; i < f1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << suma[i][j] << endl;
        }
    }*/
    // suma de columnas
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < f; j++)
        {
            suma[i][j] = suma[i][j] + matriz[i][j];  
        }
    }
    //imprimir matriz de suma de resultados
    for (int i = 0; i < c1; i++)
    {
        for (int j = 0; j < f1; j++)
        {
            cout << suma[i][j] << endl;
        }
        
    }
    

    return 0;
}
