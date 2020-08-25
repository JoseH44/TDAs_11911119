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
        return false;
    }
}

string Alumno::toString()
{
    cout << endl
         << "Nombre: " << nombre << endl
         << "N° Cuenta: " << num_cuenta << endl;
}

Alumno::~Alumno()
{
}