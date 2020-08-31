#include "Alumno.h"

Alumno::Alumno(){
    
}

//constructor sobrecargado
Alumno::Alumno(string pNombre, int pCuenta)
{
    nombre = pNombre;
    num_cuenta = pCuenta;
}

//getter del numero de cuenta del alumno
int Alumno::getCuenta()
{
    return num_cuenta;
}

//getter del nombre del alumno
string Alumno::getNombre()
{
    return nombre;
}

//metodo toString sobrescrito que muestra los datos del objeto
string Alumno::toString()
{
    return "Nombre: " + nombre + "\n" + "N Cuenta: " + std::to_string(num_cuenta);
}

/*
metodo equals sobrescrito que compara el numero de cuenta de un objeto
con el del alumno en este ambito
*/
bool Alumno::equals(Object *otro)
{
    /*
    Primero se castea el objeto que se trae para determinar
    si es del tipo alumno
    */
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