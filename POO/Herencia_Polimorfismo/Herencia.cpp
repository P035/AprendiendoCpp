#include <iostream>
using namespace std;

class Clase_Madre{

	public:
		void saludar(){
			cout << "Hola!" << endl;
		}

};

class Clase_Hija : public Clase_Madre{
	public:
		Clase_Hija(){
			cout << "Creando nuevo objeto hijo de la clase madre" << endl;
		}
};

int main(){

	/*
	 * La herencia, es uno de los pilares de la programación orientada a objetos y funciona con
	 * la lógica de clases padres y clases hijas.
	 *
	 * Escencialmente lo que se hace en la herencia es crear una clase Padre con ciertos métodos
	 * y atributos y luego con esta sintaxis: class Hija : public  Padre, declaramos que la clase
	 * hija hereda todos los miembros  públicos y protejidos de la clase Padre.
	 *
	 * Los miembros protejidos son miembros de una clase que son esencialmente privados, pero
	 * se pueden acceder de cualquier clase hija.
	 */

	Clase_Hija objeto_hijo;
	objeto_hijo.saludar();
	
	return 0;

}
