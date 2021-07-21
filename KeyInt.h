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

#endif