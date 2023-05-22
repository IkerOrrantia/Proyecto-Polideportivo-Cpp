/*
 * Instalacion.cpp
 *
 *  Created on: 18 may 2023
 *      Author: Usuario
 */

#include "Instalacion.h"

#include <string.h>
#include <iostream>
using namespace std;

Instalacion::Instalacion(){

}

Instalacion::Instalacion(int id, char* nombre, char * deporte, int id_poli,bool ocupada,int hora) {
	this->id=id;
	this->nombre= new char[strlen(nombre)+1];
	strcpy(this->nombre,nombre);
	this->deporte= new char[strlen(deporte)+1];
	strcpy(this->deporte,deporte);
	this->id_poli=id_poli;
	this->ocupada=ocupada;
	this->hora=hora;

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


char* Instalacion::getDeporte() const {
	return deporte;
}

void Instalacion::setDeporte(char *deporte) {
	this->deporte = deporte;
}

int Instalacion::getHora() const {
	return hora;
}

void Instalacion::setHora(int hora) {
	this->hora = hora;
}

int Instalacion::getId() const {
	return id;
}

int Instalacion::getIdPoli() const {
	return id_poli;
}

void Instalacion::setIdPoli(int idPoli) {
	id_poli = idPoli;
}

char* Instalacion::getNombre() const {
	return nombre;
}

bool Instalacion::isOcupada() const {
	return ocupada;
}

void Instalacion::setOcupada(bool ocupada) {
	this->ocupada = ocupada;
}

virtual void Instalacion::imprimir(){
	cout<<this->id<<";"<<this->id_poli<<";"<<<<this->nombre<<";"<<this->deporte<<endl;
}

