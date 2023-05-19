/*
 * Usuario.cpp
 *
 *  Created on: 18 may 2023
 *      Author: Usuario
 */

#include "Usuario.h"

#include <string.h>

Usuario::Usuario(int id, char*nombre, char *apellido, char* contrasena, char * email){
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
Usuario::Usuario(Usuario &u){
	this->id=u.id;
	this->nombre=new char[strlen(u.nombre)+1];
	strcpy(this->nombre,u.nombre);
	this->apellido=new char[strlen(u.apellido)+1];
	strcpy(this->apellido,u.apellido);
	this->contrasena=new char[strlen(u.contrasena)+1];
	strcpy(this->contrasena,u.contrasena);
	this->email=new char[strlen(u.email)+1];
	strcpy(this->email,u.email);
}
Usuario::~Usuario() {
	delete [] nombre,apellido,contrasena,email;
}
