#ifndef TDAQUEUE_H
#define TDAQUEUE_H

#include "Object.h"

class TDAQueue : public Object
{
	public:
		//metodo que devuelve el elemento que se encuentra en el frente de la cola
		virtual Object* frente()=0;

		//metodo que agrega un elemento a la cola
		virtual void poneEnCola(Object*)=0;

		//metodo que saca el elemento que se encuentra en el frente
		virtual Object* quitaDeCola()=0;

		//metodo que revisa si la cola se encuentra vacía
		virtual bool vacia()=0;

		//metodo que vacía la pila,dejandola sin elementos
		virtual void anula()=0;

		//metodo que imprime los elementos de la cola
		virtual void imprime()=0;

		virtual string toString();

		virtual bool equals(Object*);

	protected:
};

#endif
