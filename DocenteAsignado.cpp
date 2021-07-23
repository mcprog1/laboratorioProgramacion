#include "DocenteAsignado.h"
using namespace std;
#include <iostream>
#include "TipoClase.h"
#include "TimeStamp.h"

DocenteAsignado::DocenteAsignado() {}

DocenteAsignado::DocenteAsignado(string email, int idAsig, TipoClase tipo) {
	this->emailDocente = email;
	this->idAsignatura = idAsig;
	this->tipoClase = tipo;
}

DocenteAsignado::~DocenteAsignado(){}

void DocenteAsignado::setEmailDocente(string email) {
	this->emailDocente = email;
}

void DocenteAsignado::setIdAsignatura(int id) {
	this->idAsignatura = id;
}

void DocenteAsignado::setTipoClase(TipoClase clase) {
	this->tipoClase = clase;
}

string DocenteAsignado::getEmailDocente() {
	return this->emailDocente;
}

int DocenteAsignado::getIdAsignatura() {
	return this->idAsignatura;
}

TipoClase DocenteAsignado::getTipoClase() {
	return this->tipoClase;
}

void DocenteAsignado::iniciarClase(string a, TimeStamp b) {

}

void DocenteAsignado::finalizarClase() {

}