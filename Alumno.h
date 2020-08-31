
#ifndef ALUMNO_H
#define ALUMNO_H

#include <string>


#include "Object.h"

class Alumno : public Object
{
private:
    int num_cuenta;//entero que representa el numero de cuenta
    string nombre;//string que representa el nombre
public:
    Alumno();//constructor vacío

    Alumno(string, int);//constructor sobrecargado
    
    string getNombre();//getter del nombre
    
    int getCuenta();//getter del numero de cuenta

    virtual string toString();//metodo virtual toString para mostrar salida

    virtual bool equals(Object *);//metodo virtual equals para comparar dos numeros de cuenta

    ~Alumno();

    /*
    En caso que se necesiten setters de los datos miembros,estos
    pueden ser añadidos sin problema
    */
};

#endif