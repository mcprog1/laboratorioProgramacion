#pragma once
using namespace std;
#include <iostream>
#include "TipoClase.h"
#include "ICollectible.h"

class Asignatura : public ICollectible {
private:
	int idAsignatura;
	string nombre;
	TipoClase tipoClase;
public:
	//SETTERS
	void setIdAsignatura(int);
	void setNombre(string);
	void setTipoClase(TipoClase);

	//GETTERS
	int getIdAsignatura();
	string getNombre();
	TipoClase getTipoClase();

	//Constructor
	Asignatura();
	Asignatura(int,string,TipoClase);
	virtual ~Asignatura();


	void vincularDocente();//Ver que parametros enviar
	void vincularEstudiante();//Ver que parametros enviar
};
