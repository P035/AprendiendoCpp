/*
 * ListaRecordatoriod.h
 *
 *  Created on: 27 Oct 2020
 *      Author: p035
 */

#ifndef LISTARECORDATORIOS_H_
#define LISTARECORDATORIOS_H_
#include "Recordatorio.h"

class ListaRecordatorios{
	  public:
	  	  void setNuevoRecordatorio(string Motivo, string Fecha);
	  	  void getRecordatorios();
	  	  void EliminarRecordatorios(char opcion);
	  	  void getRecordatorio(int n);
	  private:
	  	  int NumeroActual = 0;
	  	  Recordatorio Recordatorios[100];

};

#endif /* LISTARECORDATORIOS_H_ */
