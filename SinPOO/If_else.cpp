#include <iostream>
using namespace std;

int main(){

    /*
    If - else - else if son estructuras de control que sirven
    para ver si algo sucede en una parte del código    
    */

    cout << "Hola veamos si eres mayor de edad: ";
    unsigned int edad;
    cin >> edad;

    //Ahora usare if-else-else if para ver si es mayor de edad
    if(edad >= 18){
        cout << "Felicidades eres mayor de edad!" <<  endl;
    }
    
    else if (edad == 17)
    {
        cout << "Eres casi mayor de edad, solo te queda esperar un poco" << endl;
    }

    else
    {
        cout << "Te faltan algunos años pero espera y lo serás" << endl;
    }
    
    return 0;
}