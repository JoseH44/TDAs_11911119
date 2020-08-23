#ifndef TDAQUEUE_H
#define TDAQUEUE_H

#include "Object.h"

class TDAQueue : public Object
{
	public:
		virtual Object* frente()=0;
		virtual void poneEnCola(Object*)=0;
		virtual Object* quitaDeCola()=0;
		virtual bool vacia()=0;
		virtual void anula()=0;
		virtual void imprime()=0;
		virtual string toString();
		virtual bool equals(Object*);
	protected:
};

#endif
