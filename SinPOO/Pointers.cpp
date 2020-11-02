#include <iostream>
using namespace std;

int main(){
    /*
    Las variables son un espacio en memoria y gracias a los pointers
    uno puede acceder a la direccion de memoria. Esto se hace poniendo
    este signo (&) antes de la variable.
    Con este programa haré que el usuario ingrese su nombre,
    luego lo saludara y le imprimira en pantalla la direccion de memoria de la variable.
    */
    cout << "Hola! Cual es tu nombre ";
    string nombre;
    cin >> nombre;
    cout << "Hola " << nombre << endl;
    cout << "La direccion de memoria de tu nombre es " << &nombre << endl;
}