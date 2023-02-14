#include "Lista.h"
#include <iostream>
using namespace std;


int main()
{
    int opcion, edad;
    char resp, nombre[30];


    Lista *list = new Lista;
    cout << "*** Lista simplemente enlazada *** " << endl << endl;
    do {
        cout << "Eliga una opcion: " << endl << "1: Insertar Alumno al inicio" << endl << "2: Insertar Alumno al final" << endl << "3: Insertar Alumno en posicion determinada" << endl << "4: Eliminar Alumno" << endl << "5: Eliminar todo" << endl<<"6: Buscar Alumno"<<endl<<"7: Inicializa lista"<<endl<<"8: Vacia lista"<<endl<<"9: Mostrar el primer alumno de la lista"<<endl<<"10: Mostrar el ultimo alumno de la lista"<<endl<<"11: Mostrar el tamano de la lista"<<endl<<"12: Siguiente"<<endl<<"13: Anterior"<<endl<<"14: Mostrar todo"<<endl;

        cin >> opcion;
        switch (opcion) {
        case 1: {
            cout << "*** Insertar alumno al inicio ***"<<endl;
            cout << "Ingrese la edad del alumno: ";
            cin >> edad;
            cout << "Ingrese el nombre del alumno: ";
            cin.ignore();
            cin.getline(nombre, 30);
            cin.ignore();
            list->insertarInicio(edad, nombre);
            break;
        }case 2: {

            break;
        }case 3: {

            break;
        }case 4: {

            break;
        }case 5: {

            break;
        }case 6: {

            break;
        }case 7: {

            break;
        }case 8: {

            break;
        }case 9: {

            break;
        }case 10: {

            break;
        }case 11: {

            break;
        }case 12: {

            break;
        }case 13: {

            break;
        }case 14: {
            list->mostrar();
            break;
        }default: {
            cout << "Ingrese una opcion valida!!" << endl;
            break;
        }


        }

        cout << "Desea continuar? y/n: ";
        cin >> resp;
    } while (resp == 'y' || resp == 'Y');
    delete list;
}

