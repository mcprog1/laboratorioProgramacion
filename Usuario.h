#pragma once
using namespace std;
#include <iostream>
#include "ICollectible.h"
#include "IDictionary.h"


class Usuario: public ICollectible {
private:
	string nombre;
	string email;			//IDENTIFICA AL USUARIO
	string imagenPerfil;
	string clave;
public:
	//Constructors
	Usuario();
	Usuario(string nombre, string email, string imagenPerfil, string clave);
	virtual ~Usuario();
	
	//setters
	void setNombre(string nombre);
	void setEmail(string email);
	void setImagenPerfil(string url);
	void setClave(string clave);

	//getters
	string getNombre();
	string getEmail();
	string getImagenPerfil();
	string getClave();

	//methods
	//void iniciarSesion(string email, string clave);
	//void cerrarSesion();

};

class Estudiante :public Usuario {
private:
	string cedula;
	IDictionary* asignaturas;
public:
	Estudiante();
	Estudiante(string nombre, string email, string imagenPerfil, string clave, string cedula);
	~Estudiante();

	//setters
	void setCedula(string cedula);
	void setAsignatura(Asignatura* asignatura);

	//getters
	string getCedula();
	IDictionary* getAsignaturas();

	//methods
	void asistirEnVivo();
	void reproducirClase();
};

class Docente :public Usuario {
private:
	string nombreInstituto;
public:
	//constructors
	Docente();
	Docente(string nombre, string email, string imagenPerfil, string clave, string nombreInstituto);
	~Docente();

	//setters
	void setNombreInstituto(string nombreInstituto);

	//getters
	string getNombreInstituto();
};