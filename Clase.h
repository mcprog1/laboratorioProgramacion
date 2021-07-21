#pragma once
using namespace std;
#include <iostream>
#include "TipoClase.h"
#include "IDictionary.h"
#include "ICollectible.h"

class Clase: public ICollectible{
private:
	int idClase;
	TipoClase tipoClase;
	string url;
	TimeStamp inicioClase;
	TimeStamp finClase;
public:
	//constructors
	Clase();
	Clase(int, TipoClase, string, TimeStamp, TimeStamp);
	~Clase();

	//setters
	void setIdClase(int);
	void setTipoClase(TipoClase);
	void setUrl(string url);
	void setInicioClase(TimeStamp);
	void setFinClase(TimeStamp);

	//getters
	int getIdClase();
	TipoClase getTipoClase();
	string getUrl();
	TimeStamp getInicioClase();
	TimeStamp getFinClase();
};

class Teorico :public Clase {
private:
	int cantidadAsistentes;
	
public:
	Teorico();
	Teorico(int, TipoClase, string, TimeStamp, TimeStamp, int);
	~Teorico();
	//setters
	void setCantidadAsistentes();

	//getters
	int getCantidadAsistentes();
};

class Practico :public Clase {
private:

public:
	Practico();
	Practico(int, TipoClase, string, TimeStamp, TimeStamp);
	~Practico();
};

class Monitoreo :public Clase {
private:
	IDictionary* estudiantesHabilitados;
public:
	Monitoreo();
	Monitoreo(int, TipoClase, string, TimeStamp, IDictionary&);
	~Monitoreo();

	//setters
	void setEsdudianteHabilitado();

	//getters
	IDictionary* getEstudianteHabilitado();
};