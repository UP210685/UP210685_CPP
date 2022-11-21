/* Unidad 3. Vector ordenado ascendentemente
Autor: María Fernanda Aguilar González
Fecha: --/10/2022
Objetivo: Ordenar un vector ascendentemente investigando el método y mostrando el algoritmo...
Método utilizado: Método de ordenación por burbuja, es un método que consiste en comparar los elementos y cambiarlos si estan desordenados
Algoritmo del método: 
desde i ← 1 hasta n-1 hacer
    desde j ← 1 hasta n-i hacer
        si A[j] > A[j+1] entonces
            Intercambio (A[j], A[j+1])
        fin-si
    fin-desde (bucle j)
fin-desde (bucle i) 
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int temp,i,j;
    int vector[100];
    int n,acom;
    cout <<"¿Cuantos datos quieres ordenar?"<< endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout <<"Ingresa el dato" << i <<" " ;
        cin >>vector[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (vector[j] > vector[j+1]) //IMPLEMENTACIÓN DEL MÉTODO
            {
                temp= vector[j];
                vector[j]= vector [j+1];
                vector [j+1]= temp;
                acom= acom+1;
            }
        }   
    }
    cout << "Tu vector se ordeno en " << acom << " iteraciones" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << vector[i] <<"\t";
    }
    return 0;
}
