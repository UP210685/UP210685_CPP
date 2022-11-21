/* Unidad 3. Cadenas
Autor: María Fernanda Aguilar González
Fecha: --/10/2022
Objetivo: Usar cadenas en funciones
*/
#include <iostream>
using namespace std;
char camello(char* x)
{
    int i=0;
    while (x[i] !='\0')
    {
        if (islower(x[i]));
        {
            x[i]= toupper(x[i]);
        }
        else 
        {
            x[i]=tolower(x[i]);
        }
        cout << x[i] << " ";
        i++;
    }
    return x;
}

/* int main()
{
    char texto [20]= "UnI";
    char* txt;
    txt = camello(texto);
    cout << "-->" << txt << endl; 
    return 0;
}
*/
