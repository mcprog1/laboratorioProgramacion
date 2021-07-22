#pragma once
using namespace std;
#include <iostream>
#include "TipoClase.h"
#include "IDictionary.h"


class IControladorAsignatura {
private:
	virtual void crearAsignatura(string,int) = 0;
	virtual void vincularAsignatura(string, int, TipoClase) = 0;
	virtual void vincularDocente(string, int, TipoClase) = 0;

	virtual IDictionary* listarDocente() = 0;
	virtual IDictionary* listarAsignatura() = 0;
	
};