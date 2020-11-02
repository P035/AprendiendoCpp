#include <iostream>
using namespace std;

//Creamos la clase robot
class robot{
	//Creamos los atributos privados
	private:
		string nombre;
		string creador;
		int eficiencia;
		string funcion;
		//Declaramos los sets como privados para que solo se puedan ejecutar con el constructor
		void SetEficiencia(){
			cout << "En la caja de su robot a la izquierda aparece un número (su eficiencia eléctrica)  que número aparece ahí? ";
			cin >> this->eficiencia;
		}
		void SetFuncion(){
			cout << "Cual es la funcion de su robot (pilotar naves, labores del hogar, medicina, etc)? ";
			cin >> this->funcion;
		}
			
	//Creamos el constructor y los atributos públicos
	public:
		//Declaramos el constructor
		robot(string nombre, string creador){
			this->nombre = nombre;
			this->creador = creador;
			this->SetEficiencia();
			this->SetFuncion();
		}
		//Declaramos los gets y una funcion saludar		
		string GetNombre(){
			return this->nombre;
		}
		string GetCreador(){
			return this->creador;
		}
		int GetEficiencia(){
			return this->eficiencia;
		}
		string GetFuncion(){
			return this->funcion;
		}

		void Saludar(){
			cout << "Hola!";
		}

	
};

int main(){
	/*
	 * Una de las mejores maneras de implementar encapsulamiento es con constructores.
	 * Esto se hace creando los atributos privados y luego crear un constructor que
	 * tome como argumentos los valores que luego se le asignaran a los atributos.
	 * Si uno hace esto uno podrá asignarle solo una vez el valor a ese atributo privado.
	 */
	string nombre;
	cout << "Hola! como quieres llamar a tu robot? ";
	cin >> nombre;
	robot P035(nombre, "Familia Vargas Barrera");
	cout << endl;
	cout << P035.GetNombre() << " mira ahí esta la cele, vamos a mostrarle tu configuración!" << endl << "Hola cele! mira esto..." << endl;
	P035.Saludar();
	cout << " Soy " << P035.GetNombre() << " mi función es " << P035.GetFuncion() << " y mi creador es " << P035.GetCreador() << endl;

	return 0;
}
