#pragma once
using namespace std;
#include <iostream>
#include "TipoClase.h"

class Asignatura
{
private:
	int idAsignatura;
	string nombre;
	TipoClase tipoClase;
public:
	//SETTERS
	void setIdAsignatura(int);
	
	void setNombre(string);
	
	void setTipoClase(TipoClase);

	//GETTERS
	int getIdAsignatura();

	string getNombre();

	TipoClase getTipoClase();

	//Constructor
	Asignatura();
	Asignatura();
};
