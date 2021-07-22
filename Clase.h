#pragma once
using namespace std;
#include <iostream>
#include "TipoClase.h"
#include "IDictionary.h"
#include "ICollectible.h"

class Clase: public ICollectible{
private:
	int idClase;
	string nombre;
	TipoClase tipoClase;
	string url;
	TimeStamp inicioClase;
	TimeStamp finClase;
public:
	//constructors
	Clase();
	Clase(int, string, TipoClase, string, TimeStamp, TimeStamp);
	~Clase();

	//setters
	void setIdClase(int);
	void setNombre(string);
	void setTipoClase(TipoClase);
	void setUrl(string url);
	void setInicioClase(TimeStamp);
	void setFinClase(TimeStamp);

	//getters
	int getIdClase();
	string getNombre();
	TipoClase getTipoClase();
	string getUrl();
	TimeStamp getInicioClase();
	TimeStamp getFinClase();
};

class Teorico :public Clase {
private:
	int cantAsistentes;
	
public:
	Teorico();
	Teorico(int, string, TipoClase, string, TimeStamp, TimeStamp, int);
	~Teorico();
	//setters
	void setCantidadAsistentes(int);

	//getters
	int getCantidadAsistentes();
};

class Practico :public Clase {
private:

public:
	Practico();
	Practico(int, string, TipoClase, string, TimeStamp, TimeStamp);
	~Practico();
};

class Monitoreo :public Clase {
private:
	IDictionary* estudiantesHabilitados;
public:
	Monitoreo();
	Monitoreo(int, string, TipoClase, string, TimeStamp, TimeStamp);
	~Monitoreo();

	//setters
	void setEsdudianteHabilitado(Estudiante* estudiante);

	//getters
	IDictionary* getEstudianteHabilitado();
};