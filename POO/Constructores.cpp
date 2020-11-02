#include <iostream>
using namespace std;

//La clase bebe tendra como constructor llorar (porque todos los bebés al nacer lloran xd)
class Bebe{
	public:
		Bebe(){
			cout << "BUAAAAA BUAAAA ;c" << endl;
		}
};
//Los contructores tambien pueden tener parametros, estos se declaran cuando uno crea una instancia
class Animal{
	public:
		Animal(string raza){
			if(raza == "gato"){
				cout << "Miau!" << endl;
			}
			else if(raza == "perro"){
				cout << "Wauf!" << endl;			
			}
			else if(raza == "huron"){
				cout << "No se como hace el huron, pero soy uno!" << endl;
			}
			else{
				cout << "No conozco el animal, pero acabo de nacer!" << endl;
			}
		}
};

int main(){
	/*
	 * Los constructores son métodos de una clase que se inician cade vez
	 * que se crea una instancia de esta clase. Estos tienen que cumplir con 2
	 * características. Tienen que ser publicos, no puede tener un tipo y tienen que tener el mismo nombre que la clase.
	 */

	//Entonces ahora yo solo creo a un bebe y llorará al instante
	Bebe PintiBebe;
	
	string x;
	cout << "Que animal quieres ser? ";
	cin >> x;
	//Como cualquier otro parametro va entre paréntesis
	Animal PintiAnimal(x);
	return 0;
}
