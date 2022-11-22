/* Unidad 3. RFC
Autor: María Fernanda Aguilar González
Fecha: --/10/2022
Objetivo: Sacar el RFC de usuarios
*/
#include <iostream>
using namespace std;
string Vocal(string x, int longi)
{
    string voc;
    for (int i = 1; i < longi; i++)
    {
        if (x[i] == 'A' || x[i] == 'E' || x[i] == 'I' || x[i] == 'O' || x[i] == 'U')
        {
           voc=voc+x[i];
        }
    }
    return voc;
}
int main(int argc, char const *argv[])
{
    string APELLIDOPAT= "ESPARZA";
    string APELLIDOMAT= "LOPEZ";
    string NOMBRE= "CARLOS";
    int longitud1 = APELLIDOPAT.length();
    string DIA="17";
    string MES="11";
    string ANO="2022";
    string RFC;
    string voca= Vocal(APELLIDOPAT,longitud1);
    RFC = RFC + APELLIDOPAT[0] + voca[0] + APELLIDOMAT[0] + NOMBRE[0] + ANO + MES + DIA;
    cout << RFC;
}