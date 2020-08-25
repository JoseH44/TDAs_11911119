#include "Alumno.h"

Alumno::Alumno(string pNombre, int pCuenta)
{
    nombre = pNombre;
    num_cuenta = pCuenta;
}

bool Alumno::equals(Object *otro)
{
    Alumno *ref = dynamic_cast<Alumno *>(otro);
    if (ref)
    {
        
        return num_cuenta == ref->getCuenta();
    }
    else
    {
        cout<<"ENTROOO";
        return false;
    }
}

int Alumno::getCuenta()
{
    return num_cuenta;
}

string Alumno::getNombre()
{
    return nombre;
}

string Alumno::toString()
{
    return "Nombre: " + nombre + "\n" + "N Cuenta: " + to_string(num_cuenta);
}

Alumno::~Alumno()
{
}