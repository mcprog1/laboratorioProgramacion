#pragma once
using namespace std;
#include <iostream>
#include "TipoClase.h"
#include "IDictionary.h"
#include "ICollectible.h"

class DTClase: public ICollectible {
private:
	int idClase;
	string nombre;
	TipoClase tipoClase;
	string url;
	TimeStamp inicioClase;
	TimeStamp finClase;
public:
	//constructors
	DTClase();
	DTClase(int, string, TipoClase, string, TimeStamp, TimeStamp);
	~DTClase();

	//getters
	int getIdClase();
	string getNombre();
	TipoClase getTipoClase();
	string getUrl();
	TimeStamp getInicioClase();
	TimeStamp getFinClase();
};

class DTTeorico :public DTClase {
private:
	int cantAsistentes;
public:
	//constructors
	DTTeorico();
	DTTeorico(int, string, TipoClase, string, TimeStamp, TimeStamp, int);
	~DTTeorico();

	//getters
	int getCantidadAsistentes();
};

class DTPractico :public DTClase {
private:

public:
	DTPractico();
	DTPractico(int, string, TipoClase, string, TimeStamp, TimeStamp);
	~DTPractico();
};

class DTMonitoreo :public DTClase {
private:
	IDictionary* estudiantesHabilitados;
public:
	//constructors
	DTMonitoreo();
	DTMonitoreo(int, string, TipoClase, string, TimeStamp, TimeStamp);
	~DTMonitoreo();

	//getters
	IDictionary* getEstudianteHabilitado();
};