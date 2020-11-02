#include <iostream>
using namespace std;

int main(){

    /*
    La memoria que usa nuestro programa se divide entre heap y stack.
    Stack es la parte de memoria en la cual se almacenan las variables y otros datos. Esta memoria es estatica y
    se gestiona sola.
    Heap es la parte no usada de la memoria la cual se puede usar para almacenar datos de una manera dinámica, pero
    uno tiene que gestionar la eliminacion de datos, porque se puede producir fugas de memoria.

    Para declarar un pointer al cual su el valor que contiene su direccion se
    almacenara en el Heap hay que usar la palabra new seguida del tipo de valor.
    Esto hará que el pointer será almacenado en el Stack como cualquier otra varible, pero
    el tanto la direccion como el valor que almacena estaran almacenados en el Heap
    */
    int *p = new int;

    //Declaramos el valor que se guardara en el heap
    *p = 5;

    //Lo usamos
    cout << *p << endl;

    //Y con la palabra delete libramos el espacio en memoria
    delete p;

    //Revisamos si el valor se elimino del Heap
    cout << *p << endl;

    return 0;
}
