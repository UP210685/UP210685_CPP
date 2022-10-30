<center>
<b>UNIDAD 2 ESTRUCTURAS DE CONTROL Y CICLOS</b>
</center>  
  
___
  
<center>
<b>TAREA 1 "TRAMOS" </b>  

*Objetivo: Calcular el impuesto a pagar y la renta anual*  
**CÓDIGO**

</center>

```
#include <iostream>
#include <iostream>
using namespace std;

int main()
{
    int renta;
    int ranual;
    int impuesto;

    cout <<"¿Cuál es su renta?" << endl;
    cin>> renta;

    if (renta >= 1)
    {
        if (renta <= 10000)
        {
            impuesto = renta * 0.05;
        }
        else if (renta >= 10000 && renta <= 20000)
        {
            impuesto = renta * 0.15;
        }
        else if (renta >= 20000 && renta <= 35000)
        {
            impuesto = renta * 0.20;
        }
        else if (renta >= 35000 && renta <= 60000)
        {
            impuesto = renta * 0.30;
        }
        else
        {
            impuesto = renta * 0.45;
        }
    }
    ranual = renta * 12;
    printf ("Su renta anual es %d \n", ranual);
    printf ("El impuesto a pagar es de %d \n", impuesto);
}
```  
<center> 

**RESULTADO**
<div align="center">
<img alt="Yop" src="Imagenes\tramos1.png" width= '400'>
</div>  
<div align="center">
<img alt="Yop" src="Imagenes\tramos2.png" width= '400'>
</div>  
<div align="center">
<img alt="Yop" src="Imagenes\tramos3.png" width= '400'>
</div>  
<div align="center">
<img alt="Yop" src="Imagenes\tramos4.png" width= '400'>
</div>  
<div align="center">
<img alt="Yop" src="Imagenes\tramos5.png" width= '400'>
</div>  
</center>

___
<center>
<b>TAREA 2 "PUNTAJE" </b>  

*Objetivo: Evaluar empleados mediante los puntos que obtuvieron*  
**CÓDIGO** 
</center>

```
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float p= 0.0f;
    int r;
    printf("¿cuál es su puntaje? \n");
    scanf("%f", &p);
    
    if (p == 0.0f || p == 0.4f || p >= 0.6f)
    {
        printf("puntuacion valida \n");
        if (p == 0.0f)
        {

            r = 2400 * 0.0f;
            printf("Tu nivel es INACEPTABLE, has consegido %d", r);
        }
        else if (p == 0.4f)
        {
            r = 2400 * 0.4f;
            printf("Tu nivel es ACEPTABLE, has consegido %d", r);
        }
        else
        {
            r = 2400 * p;
            printf("Tu nivel es MERITORIO, has consegido %d", r);
        }
    }
    else
        printf("puntuacion invalida ");
    return 0;
    }
```
<center>

**RESULTADO**
<div align="center">
<img alt="Yop" src="Imagenes\pun1.png" width= '600'>
</div> 
<div align="center">
<img alt="Yop" src="Imagenes\pun2.png" width= '600'>
</div>  
<div align="center">
<img alt="Yop" src="Imagenes\pun3.png" width= '600'>
</div>  
<div align="center">
<img alt="Yop" src="Imagenes\pun4.png" width= '600'>
</div>  
</center>

___
<center>
<b>TAREA 3 "JUEGOS" </b>  
 
 *Objetivo: Calcular automaticamente el costo a pagar por la entrada a una sala de videojuegos*  
 **CÓDIGO**
 </center>

 ```
 #include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int edad;

    cout <<"Dime tu edad y te diré cuando debes pagar por tu entrada a la sala de juegos"<< endl;
    cin >> edad;
    if (edad >= 0 && edad < 4)
    {
        cout <<"Entrada gratuita"<< endl;
    }
    else if (edad >= 4 && edad < 18)
    {
        cout <<"El costo de tu entrada es de $5 pesos"<< endl;
    }
    else
    {
        cout <<"El costo de tu entrada es de $10 pesos"<< endl;
    }
    return 0;
}
```
 **RESULTADO**
<div align="center">
<img alt="Yop" src="Imagenes\juegos1.png" width= '600'>
</div>  
<div align="center">
<img alt="Yop" src="Imagenes\juegos2.png" width= '600'>
</div>  
<div align="center">
<img alt="Yop" src="Imagenes\juegos3.png" width= '600'>
</div>  
<div align="center">
<img alt="Yop" src="Imagenes\juegos4.png" width= '600'>
</div>  


___
<center>
<b>TAREA 4 PIZZAS</b>

*Objetivo: Preguntar por la pizza que desea el usuario* 

**CÓDIGO**
</center> 

