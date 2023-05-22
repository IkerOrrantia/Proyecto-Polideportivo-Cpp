/*
 * Administrador.cpp
 *
 *  Created on: 18 may 2023
 *      Author: Administrador
 */

#include "Administrador.h"

#include <string.h>
#include <iostream>
using namespace std;


Administrador::Administrador(){

}


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

char* getApellido() const {
		return apellido;
}

void Administrador::setApellido(char *apellido) {
	this->apellido = apellido;
}

char* Administrador::getContrasena() const {
	return contrasena;
}

void Administrador::setContrasena(char *contrasena) {
	this->contrasena = contrasena;
}

char* Administrador::getEmail() const {
	return email;
}

int Administrador::getId() const {
	return id;
}

int Administrador::getLongitudApellido() const {
	return longitudApellido;
}

int Administrador::getLongitudContrasena() const {
	return longitudContrasena;
}

int Administrador:: getLongitudEmail() const {
	return longitudEmail;
}

int Administrador::getLongitudnombre() const {
	return longitudnombre;
}

char* Administrador::getNombre() const {
	return nombre;
}

void Administrador::setNombre(char *nombre) {
	this->nombre = nombre;
}

virtual void Administrador::imprimir(){
	cout<<this->id<<";"<<this->nombre<<";"<<<<this->apellido<<";"<<this->email<<";"<<this->contrasena<<";"<<endl;
}
