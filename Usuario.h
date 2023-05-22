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
	Usuario();
	Usuario(int id, char*nombre, char * apellido, char * contrasena, char * email);
	Usuario::Usuario(Usuario &u);
	virtual ~Usuario();

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

};

#endif /* USUARIO_H_ */
