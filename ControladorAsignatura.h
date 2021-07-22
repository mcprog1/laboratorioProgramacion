#pragma once
using namespace std;
#include <iostream>
#include "TipoClase.h"
#include "IDictionary.h"
#include "IControladorAsignatura.h"
#include "Asignatura.h"

class ControladorAsignatura : public IControladorAsignatura {
private:
	static ControladorAsignatura* instance;
	IDictionary* asignaturas;
	IDictionary* docentes;

public:

	//Constructor
	virtual ~ControladorAsignatura();
	ControladorAsignatura();
	
	//GETTERS
	ControladorAsignatura* getInstance();
	Asignatura* getAsignatura();
	IDictionary* getAsignaturas();
	IDictionary* getDocentes();

	//METODOS
	void crearAsignatura(string nombre,int codigo) = 0;
	void vincularDocente(string ciDocente,int idAsignatura,TipoClase rol) = 0;
	void vincularEstudiante(string ciEstudiante,int idAsignatura,TipoClase tipoClase) = 0;

};