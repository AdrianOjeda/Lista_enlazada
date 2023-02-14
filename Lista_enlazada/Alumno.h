#pragma once
class Alumno
{
public:
	char nombre[30];
	int edad;
	Alumno* sig;
	Alumno();
	Alumno(int, char*, Alumno*);
};

