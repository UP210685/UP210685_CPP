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
    string APELLIDOPAT= "JIMENEZ";
    string APELLIDOMAT= "ESPARZA";
    string NOMBRE= "JUAN";
    int longitud1 = APELLIDOPAT.length();
    string DIA="03";
    string MES="08";
    string ANO="1987";
    string RFC;
    string voca= Vocal(APELLIDOPAT,longitud1);
    RFC = RFC + APELLIDOPAT[0] + voca[0] + APELLIDOMAT[0] + NOMBRE[0] + ANO + MES + DIA;
    cout << RFC;
}