#pragma once
using namespace std;
#include <iostream>
#include "TipoClase.h"
#include "IDictionary.h"

class DTClase {
private:
	int idClase;
	TipoClase tipoClase;
	string url;
	TimeStamp inicioClase;
	TimeStamp finClase;
public:
	//constructors
	DTClase();
	DTClase(int, TipoClase, string, TimeStamp, TimeStamp);
	~DTClase();

	//getters
	int getIdClase();
	TipoClase getTipoClase();
	string getUrl();
	TimeStamp getInicioClase();
	TimeStamp getFinClase();
};

class DTTeorico :public DTClase {
private:
	int cantidadAsistentes;

public:
	//constructors
	DTTeorico();
	DTTeorico(int, TipoClase, string, TimeStamp, TimeStamp, int);
	~DTTeorico();

	//getters
	int getCantidadAsistentes();
};

class DTPractico :public DTClase {
private:

public:
	DTPractico();
	DTPractico(int, TipoClase, string, TimeStamp, TimeStamp);
	~DTPractico();
};

class DTMonitoreo :public DTClase {
private:
	IDictionary* estudiantesHabilitados;
public:
	//constructors
	DTMonitoreo();
	DTMonitoreo(int, TipoClase, string, TimeStamp, IDictionary&);
	~DTMonitoreo();

	//getters
	IDictionary* getEstudianteHabilitado();
};