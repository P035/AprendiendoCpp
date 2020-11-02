#include <iostream>
using namespace std;

int main(){

    /*
    En c++ hay varios tipos de bucles. Con estos uno puede 
    repetir una accion mientras una condicion se cumpla.
    */

    //Bucle while
    int i = 1;
    while(i <= 5)
    //Esto se ejecutara mientras que i sea menor o igual que cero
    {
        cout << i << endl;
        i++;
    }

    //Bucle do-while
    i = 1;
    do{
    //Es muy similar al bucle while, pero este ejecuta la acción primero y luego revisa si se cumple la condicion
        cout << i << endl;
        i++;
    }while(i <= 5);

    //Bucle for
    for(int i = 1; i <= 5; i++)
    /*
    Este bucle es de los más confusos dado a que uno declara
    dentro del bucle la variable que será el contador.
    Dentro de los parentesis van 3 partes principales:
    (1.Se declara la variable contador 2. Se dice la condición 3. Se dice como incrementará/decrecerá el valor del contador)
    */
    {
        cout << i << endl;
    }

    return 0;
}