#include "EstudianteAsiste.h"
#include <iostream>
#include "ListaDicc.h"
#include "TimeStamp.h"

using namespace std;

//Constructor
EstudianteAsiste::EstudianteAsiste() {}

EstudianteAsiste::EstudianteAsiste(string cedulaEstudiante, int idClase,TimeStamp horaConexion,TimeStamp horaDesconexion) {
	this->cedulaEstudiante = cedulaEstudiante;
	this->idClase = idClase;
	this->horaConexion = horaConexion;
	this->horaDesconexion = horaDesconexion;
}
EstudianteAsiste::~EstudianteAsiste() {}

void EstudianteAsiste::setCedulaEstudiante(string ci) {
	this->cedulaEstudiante = ci;
}

void EstudianteAsiste::setIdClase(int id) {
	this->idClase = id;
}

void EstudianteAsiste::setHoraConexion(TimeStamp conex) {
	this->horaConexion = conex;
}

void EstudianteAsiste::setHoraDesconexion(TimeStamp desconex) {
	this->horaDesconexion = desconex;
}

string EstudianteAsiste::getCedulaEstudiante() {
	return this->cedulaEstudiante;
}

int EstudianteAsiste::getIdClase() {
	return this->idClase;
}

TimeStamp EstudianteAsiste::getHoraConexion() {
	return this->horaConexion;
}


TimeStamp EstudianteAsiste::getHoraDesconexion() {
	return this->horaDesconexion;
}

EnVivo::EnVivo() {}

void EnVivo::enviarMensaje() {

}

void EnVivo::responderMensaje(int idMensaje) {

}

Reproduccion::Reproduccion(){}

void Reproduccion::verMensajes() {

}


