<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> juanpa
#include "KeyString.h"

KeyString::KeyString(string key) {
    this->key = key;
}

string KeyString::getKey() {
    return this->key;
}

bool KeyString::equals(IKey* key) {
    KeyString* k = dynamic_cast<KeyString*> (key);
    return this->key == k->getKey();
}

KeyString::~KeyString() {
<<<<<<< HEAD
=======
#include "KeyString.h"

KeyString::KeyString(string key) {
    this->key = key;
}

string KeyString::getKey() {
    return this->key;
}

bool KeyString::equals(IKey* key) {
    KeyString* k = dynamic_cast<KeyString*> (key);
    return this->key == k->getKey();
}

KeyString::~KeyString() {
>>>>>>> 94cc2ede6ff442c864d261b9c19884aa28752deb
=======
>>>>>>> juanpa
}