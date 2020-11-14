/*
 * LaClase.cpp
 *
 *  Created on: 23-10-2020
 *      Author: p035
 */

#include "LaClase.h"
#include <iostream>
using namespace std;

LaClase::LaClase(string Nombre, int NumeroUnico, string Creador, string Tarea){
	// TODO Auto-generated constructor stub
	this->Nombre = Nombre;
	this->NumeroUnico = NumeroUnico;
	this->Creador = Creador;
	this->Tarea = Tarea;
	cout << "Encendiendo robot!" << endl;
}

LaClase::~LaClase() {
	// TODO Auto-generated destructor stub
	cout << "Apagando robot" << endl;
}
void LaClase::Presentarse()const{
	cout << "Hola! Soy " << Nombre << " y fuí creado por " << Creador << ". Me crearon con esta tarea: " << Tarea << " y con este número único " << NumeroUnico << endl;
}
