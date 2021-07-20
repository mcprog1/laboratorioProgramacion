#pragma once


using namespace std;
class Fabrica {
private:
    static Fabrica* instance;
    IControladorAsignatura* iControladorAsignatura;
    IControladorUsuario* iControladorUsuario;
    Fabrica();

public:
    static Fabrica* getInstance();
    IControladorAsignatura* getIControladorAsignatura();
    IControladorUsuario* getIControladorUsuario();
};