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
		while (aux != nullptr) {
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

	Alumno* aux = header;
	while (aux != nullptr) {
		Alumno* temp = aux;
		aux = aux->sig;
		delete temp;
	}
	header = nullptr;
	delete aux;
	cout << "Lista eliminada con exito!" << endl;
}

void Lista::insertarFinal(int edad, char* nombre) {
	Alumno* temp = new Alumno(edad, nombre, nullptr);
	Alumno* ultimo = header;
	while (ultimo->sig != nullptr) {
		ultimo = ultimo->sig;
	}
	ultimo->sig = temp;

}

void Lista::eliminar( int edadAlumno, char* nombreAlumno) {
	
	Alumno* aux = header;
	Alumno* auxAnterior = nullptr;
	bool bandera = true;
	if (header != nullptr) {
		while (aux && bandera) {
			if (edadAlumno == aux->edad && strcmp(nombreAlumno, aux->nombre) == 0) {
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
			cout << "Alumno eliminado con exito!" << endl;
			
		}
		else if (aux->sig == nullptr) {
			auxAnterior->sig = nullptr;
			delete aux;
			cout << "Alumno eliminado con exito!" << endl;
			
		}
		else {
			auxAnterior->sig = aux->sig;
			delete aux;
			cout << "Alumno eliminado con exito!" << endl;
		}
		
	}
}

bool Lista::vacia() {

	if (header) {

		return false;
	}
	else {
		cout << endl << "Lista vacia" << endl;
		return true;
	}

}

int Lista::tamanoLista() {
	int contador=0;
	Alumno* aux = header;
	while (aux != nullptr) {		
			aux = aux->sig;
			contador++;
			
	}
	return contador;
}

void Lista::insertarPosicion(int posicion, int edad, char* nombre) {
	int contador = 0;
	Alumno* aux = header;
	Alumno* auxAnterior = nullptr;
	Alumno* temp = new Alumno(edad, nombre, nullptr);
	if (posicion == 1) {
		temp = header;
		temp->sig = aux;
		cout << "Alumno ingresado con exito!" << endl;
	}
	else {
		while (contador < posicion - 1) {
			auxAnterior = aux;
			aux = aux->sig;
			contador++;

		}
		auxAnterior->sig = temp;
		temp->sig = aux;
		cout << "Alumno ingresado con exito!" << endl;
	}

}

int Lista::buscar(int edadAlumno, char* nombreAlumno) {
	Alumno* aux = header;
	Alumno* auxAnterior = nullptr;
	int contador = 1;
	bool bandera = true;
		while (aux && bandera) {
			if (edadAlumno == aux->edad && strcmp(nombreAlumno, aux->nombre) == 0) {
				bandera = false;
			}
			else {
				auxAnterior = aux;
				aux = aux->sig;
				contador++;
			}
		}
		return contador;

}

void Lista::primerElemento() {
	Alumno* aux = header;
	cout << "Nombre: " << aux->nombre << " | edad: " << aux->edad << endl;

}
void Lista::ultimoElemento() {
	Alumno* aux = header;
	while (aux->sig != nullptr) {
		aux = aux->sig;
		
	}
	cout << "Nombre: " << aux->nombre << " | edad: " << aux->edad << endl;

}

void Lista::siguiente(int edadAlumno, char* nombreAlumno) {
	Alumno* aux = header;
	Alumno* auxAnterior = nullptr;
	bool bandera = true;
	while (aux && bandera) {
		if (edadAlumno == aux->edad && strcmp(nombreAlumno, aux->nombre) == 0) {
			bandera = false;
		}
		else {
			auxAnterior = aux;
			aux = aux->sig;

		}
	}
	if (aux->sig == nullptr) {
		cout << "El alumno ingresado ya es el ultimo de la lista!" << endl;
	}
	else {
		cout << "El Alumno que sigue de " << nombreAlumno << " es: " << endl;
		cout << "Nombre: " << aux->sig->nombre << " | edad: " << aux->sig->edad << endl;
	}
	
	
}

void Lista::anterior(int edadAlumno, char* nombreAlumno) {
	
	Alumno* aux = header;
	Alumno* auxAnterior = nullptr;
	bool bandera = true;
	while (aux && bandera) {
		if (edadAlumno == aux->edad && strcmp(nombreAlumno, aux->nombre) == 0) {
			bandera = false;
		}
		else {
			auxAnterior = aux;
			aux = aux->sig;

		}
	}
	if (aux == header) {
		cout << "El alumno ingresado es el primero de la lista!" << endl;
	}
	else {
		cout << "El Alumno que esta antes de " << nombreAlumno << " es: " << endl;
		cout << "Nombre: " << auxAnterior->nombre << " | edad: " << auxAnterior->edad;
	}


	

}