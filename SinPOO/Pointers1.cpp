#include <iostream>
using namespace std;

int main(){

    /*
    Con este programa creare 2 variables y sus dos respectivos pointers.
    Luego usaré el valor que está relasionado con la direccion que se almacenó en los pointers.
    */

    //Primero se declaran las 2 variables
    int i;
    int b;
    //Luego los pointers
    int *ip = &i;
    int *bp = &b;
    //Finalmente cambio el valor de las variables i y b a travez de sus pointes.
    *ip = 4;
    *bp = 4;
     
    cout << i << endl << b << endl;

    return 0;
}