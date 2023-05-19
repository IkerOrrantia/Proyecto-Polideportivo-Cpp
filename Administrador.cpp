/*
 * Administrador.cpp
 *
 *  Created on: 18 may 2023
 *      Author: Usuario
 */

#include "Administrador.h"

#include <string.h>

Administrador::Administrador(int id, char*nombre, char *apellido, char* contrasena, char * email){
	this->id=id;
	this->nombre=new char[strlen(nombre)+1];
	strcpy(this->nombre,nombre);
	this->apellido=new char[strlen(apellido)+1];
	strcpy(this->apellido,apellido);
	this->contrasena=new char[strlen(contrasena)+1];
	strcpy(this->contrasena,contrasena);
	this->email=new char[strlen(email)+1];
	strcpy(this->email,email);
}
Administrador::Administrador(Administrador &a){
	this->id=a.id;
	this->nombre=new char[strlen(a.nombre)+1];
	strcpy(this->nombre,a.nombre);
	this->apellido=new char[strlen(a.apellido)+1];
	strcpy(this->apellido,a.apellido);
	this->contrasena=new char[strlen(a.contrasena)+1];
	strcpy(this->contrasena,a.contrasena);
	this->email=new char[strlen(a.email)+1];
	strcpy(this->email,a.email);
}
Administrador::~Administrador() {
	delete [] nombre,apellido,contrasena,email;
}


