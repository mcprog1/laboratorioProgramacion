#include "Asignatura.h"
using namespace std;
#include <iostream>
#include "TipoClase.h"
#include "ICollectible.h"


Asignatura::Asignatura() {}

Asignatura::Asignatura(int id, string nombre, TipoClase clase) {
	this->idAsignatura = id;
	this->nombre = nombre;
	this->tipoClase = clase;
}

Asignatura::~Asignatura(){}

void Asignatura::setIdAsignatura(int id) {
	this->idAsignatura = id;
}

void Asignatura::setNombre(string nombre) {
	this->nombre = nombre;
}

void Asignatura::setTipoClase(TipoClase clase) {
	this->tipoClase = clase;
}

int Asignatura::getIdAsignatura() {
	return this->idAsignatura;
}

string Asignatura::getNombre() {
	return this->nombre;
}

TipoClase Asignatura::getTipoClase() {
	return this->tipoClase;
}

void Asignatura::vincularDocente() {

}
 
void Asignatura::vincularEstudiante() {

}