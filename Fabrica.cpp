#include "Fabrica.h"
#include<iostream>
#include<string>
#include "IControladorUsuario.h"
#include "ControladorUsuario.h"

using namespace std;
Fabrica* Fabrica::instance = NULL;

IControladorUsuario* Fabrica::getIControladorUsuario() {
    ControladorUsuario* cont;
    return cont->getInstance();
}

IControladorAsignatura* Fabrica::getIControladorAsignatura() {
    ControladorAsignatura* cont;
    return cont->getInstance();
}


Fabrica::Fabrica() {

}
Fabrica* Fabrica::getInstance() {
    if (instance == NULL)
        instance = new Fabrica();
    return instance;
}