/*
 * LaClase.cpp
 *
 *  Created on: 23-10-2020
 *      Author: p035
 */

#include "LaClase.h"
#include <iostream>
using namespace std;

LaClase::LaClase(string nombre, string MejorReceta, int AnosDeExperiencia){
	// TODO Auto-generated constructor stub
	this->nombre = nombre;
	this->MejorReceta = MejorReceta;
	this->AnosDeExperiencia = AnosDeExperiencia;
	Presentarse();
}

LaClase::~LaClase(){
	// TODO Auto-generated destructor stub
	cout << "El cocinero se va!" << endl;
}
void LaClase::CocinarRecetaEspecial(){
	cout << endl;
	cout << "Ahora preparare mi mejor receta: " << MejorReceta << endl;
	cout << "Primero mezclaré los ingredientes secos" << endl;
	cout << "Ahora añadiré los ingredientes humedos" << endl;
	cout << "Finalmente lo pondre en el horno" << endl;
	cout << "20 minutos despues..." << endl;
	cout << "Esta listo mi " << MejorReceta << endl;
}
void LaClase::Presentarse(){
	cout << "Hola soy " << nombre << " y soy un pastelero. Mi mejor receta es " << MejorReceta << " y tengo " << AnosDeExperiencia << " años de experiencia" << endl;
}
