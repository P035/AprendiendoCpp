/*
 * ListaRecordatoriod.cpp
 *
 *  Created on: 27 Oct 2020
 *      Author: p035
 */

#include "ListaRecordatorios.h"
#include "Recordatorio.h"
#include <iostream>
using namespace std;

void ListaRecordatorios::setNuevoRecordatorio(string Motivo, string Fecha){
	if(NumeroActual <= 99){
		Recordatorios[NumeroActual].setRecordatorio(Motivo, Fecha);
		NumeroActual++;
	}
	else{
		cout << "Hay 100 recordatorios no pueden haber más! Deseas eliminar los recordatorios actuales (s/n)?" << endl;
		char op;
		cin >> op;
		EliminarRecordatorios(op);
	}
}
void ListaRecordatorios::getRecordatorios(){
	for(int i = 0; i < 100; i++){
		if(Recordatorios[i].getRecordatorio() != "vacío"){
			i += 1;
			cout << i << ": ";
			i -= 1;
			cout << Recordatorios[i].getRecordatorio() << endl;
		}
	}
}
void ListaRecordatorios::getRecordatorio(int n){
	if(Recordatorios[n].getRecordatorio() != "vacío"){
		cout << Recordatorios[n].getRecordatorio() << endl;
	}
	else{
		cout << "Recordatorio inexistente!" << endl;
	}
}
void ListaRecordatorios::EliminarRecordatorios(char opcion){
	switch(opcion){
	case 's':
		for(int i = 0; i < 100; i++){
			Recordatorios[i].Eliminarse();
		}
		cout << "Recordatorios eliminados!" << endl;
		break;
	default:
		cout << "Okay!" << endl;
	
	}
	NumeroActual = 0;
}
