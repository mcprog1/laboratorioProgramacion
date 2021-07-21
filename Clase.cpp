#include "Clase.h"
#include <iostream>
#include "ListaDicc.h"
using namespace std;

//===========================CLASE===========================\\

//constructors
Clase::Clase(){}

Clase::Clase(int idClase, string nombre, TipoClase tipoClase, string url, TimeStamp inicioClase, TimeStamp finClase) {
	this->idClase = idClase;
	this->nombre = nombre;
	this->tipoClase = tipoClase;
	this->url = url;
	this->inicioClase = inicioClase;
	this->finClase = finClase;
}

Clase::~Clase(){}

//setters
void Clase::setIdClase(int idClase) {
	this->idClase = idClase;
}

void Clase::setNombre(string nombre) {
	this->nombre = nombre;
}

void Clase::setTipoClase(TipoClase tipoClase) {
	this->tipoClase = tipoClase;
}

void Clase::setUrl(string url) {
	this->url = url;
}

void Clase::setInicioClase(TimeStamp inicioClase) {
	this->inicioClase = inicioClase;
}

void Clase::setFinClase(TimeStamp finClase) {
	this->finClase = finClase;
}

//getters
int Clase::getIdClase() {
	return this->idClase;
}

string Clase::getNombre() {
	return this->nombre;
}

TipoClase Clase::getTipoClase() {
	return this->tipoClase;
}

string Clase::getUrl() {
	return this->url;
}

TimeStamp Clase::getInicioClase() {
	return this->inicioClase;
}

TimeStamp Clase::getFinClase() {
	return this->finClase;
}

//===========================TEORICO===========================\\

//constructors
Teorico::Teorico(){}

Teorico::Teorico(int idClase, string nombre, TipoClase tipoClase, string url, TimeStamp inicioClase, TimeStamp finClase, int cantAsistentes) : Clase(idClase, nombre, tipoClase, url, inicioClase, finClase) {
	this->cantAsistentes = cantAsistentes;
}

Teorico::~Teorico(){}

//setters
void Teorico::setCantidadAsistentes(int cantAsistentes) {
	this->cantAsistentes = cantAsistentes;
}

//getters
int Teorico::getCantidadAsistentes() {
	return this->cantAsistentes;
}


//===========================PRACTICO===========================\\

//constructors
Practico::Practico(){}

Practico::Practico(int idClase, string nombre, TipoClase tipoClase, string url, TimeStamp inicioClase, TimeStamp finClase) : Clase(idClase, nombre, tipoClase, url, inicioClase, finClase) {}

Practico::~Practico(){}


//===========================MONITOREO===========================\\

//constructors
Monitoreo::Monitoreo() {
	this->estudiantesHabilitados = new ListDicc();
}

Monitoreo::Monitoreo(int idClase, string nombre, TipoClase tipoClase, string url, TimeStamp inicioClase, TimeStamp finClase) : Clase(idClase, nombre, tipoClase, url, inicioClase, finClase) {
	this->estudiantesHabilitados = new ListDicc();
}

Monitoreo::~Monitoreo() {}

//setters
void Monitoreo::setEsdudianteHabilitado(Estudiante* estudiante) {
	Estudiante->add(estudiante);
}

//getters
IDictionary* Monitoreo::getEstudianteHabilitado() {
	return this->estudiantesHabilitados;
}