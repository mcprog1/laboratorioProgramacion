#pragma once
using namespace std;
#include <iostream>
#include "TipoClase.h"
#include "IDictionary.h"

class Clase {
private:
	int idClase;
	TipoClase tipoClase;
	string url;
	TimeStamp inicioClase;
	TimeStamp finClase;
public:
	
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

	//setters
	void setCantidadAsistentes();

	//getters
	int getCantidadAsistentes();
};

class Practico :public Clase {
private:

public:

};

class Monitoreo :public Clase {
private:
	IDictionary* estudiantesHabilitados();

public:
	
};