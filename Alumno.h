
#ifndef ALUMNO_H
#define ALUMNO_H

#include <string>


#include "Object.h"

class Alumno : public Object
{
private:
    int num_cuenta;
    string nombre;
public:
    Alumno();
    /*Alumno(string, int);
    
    string getNombre();
    */
    int getCuenta();
    virtual string toString();
    virtual bool equals(Object *);
    ~Alumno();
};

#endif