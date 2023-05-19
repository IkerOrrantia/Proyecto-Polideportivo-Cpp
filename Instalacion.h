/*
 * Instalacion.h
 *
 *  Created on: 18 may 2023
 *      Author: Usuario
 */

#ifndef INSTALACION_H_
#define INSTALACION_H_

class Instalacion {
protected:
	char * nombre;
	int id;
	char* deporte;
	int id_poli;
	//Hora
	bool ocupada;
	int hora;

public:
	Instalacion(int id, char* nombre, char * deporte, int id_poli);
	Instalacion(Instalacion &i);
	virtual ~Instalacion();

	void Hora(bool ocupada, int hora);
};

#endif /* INSTALACION_H_ */
