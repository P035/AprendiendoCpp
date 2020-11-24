#include <iostream>
using namespace std;

class Robot{

	private:
		string nombre;
		int numero_de_serie;
		string Capacidad_energia;
		char clave_de_permiso[4];
		bool Verificacion(char clave[4]){
			if (clave[0] == '9' or clave[0] == '1'){
				if (clave[3] == '7' or clave[3] == '4'){
					return true;
				}
				return false;
			}
			else{
				return false;
			}
		}

	public:
		Robot(){
			cout << "Encendiendo por primera vez, ingrese los datos iniciales." << endl;
			cout << "Nombre: ";
			cin >> nombre;
			cout << "Número de serie (aparece en la esquina superior de la tapa de su caja): ";
			cin >> numero_de_serie;
			cout << "Capacidad de energía de su hogar: ";
			cin >> Capacidad_energia;
			cout << endl << "Para activar su robot se necesita la clave que entega el gobierno (si no tiene una consigala en www.robotlegal.com): ";
			cin >> clave_de_permiso;
			if(Verificacion(clave_de_permiso)){
				cout << "Robot verificado con éxito." << endl;
			}
			else{
				cout << "Clave no reconocida. El robot no iniciara hasta tener una clave válida." << clave_de_permiso << endl;
			}
		}
};

class Domestico : public Robot{

	private:
		string tareas;
		int Cantidad_Tareas(){
			int cantidad = 1;
			for(char i : this->tareas){
				if(i == ','){
					cantidad++;
				}
			}
			return cantidad;
		}

	public:
		Domestico(){
			cout << "Ingrese la lista de tareas que hará su robot (sin espacios y se parado por comas): ";
			cin >> tareas;
			cout << "Lista de tareas guardada!" << endl;
		}
		void Tareas(){
			tareas += ",";
			string Tareas_que_Hacer[Cantidad_Tareas()];
			string memoria = "";
			int index = 0;
			for(char i : tareas){
				if(i != ','){
					memoria += i;
				}
				else{
					Tareas_que_Hacer[index] = memoria;
					memoria = "";
					index++;
				}
			}
			for(int i = 0; i < Cantidad_Tareas(); i++){
				if(i == 0){
					cout << "Primero voy a " << Tareas_que_Hacer[i] << endl;
					continue;
				}
				if(Tareas_que_Hacer[i] != ""){
					cout << "Ahora voy a " << Tareas_que_Hacer[i] << endl;
				}
			}
		}
};

int main(){

	/*
	 * Cuando una clase hereda todos los métodos públicos de otra clase esta también
	 * hereda el constructor/destructor de la clase padre.
	 * 
	 * En este ejercicio lo representaré con robots.
	 */

	Domestico P035;
	P035.Tareas();
	return 0;
}
