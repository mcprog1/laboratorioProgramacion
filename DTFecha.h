#pragma once
class DTFecha {
private:
	int dia;
	int mes;
	int anio;
public:
	//GETTERS
	int getDia();

	int getMes();

	int getAnio();

	//Constructores
	DTFecha();
	DTFecha(int, int, int);
};