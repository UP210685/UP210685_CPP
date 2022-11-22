<center>
<b>3TH UNITY: FUNCTIONS</b>
</center>  
  
___
  
<center>
<b> FIRTS HOMEWORK "BISECTION" </b>  

*Objective: Find the various roots of an equation*  
**CODE**

</center>

```
##include <iostream>
#include <cmath>
using namespace std;
double fnEcuacion1(double x) //x^2-8x+15
{
    double y;
    y= pow(x,2) - 8*x +15;
    return y;
}

int main()
{
    double x1 = 4;
    double x2 = 10;
    double xm;
    double y1,y2;

    double Es = .00001; // Error estándar o error absoluto
    double Er = abs(x2 - x1); //Error relativo

    int i=1;
    while (Er > Es)
    {
        xm = (x1+x2)/2;
        y1 = fnEcuacion1(x1);
        y2 = fnEcuacion1(xm);
        if (y1*y2 < 0)
        {
            x2 = xm;
        }
        else 
        {
            x1 = xm;
        }
        Er = abs(x2 - x1);
        i= i+1;
    }
    cout << "i= " << i << " raiz= " << xm << endl;
    return 0;
}
```  
<center> 

**RESULT**
<div align="center">
<img alt="Yop" src="Images\bisection.png" width= '400'>
</div>  
<div align="center">
<img alt="Yop" src="Images\bisection2.png" width= '400'>
</div>  

___
  
<center>
<b> SECOND HOMEWORK "LEAD-YEAR" </b>  

*Objective: Determine if the entered year is a leap year*  
**CODE**

</center>

```
#include <iostream>
using namespace std;
int ABisiesto(int a)
{
    int bis=0;
    if (a%400==0)
    {
        bis=1;
    }
    if (a%4==0 && a%100!=0)
    {
        bis=1;
    }
    else
    {
        bis=0;
    }
    return bis;
}

int main(int argc, char const *argv[])
{
    int a=2024; 
    int bis;
    bis = ABisiesto(a);
    cout << bis << endl;
    cout << ". . . Listo" << endl;
    return 0;
}
```  
<center> 

**RESULT**  

2012
<div align="center">
<img alt="Yop" src="Images\leapyear.png" width= '400'>
</div>  
2024
<div align="center">
<img alt="Yop" src="Images\leapyear2.png" width= '400'>
</div> 
2021
<div align="center">
<img alt="Yop" src="Images\leapyear3.png" width= '400'>
</div>  

___
___
  
<center>
<b> THIRD HOMEWORK "COSINE" </b>  

*Objective: Perform the cosine formula and use the margin of error*  
**CODE**

</center>

```
#include <iostream>
#include <cmath>
double PI = 3.14159265358979323846;

using namespace std;
double Radianes(double grados)
{
    grados = (grados*PI)/180; 
    return grados;
}
long int factorial(int n)
{
    long int ft = 1;
    int i;
    for (i = 1; i <= n; i++)
    {
        ft = ft * i;
    }
    return ft;
}
long double Cos(double x)
{
    double coseno;
    double n=10;
    coseno = (1-(pow(x,2)/factorial(2))+(pow(x,4)/factorial(4))-(pow(x,6)/factorial(6))+(pow(x,8)/factorial(8))-(pow(x,10)/factorial(10)))+(pow (-1,n)*(pow (x,2*n))/factorial(2*n));
    return coseno;
}
int main(int argc, char const *argv[])
{
    double grados=45.00;
    double x = Radianes(grados);
    double coseno=cos(x);
    
    cout << "El coseno de: "<< x << " radianes es: " <<coseno;
    /*double g1= 20;
    double g2= 50;
    double x1= Radianes(g1);
    double x2= Radianes(g2);
    long double es= 0.0001;
    double er= abs(x2-x1);
    double xm;
    double cos1;
    double cos2;
    int i;
    while (er>es)
    {
        xm= (x1+x2)/2;
        cos1=Cos(x1);
        cos2=Cos(xm);
        if (cos1*cos2 < 0)
        {
            x2=xm;
        }
        else
        {
            x1=xm;
        }
        er=abs(x2-x1);
        i++;
    }
    cout <<xm<<er<<x2<<x1;*/

}
```  
<center> 

