#include <iostream>
using namespace std;

class Numerito{

	public:
		void Subir(){
			numerito++;
			cout << "El número actual es: " << numerito << endl;		
		}
		void Bajar(){
			numerito--;
			cout << "El número actual es: " << numerito << endl;
		}
	private:
		int numerito = 0;
		friend void Resetear(Numerito &objeto);
};

void Resetear(Numerito &objeto){
	objeto.numerito = 0;
	cout << "Número actual es 0" << endl;
}

int main(){

	/*
	 * La palabra friend sirve para hacer que funciones privadas de una clase
	 * no sean miembros de una clase y en este tipo de funciones uno puede acceder a todos los
	 * miembros de una clase.
	 *	
	 * Cuando uno crea una función firend uno tiene que poner como argumento un objeto de la clase y este
	 * tiene que estar pasado por referencia, porque solo así uno podrá editar y usar los miembros privados
	 * de una clase. 
	 */
	
	int opcion;
	Numerito num;
	do{
		cin >> opcion;
		switch(opcion){
			case 1:
				opcion = 0;
				num.Bajar();
				break;
			case 2:
				num.Subir();
				opcion = 0;
				break;
			case 3:
				Resetear(num);
				opcion = 0;
				break;
			default:
				opcion = 5;
				break;
		}		
	}while(opcion != 5);
	return 0;
}
