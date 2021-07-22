<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> juanpa
#include "KeyInt.h"

KeyInt::KeyInt(int n) {
    this->n = n;
}

int KeyInt::getKeyInt() {
    return this->n;
}

bool KeyInt::equals(IKey* clave) {
    KeyInt* c = dynamic_cast<KeyInt*> (clave);
    return c->getKeyInt() == this->getKeyInt();
}

KeyInt::~KeyInt() {
<<<<<<< HEAD
=======
#include "KeyInt.h"

KeyInt::KeyInt(int n) {
    this->n = n;
}

int KeyInt::getKeyInt() {
    return this->n;
}

bool KeyInt::equals(IKey* clave) {
    KeyInt* c = dynamic_cast<KeyInt*> (clave);
    return c->getKeyInt() == this->getKeyInt();
}

KeyInt::~KeyInt() {
>>>>>>> 94cc2ede6ff442c864d261b9c19884aa28752deb
=======
>>>>>>> juanpa
}