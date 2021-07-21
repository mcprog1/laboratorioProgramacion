#include "ControladorAsignatura.h"
#include <iostream>
#include "DTFecha.h"
#include "DTAsignatura.h"
#include "DTDocenteAsignado.h"
#include "Asignatura.h"
#include "TimeStamp.h"

class Asignatura;
using namespace std;
ControladorAsignatura* ControladorAsignatura::instance = NULL;

ControladorAsignatura::ControladorAsignatura() {
	this->asignaturas = new Asignatura();
	//this->docentes = new Docentes();
}

ControladorAsignatura::~ControladorAsignatura(){

}

ControladorAsignatura* ControladorAsignatura::getInstance() 
{
	if (instance == NULL)
	{
		instance = new ControladorAsignatura;
	}
	return instance;
}


