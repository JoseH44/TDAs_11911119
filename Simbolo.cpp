#include "Simbolo.h"

Simbolo::Simbolo(char pSimbolo)
{
    simbolo = pSimbolo;
}

bool Simbolo::equals(Object *otro)
{
    Simbolo *ref = dynamic_cast<Simbolo *>(otro);
    if (ref)
    {
        //retorna el valor comparado entre el char de la clase y el char del objeto
        return simbolo == ref->getSimbolo();
    }
    else
    {
        return false;
    }
}

char Simbolo::getSimbolo(){
    return simbolo;//retorna el caracter de simbolo
}

void Simbolo::setSimbolo(char pSimbolo){
    simbolo =   pSimbolo;
}


string Simbolo::toString()
{
    
    std::string s(1,simbolo);
    return "Simbolo: " + s;
}

Simbolo::~Simbolo()
{
}