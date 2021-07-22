<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> juanpa
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

<<<<<<< HEAD
=======
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

>>>>>>> 94cc2ede6ff442c864d261b9c19884aa28752deb
=======
>>>>>>> juanpa
#endif