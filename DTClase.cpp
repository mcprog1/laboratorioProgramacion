#include "DTClase.h"
#include <iostream>
#include "ListaDicc.h"
using namespace std;

//===========================CLASE===========================\\

//constructors
DTClase::DTClase() {}

DTClase::DTClase(int idClase, string nombre, TipoClase tipoClase, string url, TimeStamp inicioClase, TimeStamp finClase) {
	this->idClase = idClase;
	this->nombre = nombre;
	this->tipoClase = tipoClase;
	this->url = url;
	this->inicioClase = inicioClase;
	this->finClase = finClase;
}

DTClase::~DTClase() {}


//getters
int DTClase::getIdClase() {
	return this->idClase;
}

string DTClase::getNombre() {
	return this->nombre;
}

TipoClase DTClase::getTipoClase() {
	return this->tipoClase;
}

string DTClase::getUrl() {
	return this->url;
}

TimeStamp DTClase::getInicioClase() {
	return this->inicioClase;
}

TimeStamp DTClase::getFinClase() {
	return this->finClase;
}

//===========================TEORICO===========================\\

//constructors
DTTeorico::DTTeorico() {}

DTTeorico::DTTeorico(int idClase, string nombre, TipoClase tipoClase, string url, TimeStamp inicioClase, TimeStamp finClase, int cantAsistentes) : DTClase(idClase, nombre, tipoClase, url, inicioClase, finClase) {
	this->cantAsistentes = cantAsistentes;
}

DTTeorico::~DTTeorico() {}


//getters
int DTTeorico::getCantidadAsistentes() {
	return this->cantAsistentes;
}


//===========================PRACTICO===========================\\

//constructors
DTPractico::DTPractico() {}

DTPractico::DTPractico(int idClase, string nombre, TipoClase tipoClase, string url, TimeStamp inicioClase, TimeStamp finClase) : DTClase(idClase, nombre, tipoClase, url, inicioClase, finClase) {}

DTPractico::~DTPractico() {}


//===========================MONITOREO===========================\\

//constructors
DTMonitoreo::DTMonitoreo() {
	this->estudiantesHabilitados = new ListDicc();
}

DTMonitoreo::DTMonitoreo(int idClase, string nombre, TipoClase tipoClase, string url, TimeStamp inicioClase, TimeStamp finClase) : DTClase(idClase, nombre, tipoClase, url, inicioClase, finClase) {
	this->estudiantesHabilitados = new ListDicc();
}

DTMonitoreo::~DTMonitoreo() {}

//getters
IDictionary* DTMonitoreo::getEstudianteHabilitado() {
	return this->estudiantesHabilitados;
}