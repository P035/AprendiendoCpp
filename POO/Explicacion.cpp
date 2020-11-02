#include <iostream>
using namespace std;

//Para declarar una clase uno usa la palabra recervada class
class Persona{

	/*
	 * Para definir atributos y metodos uno tiene que antes usar
	 * un modificador de acceso.
	 *
	 * Un modificador de acceso define si el programa en la función main
	 * podrá acceder a ese metodo o atributo.
	 *
	 * Existe el modificador public, private y protected:
	 * 	public : se puede acceder desde cualquier parte del código.
	 * 	private : solo la misma clase puede acceder.
	 * 	protected : solo la misma clase o una clase que herda de esta puede acceder.
	 *
	 * A continuacion declarare los atributos y metodos public.
	 */

	public:
		string nombre;
		int edad;
		void saludar(){
			//La palabra this-> hace referencia al objeto actual, por lo que al decir
			//this-> nombre se refiere al atributo nombre del objeto actual. 
			cout << "Hola! Mi nombre es " << this->nombre  << " y tengo " << this->edad << endl;
		}
		//Para que el usuario le pueda asignar un valor a un atributo private se pueden usar métodos publicos
		void SetNumero(int run){
			this->NumeroTelefonico = run;
		}
		void SetTrabajo(){
			cout << "Cual es tu trabajo? ";
			cin >> this->Trabajo;
		}
		//Y para mostrarlos creare el método presentarse
		void Presentarse(){
			cout << "Mi nombre es " << this->nombre << ", trabajo siendo " << this->Trabajo << ".\nSi quieres contactarme llama a este número: " << this->NumeroTelefonico << endl;
		}
	private:
		int NumeroTelefonico;
		string Trabajo;
	

//A diferencia de una función se pone un ; al final de los corchetes
};

int main(){

	/*
	 * La programacion orientada a objetos es un paradigma de la programación
	 * que funciona con la idea de clases y objetos.
	 *
	 * Una clase es un modelo el cual tiene atributos y metodos. 
	 *
	 * Por ejemplo una clase persona:
	 * 	Tiene como atributos su edad, nombre
	 * 	Y como metodos saludar, caminar y comer
	 *
	 * Los atributos son variables que tiene una clase y los métodos son funciones que tiene una
	 * clase.
	 *
	 * Un objeto se crea en base a una clase que ya existe. Esto es como si yo creara el
	 * objeto Ignacio en base a la clase persona.
	 */

	//Para crear un objeto primero se pone el nombre de la clase y luego el nombre del objeto
	Persona ignacio; 
	//Para asignar valores a atributos o para usar metodos se pone el nombre de la clase, luego un punto y finalmente el nombre del atributo/método
	ignacio.nombre = "Ignacio Vargas Barrera";
	ignacio.edad = 12;
	ignacio.SetNumero(50088889);
	ignacio.SetTrabajo();
	ignacio.Presentarse();
	return 0;
}