**RESULT**  


<div align="center">
<img alt="Yop" src="Images\cosine.png" width= '400'>
</div>  
___
<center>
<b> FOURTH HOMEWORK "STANDARD DEVIATION" </b>  

*Objective: Get the standard deviation of a given amount of data*  
**CODE**

</center>

```
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int num[]={600,470,170,430,300};
    int media;
    double x1;
    double ds;
    double x[]={0,0,0,0,0};

    media=0;
    for (int i = 0; i < 5; i++)
    {
        media= media+num[i];
    }
    media= media/5;
    for (int i = 0; i < 5; i++)
    {
        x[i]= pow((num[i]-media),2)/5;
        x1= x1+x[i];
    }
    ds= sqrt(x1);
    cout<<"Para los siguientes datos " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << num[i] << "\t"; 
    }
    cout << endl;
    cout << "La desviación estandar es de " << ds <<" y la media es de "<< media << endl;
    return 0;
}
```  
<center> 

**RESULT**  
  
<div align="center">
<img alt="Yop" src="Images\deviation.png" width= '400'>
</div>  

___
<center>
<b> FIFTH HOMEWORK "COIN/CHANGE" </b>  

*Objective: Give the minimum change*  
**CODE**

</center>

```
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int dinero=3699, cambio=0;
    cambio= dinero/1000;
    dinero%=1000;
    cout <<"Billetes de 1000: "<<cambio<< endl;
    cambio= dinero/500;
    dinero%=500;
    cout <<"Billetes de 500: "<<cambio<<endl;
    cambio= dinero/200;
    dinero%=200;
    cout <<"Billetes de 200: "<<cambio<<endl;
    cambio= dinero/100;
    dinero%=100;
    cout <<"Billetes de 100: "<<cambio<<endl;
    cambio= dinero/50;
    dinero%=50;
    cout <<"Billetes de 50: "<<cambio<<endl;
    cambio= dinero/20;
    dinero%=20;
    cout <<"Billetes de 20: "<<cambio<<endl;
    cambio= dinero/10;
    dinero%=10;
    cout <<"Monedas de 10: "<<cambio<<endl;
    cambio= dinero/5;
    dinero%=5; 
    cout <<"Monedas de 5: "<<cambio<<endl;
    cambio= dinero/2;
    dinero%=2;
    cout <<"Monedas de 2: "<<cambio<<endl;
    cambio= dinero/1;
    dinero%=1;
    cout <<"Monedas de 1: "<<cambio<<endl;
    return 0;
}
```  
<center> 

**RESULT**  
  
<div align="center">
<img alt="Yop" src="Images\COINS.png" width= '400'>
</div>  

___
<center>
<b> SIXTH HOMEWORK "ARABIC TO ROMAN NUMBERS" </b>  

*Objective: Function that converts arabic numbers to roman numbers*  
**CODE**

</center>

