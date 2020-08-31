#ifndef SIMBOLO_H
#define SIMBOLO_H

#include "Object.h"

class Simbolo : public Object
{
private:
    char simbolo;//miembro tipo char de la clase

public:
    //constructor sobrecargado
    Simbolo(char);

    //get que recupera el caracter(simbolo)
    char getSimbolo();

    //hace set de un nuevo char(un nuevo simbolo)
    void setSimbolo(char);

    //metodo toString sobrescrito
    virtual string toString();

    //metodo equals sobrescrito
    virtual bool equals(Object *);

    ~Simbolo();
};

#endif