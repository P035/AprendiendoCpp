#include <iostream>
using namespace std;

int sumar(int x, int z = 2){
    return x + z;
}
int main(){

    /*
    Los argumentos por defecto, son argumentos que se declaran con un valor predeterminado. Este valor
    se usara si no se le asigna ningun valor cuando se llame a la función              
    */
    
    //Declararemos una variable que almacenara el valor de 5 y otra el de 7
    int y, z; y = 5; z = 7;

    int result1 = sumar(y, z);
    int result2 = sumar(y);

    //Ahora imprimeros en pantalla la suma de y + z y luego la de y + 2 usando el valor default del parametro y
    cout << result1 << endl;
    cout << result2 << endl;

    return 0;
}