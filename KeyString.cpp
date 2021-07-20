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
}