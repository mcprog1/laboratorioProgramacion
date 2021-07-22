#pragma once
using namespace std;
#include "iostream"
#include "TipoClase.h"

class DTDocenteAsignado {
private:
	string emailDocente;
	int idAsignatura;
	TipoClase tipoClase;
public:
	//Constructores
	DTDocenteAsignado();
	DTDocenteAsignado(string,int,TipoClase);
	virtual ~DTDocenteAsignado();

	//GETTERS

	string getEmailDocente();
	int getIdAsignatura();
	TipoClase getTipoClase();

};