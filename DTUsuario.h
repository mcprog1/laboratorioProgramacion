#pragma once
using namespace std;
#include <iostream>
#include "ICollectible.h"

class DTUsuario: public ICollectible {
private:
	string nombre;
	string email;			//IDENTIFICA AL USUARIO
	string imagenPerfil;
	string clave;
public:
	//Constructors
	DTUsuario();
	DTUsuario(string, string, string, string);
	virtual ~DTUsuario();

	//getters
	string getNombre();
	string getEmail();
	string getImagenPerfil();
	string getClave();
};

class DTEstudiante :public DTUsuario {
private:
	string cedula;
public:
	//constructors
	DTEstudiante();
	DTEstudiante(string, string, string, string, string);
	virtual ~DTEstudiante();

	//getters
	string getNombre();

	//methods
	void asistirEnVivo();
	void reproducirClase();
};

class DTDocente :public DTUsuario {
private:
	string nombreInstituto;
public:
	//constructors
	DTDocente();
	DTDocente(string, string, string, string, string);
	virtual ~DTDocente();

	//getters
	string getNombreInstituto();
};