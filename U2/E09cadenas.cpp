#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string cadena = "universidad";
    char texto [30] = "poliTecnicA";
    int longitud = cadena.length();
    int i = 0;
    int cont = 0;
    int contmin = 0;
    int contmax = 0;
    int letras = 0;
    for (int i = 0; i < longitud; i++)
    {
        cout << cadena [i] << " " ;
    }

    i = 0;
    while (texto[i] != '\0')
    {
        cout << texto [i] << " " ;
        i++;
    }
    /*for (int i = 0; i <30; i++)       MAL HECHO
    {
        cout << texto [i] << " " ;
    } */
    for (int i = 0; i < longitud; i++)
    {
        if (texto [i] == 'a' || texto [i] == 'e' || texto [i] == 'i' || texto [i]== 'o' || texto [i] == 'u')
        {
            cont = cont + 1;
        }
    }

    for (int i=0; i < longitud; i++)
    {
        if (islower (texto[i]))
        {
            contmin= contmin + 1;
        }
        else
        {
            contmax = contmax + 1;
        }
        
        
    }
    for (int i = 0; i < longitud; i++)
    {
        if (isalpha (texto[i]))
        {
            letras = letras+1; 
        }
        
    }
    
    cout << "\n" << endl;
    cout << "Vocales : " << cont;   
    cout << " \n Minúsculas: " << contmin;
    cout << "\n Mayúsculas: " << contmax;
    cout <<". . . Hecho" << endl;
    cout <<"Letras: " << letras;
    return 0;
}

