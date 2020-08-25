#ifndef ALUMNO_H
#define ALUMNO_H

#include <string>
using std::string;

#include "Object.h"

class Alumno : public Object
{
private:
    int num_cuenta;
    string nombre;

public:
    Alumno(string, int);
    int getCuenta();
    string getNombre();
    virtual string toString();
    virtual bool equals(Object *);

    ~Alumno();
};

#endif