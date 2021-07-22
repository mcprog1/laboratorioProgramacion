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
}