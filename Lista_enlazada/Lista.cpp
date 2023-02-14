#include "Lista.h"
#include <iostream>
using namespace std;


Lista::Lista() {
	header = nullptr;

}
Lista::Lista(Alumno* ptr) {
	header = ptr;
}

void Lista::insertarInicio(int edad, char* nombre) {
	Alumno* temp = new Alumno(edad,nombre, nullptr);
	if (!header) {
		header = temp;
		cout << "Alumno ingresado con exito!" << endl;
	}
	else {
		temp->sig = header;
		header = temp;
	}
}

void Lista::mostrar() {
	Alumno* aux = header;

	if (header) {
		while (aux) {
			cout <<"Nombre: "<<aux->nombre<<" | Edad: "<< aux->edad << endl;
			aux = aux->sig;
		}
		cout << endl;
	}
	else {
		cout << endl << "Lista vacia" << endl;
	}

}

void Lista::eliminarTodo() {

	//header = nullptr;
	//cout << endl << "Lista vaciada" << endl;

}

void Lista::insertarFinal(int edad, char* nombre) {
	Alumno* temp = new Alumno(edad, nombre, nullptr);
	Alumno* ultimo = header;

	if (header) {
		while (ultimo->sig != nullptr) {
			ultimo = ultimo->sig;
		}
		ultimo->sig = temp;
	}
	else {
		cout << endl << "Lista vacia" << endl;
	}

}

void Lista::eliminar(int edad, char* nombre) {
	Alumno* aux = header;
	Alumno* auxAnterior = nullptr;
	bool bandera = true;
	if (header != nullptr) {
		while (aux && bandera) {
			if (edad == aux->edad) {
				bandera = false;
			}
			else {
				auxAnterior = aux;
				aux = aux->sig;
			}
		}
		if (aux == nullptr) {
			cout << "No se encontro el Alumno" << endl;

		}
		else if (aux == header) {
			header = header->sig;
			delete aux;
		}
		else if (aux->sig == nullptr) {
			delete aux;
		}
		else {
			cout << "Lista vacia" << endl;
		}
	}
}
