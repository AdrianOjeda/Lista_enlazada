#include "Alumno.h"
#include <string.h>


Alumno::Alumno() {
	edad = 0;
	*nombre = {};
	sig = nullptr;
}

Alumno::Alumno(int edad, char *nombre, Alumno* sig) {
	this->edad = edad;
	strcpy_s(this->nombre, nombre);
	this->sig = sig;
	
}
