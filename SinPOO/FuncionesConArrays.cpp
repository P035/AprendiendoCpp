#include <iostream>
using namespace std;

void Primos(int arr[], int tamano){

    /*
    Esta función imprime en pantalla todosnúmeros primos que hay 
    dentro del array que nos pasan al llamar a la función.
    */

    bool bolean = true;
    cout << "Los números primos son: ";
    for(int i = 0; i < tamano; i++){
        if(arr[i] == 2){
            cout << arr[i] << " ";
        }
        else if(arr[i] == 1){
            bolean = false;
        }
        else{
            if(arr[i] != 1){
                for(int x = 2; x <= 10; x++){
                    if(x != arr[i]){
                        if(arr[i] % x == 0){
                            bolean = false;
                            break;
                        }
                    }
                }
            }
            if(bolean == true){
                cout << arr[i] << " ";
            }
        }
        bolean = true;
    }
    cout << endl; 

}

int main(){
    int tam;
    cout << "--------------------------------------------" << endl;
    cout << "Bienvenido a tu analizador de números primos" << endl;
    cout << "--------------------------------------------" << endl << endl;
    cout << "Hasta que número quieres analizar? ";
    cin >> tam;
    int arr[tam];
    for(int i = 0; i < tam; i++){
        arr[i] = i + 1;
    }
    Primos(arr, tam);
}