/*
 * Recordatorio.cpp
 *
 *  Created on: 27 Oct 2020
 *      Author: p035
 */

#include "Recordatorio.h"
#include <iostream>
using namespace std;

void Recordatorio::setRecordatorio(string Motivo, string Fecha)
{
	this->Motivo = Motivo;
	this->Fecha = Fecha;
	cout << "Recordatorio guardado!" << endl;
}
string Recordatorio::getRecordatorio(){
	string str = Motivo + " " + Fecha;
	if(str != " "){
		return str;
	}
	return "vacío";
}
void Recordatorio::Eliminarse(){
	Motivo = "";
	Fecha = "";
}

