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
	LaClase(string nombre, string MejorReceta, int AnosDeExpreiencia);
	~LaClase();
	void CocinarRecetaEspecial();
private:
	void Presentarse();
	string MejorReceta;
	string nombre;
	int AnosDeExperiencia;
};

#endif /* LACLASE_H_ */
