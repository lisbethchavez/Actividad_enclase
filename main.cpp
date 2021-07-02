#include <iostream>
//funciones realizan un proceso y devuelven un valor

using namespace std;

//funcion que calcula la potencia de un numero
// 2 x 2 x 2 x 2 x 2

double potencia (double base, int exponente)
{
    double resultado = 1;
    for(int i=1; i<= exponente; i++)
    {
        resultado = resultado * base;
    }

    return resultado;
}

//funcion factorial(5) = 1x2x3x4x5

int factorial (int num)
{
    int fac=1;
    for(int i=1; i<=num; i++)
        fac=fac* i;
    return fac;
}

//funcion que calcula la serie

double sumaserie(int x)
{
    double suma=0;
            suma=x - (potencia(x,3) / factorial(3))
                    + (potencia(x,5) / factorial(5))
                    - (potencia(x,7) / factorial(7));
    return suma;
}

//funcion que recibe como parametros el nombre de una persona y su edad y devuelve un saludo, indicando ademas si es
// o no mayor de edad

string saludos(string nombre, int edad)
{
    string mensaje="Bienvenido " + nombre;
    if(edad>=18)
        mensaje=mensaje +  " ,usted es mayor de edad";
    else
        mensaje = mensaje + " ,usted es menor de edad";
    return mensaje;
}

//Una funcion recibe como parametros el nombre de una persona, el dia y mes de nacimiento.La funcion debe devolver el nombre
// de la persona, indicando el signo del zodiaco al que pertenece
//Ejemplo. Hola Juan, tu signo es acuario.

string signozodiacal(string nombre, int dianac, int mesnac)
{  //Aries (21 de mazo-20 de Abril)
    string mensaje="Hola " + nombre + ", ";
    if((mesnac==3 && dianac>=21) || (mesnac==4 && dianac<=20))
        mensaje+="tu signo del zodiaco es Aries";
    return mensaje;
}

int main() {
    cout<<endl<<"El factorial de 5 es "<<factorial(5);
    cout<<endl<<"El factorial de 5 es "<<factorial(6);
    cout<<endl<<"El factorial de 5 es "<<factorial(10);

    cout<<endl<<potencia(5,3);
    cout<<endl<<potencia(2,5);
    cout<<endl<<potencia(10,3);

    cout<<endl<<"La sumatoria de la serie es "<<sumaserie(5);

    cout<<endl<<saludos("Juan Gracia",20);
    cout<<endl<<saludos("Ana Isabel",10);
    cout<<endl<<saludos("Jose Maria",13);

    cout<<endl<<signozodiacal("Juan",22,3);

    return 0;
}
