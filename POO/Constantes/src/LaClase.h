/*
 * LaClase.h
 *
 *  Created on: 23-10-2020
 *      Author: p035
 */

#ifndef LACLASE_H_
#define LACLASE_H_
#include <string>
using namespace std;

class LaClase {
public:
	LaClase(string Nombre, int NumeroUnico, string Creador, string Tarea);
	virtual ~LaClase();
	void Presentarse() const;
private:
	string Nombre;
	int NumeroUnico;
	string Creador;
	string Tarea;
};

#endif /* LACLASE_H_ */
