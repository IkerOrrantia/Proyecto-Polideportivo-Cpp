/*
 * Usuario.cpp
 *
 *  Created on: 18 may 2023
 *      Author: Usuario
 */

#include "Usuario.h"

#include <string.h>
#include <iostream>
using namespace std;

Usuario::Usuario(){

}

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
char* getApellido() const {
		return apellido;
}

void Usuario::setApellido(char *apellido) {
	this->apellido = apellido;
}

char* Usuario::getContrasena() const {
	return contrasena;
}

void Usuario::setContrasena(char *contrasena) {
	this->contrasena = contrasena;
}

char* Usuario::getEmail() const {
	return email;
}

int Usuario::getId() const {
	return id;
}

int Usuario::getLongitudApellido() const {
	return longitudApellido;
}

int Usuario::getLongitudContrasena() const {
	return longitudContrasena;
}

int Usuario:: getLongitudEmail() const {
	return longitudEmail;
}

int Usuario::getLongitudnombre() const {
	return longitudnombre;
}

char* Usuario::getNombre() const {
	return nombre;
}

void Usuario::setNombre(char *nombre) {
	this->nombre = nombre;
}

virtual void Usuario::imprimir(){
	cout<<this->id<<";"<<this->nombre<<";"<<<<this->apellido<<";"<<this->email<<";"<<this->contrasena<<";"<<endl;
}

