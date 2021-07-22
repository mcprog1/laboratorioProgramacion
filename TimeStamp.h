#pragma once
#include "DTFecha.h"
class TimeStamp {
private:
	DTFecha fecha;
	int hora;
	int minuto;
	int segundo;
public:
	//GETTERS
	DTFecha getFecha();

	int getHora();

	int getMinuto();

	int getSegundo();

	//Constructores
	TimeStamp();
	TimeStamp(DTFecha,int,int,int);
};