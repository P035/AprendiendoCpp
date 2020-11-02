#include <iostream>
using namespace std;

int main(){

    /*
    Los arrays bidimensionales son arrays que se ordenan en columnas y filas
    Estos se declaran igual que los arrays unidimensionales, pero en vez de declarar
    el largo de una dimension se declara el de dos y así se pueden ir agregando más dimensiones.
    */

    //Al declararse el primer valor hace referencia a la cantidad de filas y el segundo a las columnas.
    char Tablero[3][3] = {{'+','+','+'},{'+','+','+'},{'+','+','+'}};

    //Una manera de acceder a los valores es usando un for anidado
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << Tablero[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}