```
#include <iostream>
using namespace std;

int romano (int n)
{
    do
    {
        if (n <= 3999 && n >= 1000)
        {
            cout << "M";
            n= n - 1000;
        }
        else if (n < 1000 && n >= 900)
        {
            cout << "CM";
            n= n - 900;
        }
        else if (n < 900 && n > 500)
        {
            cout << "D";
            n= n - 500;
        }
        else if (n == 500)
        {
            cout << "D";
            n= n - 500;
        }
        else if (n < 500 && n >= 400)
        {
            cout << "CD";
            n= n - 400;
        }
        else if (n < 400 && n > 99)
        {
            cout << "C";
            n= n - 100;
        }
        else if (n < 100 && n > 89)
        {
            cout << "XC";
            n= n - 90;
        }
        else if (n < 90 && n > 59)
        {
            cout << "L";
            n= n - 50;
        }
        else if (n < 60 && n > 50)
        {
            cout << "L";
            n= n - 50;
        }
        else if (n == 50)
        {
            cout << "L";
            n= n - 50;
        }
        else if (n < 50 && n > 39)
        {
            cout << "XL";
            n= n - 40;
        }
        else if (n < 40 && n > 10)
        {
            cout << "X";
            n= n - 10;
        }
        else if (n == 10)
        {
            cout << "X";
            n= n - 10;
        }
        else if (n == 9)
        {
            cout << "IX";
            n= n - 9;
        }
        else if (n <= 8 && n >= 6)
        {
            cout << "V";
            n= n - 5;
        }
        else if (n == 5)
        {
            cout << "V";
            n= n - 5;
        }
        else if (n == 4)
        {
            cout << "IV";
            n= n - 4;
        }
        else if (n <= 3 && n >= 1)
        {
            cout << "I";
            n= n - 1;
        }
    } while (n != 0);
}
int main(int argc, char const *argv[])
{
    int n;
    int rom;
    cout <<"¿Cual es el numero que desesas convetir a romano?" << endl;
    cin >> n;
    rom= romano(n);
}
```  
<center> 

**RESULT**  
  
<div align="center">
<img alt="Yop" src="Images\numbers.png" width= '400'>
</div>  
<div align="center">
<img alt="Yop" src="Images\numbers2.png" width= '400'>
</div>  
<div align="center">
<img alt="Yop" src="Images\numbers3.png" width= '400'>
</div>  
___
<center>
<b> SEVENTH HOMEWORK "RFC" </b>  

*Objective: Get the RFC from users*  
**CODE**

</center>

```
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
```  
<center> 

**RESULT**  
  
ESPARZA LOPEZ CARLOS 17/11/2022
<div align="center">
<img alt="Yop" src="Images\RFC.png" width= '400'>
</div>  
JIMENEZ ESPARZA JUAN 03/08/1987
<div align="center">
<img alt="Yop" src="Images\RFC2.png" width= '400'>
</div>  

___
<center>
<b> EIGHTH HOMEWORK "ORDERED VECTOR" </b>  

*Objective: Sort a vector ascending by investigating the method and showing the algorithm  
Method used: Bubble sort method, it is a method that consists of comparing the elements and changing them if they are out of order*  
</center>
Method algorithm:  

from i ← 1 to n-1 do  
      from j ← 1 to n-i do  
          if A[j] > A[j+1] then  
              Exchange (A[j], A[j+1])  
          fin-yes  
      end-from (loop j)  
end-from (loop i)  

**CODE**

</center>

```
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
```  
<center> 

**RESULT**  
  
<div align="center">
<img alt="Yop" src="Images\vector.png" width= '400'>
</div>  
<div align="center">
<img alt="Yop" src="Images\vector2.png" width= '800'>
</div>  

___
<center>
<b> NINTH HOMEWORK "RECURSIVE FUNCTION" </b>  

*Objective: Create a function that can be called within itself*  
**CODE**

</center>

```
#include <iostream>
using namespace std;
string numero(int n)
{
    string respuesta;
    if (n==7)
    {
        respuesta="v";
        return respuesta;
    }else{
        cout<<"elige otro numero ";
        cin >> n;
        return numero(n);
    }
}
int main(int argc, char const *argv[])
{
    int n;
    cout <<"Adivina un número del 1 al 10" << endl;
    cin >> n;
    numero(n);
    return 0;
}

```  
<center> 

**RESULT**  
The function consists in guess the choose number, that its 7
<div align="center">
<img alt="Yop" src="Images\function.png" width= '400'>
</div>  
<div align="center">
<img alt="Yop" src="Images\function2.png" width= '400'>
</div>  

___