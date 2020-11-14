//============================================================================
// Name        : ComposicionDeClases.cpp
// Author      : P035
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "ListaRecordatorios.h"
using namespace std;

int main() {
	/*
	 * En c++ con compocision se refiere a en una clase
	 * usar dentro otras clases. Por ejemplo uno puede crear una clase llamada
	 * lista de recordatorios. Esta clase ordena otros objetos llamados recordatorios
	 * dentro de si.
	 *
	 * Entonces lo que la compocision hace es crar clases que tengan como
	 * atributos otros objetos. Para hacer esto vamos a usar el mismo ejemplo
	 * y lo haremos con una clase externa llamada agenda.
	 */
	cout << "!!Composición de clases!!" << endl; // prints !!Composición de clases!!
	ListaRecordatorios Agenda;
	while(1){
		int opcion;
		cout << "Opciones:" << endl;
		cout << "1. Agregar un nuevo recordatorio" << endl;
		cout << "2. Ver todos mis recordatorios" << endl;
		cout << "3. Ver un recordatorio en específico" << endl;
		cout << "4. Eliminar todos los recordatorios" << endl;
		cout << "5. Cerrar (se eliminaran automaticamente todos los recordatorios)" << endl;
		cout << ": ";
		cin >> opcion;
		if(opcion == 1){
			string Motivo;
			string Fecha;
			cout << endl << "Que actividad quieres guardar en este recordatorio?" << endl;
			cout << ": ";
			cin >> Motivo;
			cout << "Que fecha quieres guardar en este recordatorio?" << endl;
			cout << ": ";
			cin >> Fecha;
			Agenda.setNuevoRecordatorio(Motivo, Fecha);
			cout << endl;
		}
                else if(opcion == 2){
                	cout << endl;
                        Agenda.getRecordatorios();
                        cout << endl;
                }
                else if(opcion == 3){
 	               cout << endl;
                       int recordatorio;
                       cout << "Que número tiene el recordatorio que quieres ver?" << endl;
                       cin >> recordatorio;
		       recordatorio--;
                       Agenda.getRecordatorio(recordatorio);
                       cout << endl;
		}
		else if(opcion == 4){
			cout << endl;
			Agenda.EliminarRecordatorios('s');
			cout << endl;
		}
		else if(opcion == 5){
			cout << "Bye!" << endl;
			break;
		}
		else{
			cout << endl;
			Agenda.getRecordatorios();
			cout << endl;
		}
	}
	return 0;
}
