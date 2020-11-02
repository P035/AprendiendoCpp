#include <iostream>
using namespace std;

int main(){
    /*
    En este programa almacenare dentro de una variable
    la direccion de memoria, a esto se le llaman pointers.

    Como los pointers son variables tienen que ser declarados y cuando se ponen los nombres
    tiene que ir un asterisco antes:
    int *DirecionInt;
    float *DirecionFloat;
    char *DirecionChar;
    double *DirecionDouble;
    bool *DireccionBolean;
    string *DireccionString;
    */

    //Declaro las variables con sus respectivos valores
    int i = 1;
    double d = 1.1;
    float f = 1.5;
    string s = "hola";
    bool b = false;

    //Declaro los pointers
    int *DireccionInt;
    float *DireccionFloat;
    double *DireccionDouble;
    bool *DireccionBolean;
    string *DireccionString;

    //Asigno los valores a los pointers
    DireccionInt = &i;
    DireccionFloat = &f;
    DireccionDouble = &d;
    DireccionBolean = &b;
    DireccionString = &s;
    
    cout << "DireccionInt " << DireccionInt << endl << "DireccionString " << DireccionString << endl << "DirecionDouble " << DireccionDouble << endl << "DireccionBoolean " << DireccionBolean << endl << "DireccionFloat " << DireccionFloat << endl;
    
    //Si uno muestra en pantalla a un pointer con un azterisco antes muestra el valor original de la variable
    cout << *DireccionString << endl; 
    
    return 0;
}