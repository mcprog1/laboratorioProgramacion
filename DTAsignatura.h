#pragma once
using namespace std;
#include <iostream>
#include "TipoClase.h"
class DTAsignatura {
private:
	int idAsignatura;
	string nombre;
	TipoClase tipoClase;
public:

	//Constructor
	DTAsignatura();
	DTAsignatura(int, string, TipoClase);
	virtual ~DTAsignatura();
	//GETTERS

	int getIdAsignatura();
	string getNombre();
	TipoClase getTipoClase();
};