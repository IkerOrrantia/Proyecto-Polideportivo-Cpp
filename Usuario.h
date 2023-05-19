/*
 * Usuario.h
 *
 *  Created on: 18 may 2023
 *      Author: Usuario
 */

#ifndef USUARIO_H_
#define USUARIO_H_

class Usuario {
protected:
	char* nombre;
	char* apellido;
	char* contrasena;
	int id;
	char* email;

public:
	Usuario(int id, char*nombre, char * apellido, char * contrasena, char * email);
	Usuario::Usuario(Usuario &u);
	virtual ~Usuario();

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

	int getId() const {
		return id;
	}

	int getLongitudApellido() const {
		return longitudApellido;
	}

	int getLongitudContrasena() const {
		return longitudContrasena;
	}

	int getLongitudEmail() const {
		return longitudEmail;
	}

	int getLongitudnombre() const {
		return longitudnombre;
	}

	char* getNombre() const {
		return nombre;
	}

	void setNombre(char *nombre) {
		this->nombre = nombre;
	}
};

#endif /* USUARIO_H_ */
