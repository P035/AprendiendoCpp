#include <iostream>
using namespace std;

int main(){

    /*
    El operador sizeof devuelve la cantidad de bytes que se
    almacenan en una variable.
    */

    int i;
    double d;
    char c;
    string s;
    bool b;

    //al hacer esto devuelve la cantidad default de datos que se entrega al declarar una variable
    cout << sizeof(i) << endl << sizeof(d) << endl << sizeof(c) << endl << sizeof(s) << endl << sizeof(b) << endl;

    return 0;
}