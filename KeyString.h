#ifndef KEYSTRING_H
#define KEYSTRING_H

#include "IKey.h"
#include <string>
#include <iostream>
using namespace std;

class KeyString : public IKey {
private:
    string key;

public:
    KeyString(string);

    string getKey();
    bool equals(IKey* key);

    ~KeyString();
};

#endif