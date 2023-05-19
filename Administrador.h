/*
 * Administrador.h
 *
 *  Created on: 18 may 2023
 *      Author: Usuario
 */

#ifndef ADMINISTRADOR_H_
#define ADMINISTRADOR_H_

class Administrador {
protected:
	char* nombre;
	char* apellido;
	char* contrasena;
	int id;
	char* email;

public:
	Administrador(int id, char*nombre, char *apellido, char* contrasena, char * email);
	Administrador(Administrador &a);
	virtual ~Administrador();

	char* getApellido() const {
		return apellido;
	}

	void setApellido(char *apellido) {
		this->apellido = apellido;
	}

	char* getContrasena() const {
		return contrasena;
	}

	void setContrasena(char *contrasena) {
		this->contrasena = contrasena;
	}

	char* getEmail() const {
		return email;
	}

	void setEmail(char *email) {
		this->email = email;
	}

	int getId() const {
		return id;
	}

	char* getNombre() const {
		return nombre;
	}

	void setNombre(char *nombre) {
		this->nombre = nombre;
	}

	//TRABAJO ANTERIOR
	void ventanaSesiones(int i);
};

#endif /* ADMINISTRADOR_H_ */