```
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string tipo = " ";
    string ingrediente = " ";
    cout << "¿Qué tipo de pizza quieres?" << endl;
    cin >> tipo;
    if (tipo == "vegetariana" || tipo == "carne")
    {

        if (tipo == "vegetariana")
        {
            cout << "Los ingredientes extra para la pizza vegetariana son: \n 1.Pimiento \n 2.Tofu"<< endl;
            cout << "¿Qué ingrendiente extra deseas para tu pizza vegetariana...?"<< endl;
            cin >> ingrediente;
            if (ingrediente == "pimiento")
            {
                cout << "Tu pizza es vegetariana y como ingrediente extra lleva salsa de tomate, mozzarella y pimiento" << endl;
            }
            else if (ingrediente == "tofu")
            {
                cout << "Tu pizza es vegetariana y como ingredientes extra lleva salsa de tomate, mozzarella y tofu " << endl;
            }

            else
            {
                cout << "Ingrediente inválido" << endl;
            }
        }
        if (tipo == "carne")
        {
            cout << "Los ingredientes extra para la pizza son: \n1.Peperoni \n2.Jamón \n3.Salmón" << endl;
            cout << "¿Qué ingrediente extra deseas para tu pizza de carne...?" << endl;
            cin >> ingrediente;
            if (ingrediente == "peperoni")
            {
                cout << "Tu pizza es de carnes y como ingredientes extra lleva salsa de tomate, mozzarella y peperoni" << endl;
            }
            else if (ingrediente == "jamón")
            {
                cout << "Tu pizza es de carnes y como ingredientes extra lleva salsa de tomate, mozzarella y jamón" << endl;
            }
            else if (ingrediente == "salmon")
            {
                cout << "Tu pizza es de carnes y como ingredientes extra lleva salsa de tomate, mozzarella y salmón" << endl;
            }
            else
                cout << "Ingrediente inválido" << endl;
        }
    }
    else
        cout <<"no válido" << endl;
    return 0;
}
```
<center> 

**RESULTADOS**

<div align="center">
<img alt="Yop" src="Imagenes\pizza1.png" width= '500'>
</div>  
<div align="center">  
<img alt="Yop" src="Imagenes\pizza2.png" width= '500'>
</div> 
<div align="center">
<img alt="Yop" src="Imagenes\pizza3.png" width= '500'>
</div> 
<div align="center">
<img alt="Yop" src="Imagenes\pizza4.png" width= '500'>
</div> 
</center>  

___
<center>
<b> TAREA 5 TEMPERATURAS </b> 

*Objetivo: Sacar el promedio de las temperaturas dadas*  
 
**CÓDIGO**
</center>  

```
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    double temperatura;
    int cont;
    double acum;
    double promedio;
    for (int i = 1; i <= 6; i++)
    {
        cout << "Ingrese la temperatura" << endl;
        cin>> temperatura;
        acum = acum + temperatura; 
        cont= cont+1;
        promedio = acum/cont;
        
        
    }
    cout <<"El promedio de temperaturas es: " << promedio << endl;
    return 0;
}
```
<center> 

**RESULTADOS**

<div align="center">
<img alt="Yop" src="Imagenes\temp1.png" width= '400'>
</div>  
<div align="center">  
<img alt="Yop" src="Imagenes\temp2.png" width= '400'>
</div> 

</center>

___
<center>
<b> TAREA 6 PRODUCTOS </b>  

*Objetivo: Realizar un programa donde se pueda ingresar un total indefinido de productos y nos de el precio total a pagar*  
 

**CÓDIGO**
</center>  

```
#include <iostream>
using namespace std;

int main()
{
    double precio;
    int cont;
    int cuenta;
    cuenta=0;
    do
    {
        cout << "Ingresa el precio del producto." << endl;
        cin >> precio;
        cuenta = cuenta + precio;
        cont = cont + 1;
    } while (precio != 0);
    cout << "El total de cuenta es: " << cuenta << endl;
    return 0;
}
```
<center>  

**RESULTADOS**

<div align="center">
<img alt="Yop" src="Imagenes\produc1.png" width= '400'>
</div>  
<div align="center">  
<img alt="Yop" src="Imagenes\produc2.png" width= '400'>
</div> 
</center>  

___
<center>
<b> TAREA 7 BINARIO </b>  

*Objetivo: Convertir números del sistema decimal al sistema binario*  
 
**CÓDIGO**
</center>  

```
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    string binario = "";

    cout << "Ingresa un número para convertirlo a binario" << endl;
    cin >> n;

    while (n > 0)
    {
        if (n % 2 == 0)
        {
            binario = "0" + binario;
        }
        else
        {
            binario = "1" + binario;
        }
        n = n / 2;
    }

    cout << "El numero convertido a binario es: " << binario << endl;
}
```
<center>  

**RESULTADOS**

<div align="center">
<img alt="Yop" src="Imagenes\bin1.png" width= '500'>
</div>  
<div align="center">  
<img alt="Yop" src="Imagenes\bin2.png" width= '500'>
</div> 
<div align="center">  
<img alt="Yop" src="Imagenes\bin3.png" width= '500'>
</div> 

</center>


