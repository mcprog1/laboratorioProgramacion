#include "Fabrica.h"
#include<iostream>
#include<string>
using namespace std;
Fabrica* Fabrica::instance = NULL;

IControladorUsuario* Fabrica::getIControladorUsuario() {
    ControladorG* cont;
    return cont->getInstance();
}

IControladorAsignatura* Fabrica::getIControladorAsignatura() {
    ControladorM* cont;
    return cont->getInstance();
}


Fabrica::Fabrica() {

}
Fabrica* Fabrica::getInstance() {
    if (instance == NULL)
        instance = new Fabrica();
    return instance;
}