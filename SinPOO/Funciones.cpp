#include <iostream>
using namespace std;

/*
Para Declarar una funcion hay que definir tres cosas importantes

1. El tipo que devuelve. Con la palabra reservada return las funciones pueden devolver valores y para hacer esto uno tiene que declarar
el tipo de dato que devolverá la funcion. Si la funcion no devuelve ningun dato se declara como void.
2. El nombre de la funcion. Esto va seguido de unos paréntesis
3. Los argumentos. Dentro de los paréntesis uno puede declarar argumentos, estos son variables que se les asignara el valor cuando se ocupe
la funcion.
*/

//Esta funcion es tipo int y toma un argumento llamado x que también es int
int Duplicar(int x){
    return x * 2;
}
//Una funcion solo puede ser usada si se declaro previamente. Entonces si uno quiere asignar despues el funcionamiento de la funcion se puede hacer así
int Restar2(int x);

int main(){
    
    /*
    Las funciones son como piezas de código que se declaran fuera del main y que uno puede usar más de
    una vez. Gracias a las funciones el codigo es más corto porque se pueden reutilizar esas piezas de código
    */

    int y = 4;

    cout << Duplicar(y) << endl;
    cout << Restar2(y) << endl;
    return 0;
}

//Aqui asignare el funcionamiento de la funcion Restar2
int Restar2(int x){
    return x - 2;
}