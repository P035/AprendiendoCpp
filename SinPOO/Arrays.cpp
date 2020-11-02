#include <iostream>
using namespace std;

int main()
{
    /*
    Los arrays o listas son estructuras de datos con las cuales
    uno puede almacenar más de un dato del mismo tipo en una sola variable. 
    */

    //Hay 2 formas principales de declarar un array

    /*
    Declararlo junto a sus valores:
    Primero uno declara el tipo del array, luego uno dice el nombre
    seguido por la cantidad de espacios que tendrá el array
    luego uno declara los valores dentro de {}
    */
    int i[6] = {1,2,3,4,5,6};

    /*
    Declararlo solo y luego asignar los valores:
    Primero uno declara el tipo de de array, el nombre y los espacios,
    luego se asigna cada valor a cada espacio del array. Esto
    se puede hacer con un bucle for o de forma manual.
    (En informatica se inicia contando desde el 0)
    */
    int x[6];
    for(int i = 0; i < 6; i++){
        x[i] = i;
    }
    
    return 0;
}