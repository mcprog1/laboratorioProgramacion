#pragma once
using namespace std;
#include <iostream>
#include "IDictionary.h"

class IControladorUsuario {
public:
	virtual void crearUsuario(string nombre, string email, string imagenPerfil, string calve) = 0;
	virtual void inciarSesion(string email, string clave) = 0;
	virtual void cerrarSesion() = 0;
	virtual void iniciarClase(string nombreClase, TimeStamp fechaYHoraComienzo) = 0;
	virtual void finalizarClase() = 0;
	virtual IDictionary* listarDocentes() = 0;
	virtual IDictionary* listarEstudiantes() = 0;
	virtual bool comprobarUsuario(string email) = 0;
};
