#include <iostream>
using namespace std;

int main()
{

    /*
    Cada variable tiene que tener asignado un tipo y estos
    son los principales tipos de datos:
    int = numeros enteros
    float = double = numeros decimales
    string = cadena de caracteres dentro de comillas dobles
    char = un caracter entre comillas simples
    */

    int i = 0;

    //float = 4 bytes, double = 8 bytes
    float y = 0.0;
    double d = 1.0;

    //para usar string hay que usar alguna libreria que contenga string
    string x = "HOLA";
    
    bool z = true;
    char f = 'c';

    /*
    Con estas palabras uno puede decidir ciertos atributos de
    las variables numericas:
    signed = esta palabra reservada define que una variable numerica puede contener numeros positvos y negativos
    unsigned = se ocupa para decir que una variable numerica solo puede contener numeros positivos
    short = le da la mitad del espacio normal que se le da a una variable
    long = le da el doble del espacio normal que se le da a una variable
    */

    unsigned short int w = 2;
    signed long int g = 2.5;

    return 0;
}