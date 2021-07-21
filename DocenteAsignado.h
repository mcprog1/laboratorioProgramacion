#pragma once
using namespace std;
#include <iostream>
#include "TipoClase.h"
#include "TimeStamp.h"

class DocenteAsignado
{
private:
	string emailDocente;
	int idAsignatura;
	TipoClase tipoClase;
public:
	//constructor 
	DocenteAsignado();
	DocenteAsignado(string,int,TipoClase);

	//SETTERS
	void setEmailDocente(string);
	void setIdAsignatura(int);
	void setTipoClase(TipoClase);

	//GETTERS
	string getEmailDocente();
	int getIdAsignatura();
	TipoClase getTipoClase();

	void iniciarClase(string,TimeStamp);
	void finalizarClase();


};

