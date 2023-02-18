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
	bool vacia();
	int tamanoLista();
	void insertarPosicion(int, int, char*);
	int buscar(int, char*);
	void primerElemento();
	void ultimoElemento();
	void anterior(int, char*);
	void siguiente(int, char*);
};
