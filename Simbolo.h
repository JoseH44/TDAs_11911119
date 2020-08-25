#ifndef SIMBOLO_H
#define SIMBOLO_H

#include "Object.h"

class Simbolo
{
private:
    char simbolo;

public:
    Simbolo(char);
    char getSimbolo();
    void setSimbolo(char);
    virtual string toString();
    virtual bool equals(Object *);
    ~Simbolo();
};

#endif