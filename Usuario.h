#pragma once
using namespace std;
#include <iostream>

class Usuario {
private:
	string nombre;
	string email;			//IDENTIFICA AL USUARIO
	string imagenPerfil;
	string clave;
public:
	void iniciarSesion(string email,string clave);
	void cerrarSesion();

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

	//Constructors
	Usuario();
	Usuario(string, string, string, string);

};

class Estudiante :public Usuario {
private:
	string cedula;

public:

}