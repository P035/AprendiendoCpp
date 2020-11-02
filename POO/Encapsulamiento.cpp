#include <iostream>
using namespace std;

class Animal{
	//Voy a declarar como privado el nombre, la raza y la edad del perro
	private:
		string nombre;
		string raza;
		int edad;
	//Para poder definir los atributos y usarlos vamos a usar metodos
	public:
		void SetNombre(){
			cout << "Cual es tu nombre? ";
			cin >> nombre;
		}
		string GetNombre(){
			return nombre;
		}
		void SetRaza(){
			cout << "Cual es tu raza? ";
			cin >> raza;
		}
		string GetRaza(){
			return raza;
		}
		void SetEdad(){
			cout << "Cuantos años tienes? ";
			cin >> edad;
		}
		int GetEdad(){
			return edad;
		}
};

int main(){

	/*
	 * El encapsulamiento se implementa en la programación orientada a objetos
	 * para que el metodo main solo pueda acceder a ciertos metodos/atributos
	 *
	 * Por ejemplo, si uno tiene una clase auto y esta tiene
	 * un atributo marca y no le importa que se pueda
	 * acceder desde cualquier parte del código se le asignara que es public y esto se 
	 * haría así:
	 * 	class Auto{
	 * 		public:
	 * 			string marca;
	 * 	};
	 * En cambio si uno no quiere que se pueda acceder fuera de la clase
	 * uno lo hace privado y esto se hace así:
	 * 	class Auto{
	 * 		private:
	 * 			string marca;
	 * 	};
	 * Por ultimo si uno quiere que se pueda acceder solo en la clase o en una clase hija
	 * uno lo hace protected y esto se hace así:
	 * 	class Auto{
	 *		protected:
	 *			string marca;
	 * 	};
	 */

	Animal mascota;
	mascota.SetNombre();
	mascota.SetRaza();
	mascota.SetEdad();

	cout << "Hola soy " << mascota.GetNombre() << ", tengo " << mascota.GetEdad() << " años y soy un " << mascota.GetRaza() << endl;
	
	/*
	 * Esto perimite hacer cambios en la implementación de métodos
	 * y atributos, sin afectar código externo.
	 */

	return 0; 
}
