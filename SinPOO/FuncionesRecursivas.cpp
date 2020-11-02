#include <iostream>
using namespace std;

//Toma como argumetos la cantidad de tablas que se harán y la el número de tabla actual
int CrearTablas(int tablas, int actual){

    //Si el número de tablas + 1 = actual se acabara el programa
    if(tablas + 1 == actual){
        return 0;
    }
    //Si no, se creará una nueva tabla
    else{
        //Creo la tabla
        for(int i = 1; i <= 10; i++){
            cout << actual << " X " << i << " = " << actual * i << endl;
        }
        cout << endl;
        //Ejecuto de nuevo la funcion
        return CrearTablas(tablas, actual + 1);
    }
}

int main(){
    /*
    Una funcion recursiva es una funcion que se llama a
    si misma, por lo que se ejecutaria toda la pieza de código
    de nuevo
    */

    CrearTablas(5, 1);

    return 0;
}