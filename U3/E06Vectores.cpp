#include <iostream>

using namespace std;

int menorV(int x[], int n)
{
    int menor = x[0];
    for (int i = 0; i < n; i++)
    {
        if (x[i] < menor)
        {
            menor = x[i];
        }  
    }
    return menor;
}
int mayorAB (int x, int y)
{
    int mayor;
    mayor = (x > y) ? x : y;  // IF TERNARIO
    /*
    if (x > y)
    {
        mayor = x;
    }
    else
    {
        mayor = y;
    }
    */
    return mayor;
}

int main(int argc, char const *argv[])
{

    int cal[] = {10,9,8,7,6};
    int n=5;
    double total;
    double promedio;
    int menor = menorV(cal,n);
    cout <<"El menor = "<< menor << endl;
    int mayor = mayorAB(5,10);
    cout << "El mayor = "<< mayor << endl;
   
    /*
    for (int i = 0; i < n; i++)
    {
        total = total + cal2[i];
    
    }
    promedio = total/n;
    cout <<promedio << endl;
    cal [0]=10;
    cal [1]=9;
    cal [2]=8;
    cal [3]=7;
    cal [4]=6;
    */
    return 0;
}
