#include "Alumno.h"

Alumno::Alumno(){
    
}

Alumno::Alumno(string pNombre, int pCuenta)
{
    nombre = pNombre;
    num_cuenta = pCuenta;
}

int Alumno::getCuenta()
{
    return num_cuenta;
}

string Alumno::getNombre()
{
    return nombre;
}


int Alumno::getCuenta()
{
    return num_cuenta;
}

string Alumno::toString()
{
    return "Nombre: " + nombre + "\n" + "N Cuenta: " + std::to_string(num_cuenta);
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

Alumno::~Alumno()
{
}