#include <iostream>
using namespace std;

/*
 * Para que el código sea más limpio y más facil de escribir tenemos dos principales herramientas la POO y las funciones, pero es notorio
 * que estas tienen ciertas limitaciones. Por ejemplo una función que tiene parametros int se límita a poder usar números decimales.
 *
 * Tomando el ejemplo anterior como referencia, en este código haremos una simple suma de dos números, pero que con templates pueda recibir numeros int o double.
 */

//The Function templates o traducido del ingles las plantilas de funciones son funciones como cualquier otra, pero con una sintaxis que hace posible que en los parámetros
//se reciba cualquier tipo de dato.

//Para declarar un template tenemos que usar la palabra recervada template seguido de <class NombreDeClase> lo que class significa aquí es el tipo de dato que le será entregado.

template <class T>
//Ahora declaramos la función
T sumar(T pValor, T sValor){

	return pValor + sValor;
}

int main(){

	//Ya habiendo declarado la función, podemos usarla con cualquier tipo de dato que se pueda sumar :)
	cout << sumar(2,3) << endl;
	cout << sumar(8.1, 0.5) << endl;

	return 0;
}
