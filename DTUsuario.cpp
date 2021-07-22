#include "DTUsuario.h"
#include <iostream>
#include "ListaDicc.h"
#include "IDictionary.h"
using namespace std;

//===========================USUARIO===========================\\
//constructors
DTUsuario::DTUsuario() {}

DTUsuario::DTUsuario(string nombre, string email, string imagenPerfil, string clave) {
	this->nombre = nombre;
	this->email = email;
	this->imagenPerfil = imagenPerfil;
	this->clave = clave;
}

DTUsuario::~DTUsuario() {}


//getters
string DTUsuario::getNombre() {
	return this->nombre;
}

string DTUsuario::getEmail() {
	return this->email;
}

string DTUsuario::getImagenPerfil() {
	return this->imagenPerfil;
}

string DTUsuario::getClave() {
	return this->clave;
}

//===========================Estudiante===========================\\

//constructors
DTEstudiante::DTEstudiante() {
	this->asignaturas = new ListDicc();
}

DTEstudiante::DTEstudiante(string nombre, string email, string imagenPerfil, string clave, string cedula) :DTUsuario(nombre, email, imagenPerfil, clave) {
	this->cedula = cedula;
	this->asignaturas = new ListDicc();
}

DTEstudiante::~DTEstudiante() {}

//getters
string DTEstudiante::getCedula() {
	return this->cedula;
}

IDictionary* DTEstudiante::getAsignaturas() {
	return this->asignaturas;
}


//===========================Docente===========================\\

//constructors
DTDocente::DTDocente() {}

DTDocente::DTDocente(string nombre, string email, string imagenPerfil, string clave, string nombreInstituto) :DTUsuario(nombre, email, imagenPerfil, clave) {
	this->nombreInstituto = nombreInstituto;
}

DTDocente::~DTDocente() {}

//getters
string DTDocente::getNombreInstituto() {
	return this->nombreInstituto;
}

