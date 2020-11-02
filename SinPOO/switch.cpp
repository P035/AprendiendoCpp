#include <iostream>
using namespace std;

int main(){
    /*
    Switch es una estructura de control que se usa para evaluar
    los posibles valores de una variable y ver que hacer si uno de esos casos sucede
    */

    unsigned int vidas;
    cin >> vidas;

    //Para usar switch uno debe poner la palabra switch seguida de la variable que será evaluada
    switch(vidas)
    {
        //Dentro del switch uno pone la palabra case para hacer referencia a los valores posibles luego van dos puntos
        case 7:
            cout << ":o ERES UN GATOOOOO" << endl;
            //Despues de poner la accion a ejecutar si sucede ese caso hay que poner un break si no se ejecutarian los otros casos
            break;
        
        case 18:
            cout << "Wow tienes muchas vidas" << endl;
            break;;
        
        case  1:
            cout << "Eres un humano común y corriente" << endl;
            break;
        
        //Si ningun caso se cumple se puede ejecutar un caso default
        default:
            cout << "Que bueno que tengas más de una vida";
            break;
    }

    return 0;
}