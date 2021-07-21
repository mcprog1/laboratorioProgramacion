#pragma once
using namespace std;
#include <iostream>
#include "TimeStamp.h"

class DTEstudianteAsiste {
private:
	string cedulaEstudiante;
	int idClase;
	TimeStamp horaConexion;
	TimeStamp horaDesconexion;
public:
	//Constructores
	DTEstudianteAsiste();
	DTEstudianteAsiste(string,int,TimeStamp,TimeStamp);
	virtual ~DTEstudianteAsiste();

	//GETTERS
	string getCedulaEstudiante();
	int getIdClase();
	TimeStamp getHoraConexion();
	TimeStamp getHoraDesconexion();
};

class DTEnVivo {
private:

public:
	DTEnVivo();
	virtual ~DTEnVivo();
};

class DTReproduccion {
private:

public:
	DTReproduccion();
	virtual ~DTReproduccion();
};