#include <iostream>
using namespace std;

class Receta{
	
	//Esta clase contendra un método que es preparar y dos atributos llamados nombre_receta e ingredientes.	

	private:
		string nombre_receta;
		string ingredientes;

	public:
		Receta(string nombre_receta, string ingredientes){
			
			/*
			 * Si yo quiero asignar el argumento nombre_receta al miembro privado nombre_receta se
			 * producirá un error, por lo tanto para asignar el valor de ese argumento uno podría 
			 * usar el puntero this.
			 */
				
			this->nombre_receta = nombre_receta;
			this->ingredientes = ingredientes;
		}
		void Preparar(){
			/* Como dije anteriormente el puntero this puede acceder a todos los miembros privados,
			 * pero en este caso al no haber una variable con la cual se pueda confundir uno puede no
			 * usarlo.
			 */
			cout << "Primero añadire todos estos ingredientes: " << this->ingredientes << endl;
			cout << "Ahora lo cocinare!" << endl;
			//Ahora usare el atributo nombre_receta sin tener que acceder a este con el puntero this.
			cout << "Listo! Terminé este " << nombre_receta << endl; 
	}
};

int main(){
	
	/*
	 * Dentro de las clases siempre existe el puntero llamado this. Este puntero hace referencia a la
	 * instancia actual de la clase. Entonces con este puntero uno puede a acceder a los atributos y métodos
	 * de lo que será la instancia de la clase cuando se cree algun objeto.
	 */

	string nombre;
	string ingredientes;
	cout << "Dime el nombre de la receta: ";
	cin >> nombre;
	cout << "Dime los ingredientes de la receta: ";
	cin >> ingredientes;
	Receta receta(nombre, ingredientes);
	receta.Preparar();

	return 0;
}
