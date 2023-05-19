/*
 * Instalacion.cpp
 *
 *  Created on: 18 may 2023
 *      Author: Usuario
 */

#include "Instalacion.h"

#include <string.h>

Instalacion::Instalacion(int id, char* nombre, char * deporte, int id_poli) {
	this->id=id;
	this->nombre= new char[strlen(nombre)+1];
	strcpy(this->nombre,nombre);
	this->deporte= new char[strlen(deporte)+1];
	strcpy(this->deporte,deporte);
	this->id_poli=id_poli;

}
Instalacion(Instalacion &i){
	this->id=i.id;
	this->nombre= new char[strlen(i.nombre)+1];
	strcpy(this->nombre,i.nombre);
	this->deporte= new char[strlen(i.deporte)+1];
	strcpy(this->deporte,i.deporte);
	this->id_poli=i.id_poli;
}

Instalacion::~Instalacion() {
	delete[] nombre, deporte;
}

void Instalacion::Hora(bool ocupada, int hora){
	this->ocupada=ocupada;
	this->hora=hora;
}
