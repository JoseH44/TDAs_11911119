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
        return simbolo == ref->getSimbolo();
    }
    else
    {
        return false;
    }
}

string Simbolo::toString()
{
    cout << endl
         << "Simbolo: " << simbolo << endl;
}

Simbolo::~Simbolo()
{
}