#pragma once
#include "Alumno.h"
#include <iostream>
using namespace std;

class Lista
{
public:
	Alumno* header;
	Lista();
	Lista(Alumno*);
	void insertarInicio(int, char*);
	void mostrar();
	void eliminarTodo();
	void eliminar(int, char*);
	void insertarFinal(int, char*);

};
