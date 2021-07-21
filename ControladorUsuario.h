#pragma once
#include <iostream>
#include "IDictionary.h"
#include "IControladorUsuario.h"
#include "Usuario.h"

class ControladorUsuario : public IControladorUsuario {
private:
    ControladorUsuario();
    Usuario* u;
    static ControladorUsuario* instance;
    IDictionary* usuarios;
	IDictionary* docentes;
	IDictionary* estudiantes;
public:
	//constructors
	virtual ~ControladorUsuario();

	//getters
	static ControladorUsuario* getInstance();
	Usuario* getUsuario();
	IDictionary* getUsuarios();
	IDictionary* getEstudiantes();
	IDictionary* getDocentes();

	//methods
	void crearUsuario(string nombre, string email, string imagenPerfil, string calve) = 0;
	void inciarSesion(string email, string clave) = 0;
	void cerrarSesion() = 0;
	void iniciarClase(string nombreClase, TimeStamp fechaYHoraComienzo) = 0;
	void finalizarClase() = 0;
	IDictionary* listarDocentes() = 0;
	IDictionary* listarEstudiantes() = 0;
	bool comprobarUsuario(string email) = 0;
};