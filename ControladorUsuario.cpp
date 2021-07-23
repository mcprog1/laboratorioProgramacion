#include "IDictionary.h"
#include "Usuario.h"
#include "ControladorUsuario.h"
#include "Fabrica.h"
#include "KeyString.h"
#include <iostream>
using namespace std;
ControladorUsuario* ControladorUsuario::instance = NULL;

//===========================CONTROLADORUSUARIO===========================\\

//constructors
ControladorUsuario::ControladorUsuario() {}

ControladorUsuario::ControladorUsuario() {
	this->u = NULL;
	this->usuarios = NULL;
}

ControladorUsuario::~ControladorUsuario() {}


//methods
ControladorUsuario* ControladorUsuario::getInstance() {
    if (instance == NULL)
        instance = new ControladorUsuario;
    return instance;
}

IDictionary* ControladorUsuario::getUsuarios() {
    return this->usuarios;
}

void ControladorUsuario::crearUsuario(string nombre, string email, string fotoPerfil, string clave) {
    KeyString* key = new KeyString(email);
    Usuario* nuevoUsuario = new Usuario(nombre, email, fotoPerfil, clave);
    usuarios->add(nuevoUsuario, key);
    this->u = nuevoUsuario;
}