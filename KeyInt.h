<<<<<<< HEAD
#ifndef KEYINT_H
#define KEYINT_H

#include "IKey.h"

class KeyInt : public IKey {
private:
    int n;
public:
    KeyInt(int);

    bool equals(IKey*);
    int getKeyInt();

    ~KeyInt();
};

=======
#ifndef KEYINT_H
#define KEYINT_H

#include "IKey.h"

class KeyInt : public IKey {
private:
    int n;
public:
    KeyInt(int);

    bool equals(IKey*);
    int getKeyInt();

    ~KeyInt();
};

>>>>>>> 94cc2ede6ff442c864d261b9c19884aa28752deb
#endif