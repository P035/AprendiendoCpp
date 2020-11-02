#include <iostream>
using namespace std;

//La función Elevar toma por referencia la variable a elevar y por valor el número por el que se elevará
void Elevar(int *variable, int numero){
    //Como cualquier otro puntero para usar el valor asociado a su direccion se tiene que usar el *
    int original = *variable;
    for(int i = 1; i < numero; i++){
        *variable = *variable * original;
    }
}

int main(){

    /*
    Cuando se llama a una funcion hay 2 maneras para pasar
    argumentos. La primera es por valor y es cuando al llamar
    a la funcion esta copia el valor de una variable o el valor ingresado entre
    los paréntesis. La segunda es por referencia y es cuando se toma la variable que se pone
    como argumento y cualquier cambio que se le haga a esta dentro de la función alterará el valor
    de la variable original.

    Para pasar por referencia se utilizan los pointers y este es un ejemplo de esto.
    */

    int x = 4;
    Elevar(&x, 3);
    cout << x << endl;

    return 0;
}