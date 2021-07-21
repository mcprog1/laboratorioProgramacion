#pragma once
using namespace std;
#include <iostream>
#include "TipoClase.h"
#include "TimeStamp.h"

class EstudianteAsiste
{
private:
	string cedulaEstudiante;
	int idClase;
	TimeStamp horaConexion;
	TimeStamp horaDesconexion;

public:
	//constructor
	EstudianteAsiste();
	EstudianteAsiste(string, int, TimeStamp,TimeStamp);
	virtual ~EstudianteAsiste();

	//SETTERS
	void setCedulaEstudiante(string);
	void setIdClase(int);
	void setHoraConexion(TimeStamp);
	void setHoraDesconexion(TimeStamp);
	//GETTERS
	string getCedulaEstudiante();
	int getIdClase();
	TimeStamp getHoraConexion();
	TimeStamp getHoraDesconexion();
};

class EnVivo : EstudianteAsiste
{
private:

public:

	void enviarMensaje(); //Ver que parametros enviar
	void responderMensaje(int); //Se envia el id del mensaje que va a responder
};

class Reproduccion : EstudianteAsiste
{
private:

public:
	void verMensajes();	
};