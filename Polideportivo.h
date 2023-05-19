/*
 * Polideportivo.h
 *
 *  Created on: 18 may 2023
 *      Author: Usuario
 */

#ifndef POLIDEPORTIVO_H_
#define POLIDEPORTIVO_H_

#include "Instalacion.h"

class Polideportivo {
protected:
	char nombre[15];
	int id;
	Instalacion* instalaciones;
	int NumInsta;
	char dir[15];
public:
	Polideportivo();
	virtual ~Polideportivo();
};

#endif /* POLIDEPORTIVO_H_ */
