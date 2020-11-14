/*
 * Recordatorio.h
 *
 *  Created on: 27 Oct 2020
 *      Author: p035
 */

#ifndef RECORDATORIO_H_
#define RECORDATORIO_H_
#include <string>
using namespace std;

class Recordatorio {
	  public:
	  	  void setRecordatorio(string Motivo, string Fecha);
	  	  string getRecordatorio();
	  	  void Eliminarse();
	  private:
	  	  string Fecha;
	  	  string Motivo;
};

#endif /* RECORDATORIO_H_ */
