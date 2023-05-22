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
	Administrador();
	Administrador(int id, char*nombre, char *apellido, char* contrasena, char * email);
	Administrador(Administrador &a);
	virtual ~Administrador();

	char* getApellido() const ;
	void setApellido(char *apellido) ;
	char* getContrasena() const ;
	void setContrasena(char *contrasena) ;
	char* getEmail() const ;
	int getId() const ;
	int getLongitudApellido() const ;
	int getLongitudContrasena() const ;
	int getLongitudEmail() const ;
	int getLongitudnombre() const ;
	char* getNombre() const ;
	void setNombre(char *nombre) ;

	virtual void imprimir();

	//TRABAJO ANTERIOR
	void ventanaSesiones(int i);
};

#endif /* ADMINISTRADOR_H_ */
