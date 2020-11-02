#include <iostream>
using namespace std;

//Crearemos una funcion llamada print y la sobrecargaremos para poder imprimir valores int, string, etc.

void print(string x){
    cout << x << endl;
}
void print(int x){
    cout << x << endl;
}
void print(double x){
    cout << x << endl;
}
void print(bool x){
    cout << x << endl;
}
void print(char x){
    cout << x << endl;
}



int main(){

    /*
    Las funciones sobrecargadas son funciones que se declaran más de una vez, pero con distintos parámetros.
    Ej:
      void PrintSuma(int x, int y);
      void PrintSuma(float x, float y);
    */

    print('a');
    print("Hola");
    print(5);
    print(true);
    print(6.7);
    
    return 0;
}

