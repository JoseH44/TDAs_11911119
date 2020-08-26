#ifndef TDALIST_H
#define TDALIST_H

#include "Object.h"

class TDAList : public Object
{
	public:
		virtual bool inserta(int,Object*)=0;
		
		virtual Object* suprime(int)=0;
		
		virtual void anula()=0;
		
		virtual Object* recupera(int) =0;
		
		virtual Object* siguiente(int)=0;
		
		virtual Object* anterior(int)=0;
		
		virtual bool vacia()=0;
		
		virtual void imprime()=0;
		
		virtual Object* primero()=0;
		
		virtual int localiza(Object*)=0;
		
		virtual string toString()=0;

		virtual bool equals(Object*)=0;

		virtual int getN()=0;					
};

#endif
