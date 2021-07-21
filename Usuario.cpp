#include "Usuario.h"
#include <iostream>
#include "ListaDicc.h"
using namespace std;

//===========================USUARIO===========================\\
//constructors
Usuario::Usuario(){}

Usuario::Usuario(string nombre, string email, string imagenPerfil, string clave) {
	this->nombre = nombre;
	this->email = email;
	this->imagenPerfil = imagenPerfil;
	this->clave = clave;
}

Usuario::~Usuario(){}

//setters
void Usuario::setNombre(string nombre) {
	this->nombre = nombre;
}

void Usuario::setEmail(string email) {
	this->email = email;
}

void Usuario::setImagenPerfil(string imagenPerfil) {
	this->imagenPerfil = imagenPerfil;
}

void Usuario::setClave(string clave) {
	this->clave = clave;
}

//getters
string Usuario::getNombre() {
	return this->nombre;
}

string Usuario::getEmail() {
	return this->email;
}

string Usuario::getImagenPerfil() {
	return this->imagenPerfil;
}

string Usuario::getClave() {
	return this->clave;
}

//===========================Estudiante===========================\\

//constructors
Estudiante::Estudiante(){
	this->asignaturas = new ListDicc();
}

Estudiante::Estudiante(string nombre, string email, string imagenPerfil, string clave, string cedula) :Usuario(nombre, email, imagenPerfil, clave) {
	this->cedula = cedula;
	this->asignaturas = new ListDicc();
}

Estudiante::~Estudiante(){}

//setters
void Estudiante::setCedula(string cedula) {
	this->cedula = cedula;
}

void Estudiante::setAsignatura(Asignatura* asignatura) {
	Asignatura->add(asignatura);
}


//getters
string Estudiante::getCedula() {
	return this->cedula;
}

IDictionary* Estudiante::getAsignaturas() {
	return this->asignaturas;
}


//===========================Docente===========================\\

//constructors
Docente::Docente(){}

Docente::Docente(string nombre, string email, string imagenPerfil, string clave, string nombreInstituto) :Usuario(nombre, email, imagenPerfil, clave) {
	this->nombreInstituto = nombreInstituto;
}

Docente::~Docente(){}

//setters
void Docente::setNombreInstituto(string nombreInstituto) {
	this->nombreInstituto = nombreInstituto;
}

//getters
string Docente::getNombreInstituto() {
	return this->nombreInstituto;
}

