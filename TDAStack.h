#ifndef TDASTACK_H
#define TDASTACK_H

#include "Object.h"

class TDAStack : public Object
{
	public:
		//metodo push que agrega un elemento a la pila
		virtual void push(Object*)=0;

		//metodo pop que saca el elemento que se encuentra en el tope de la pila
		virtual Object* pop() =0;

		//metodo top que devuelve el elemento que se encuentra en el tope de la pila
		virtual Object* top() =0;

		//metodo que revisa si la pila se encuentra vacía
		virtual bool isEmpty()=0;

		//metodo que imprime los elementos de la pila
		virtual void print()=0;

		//metodo que vacía la pila
		virtual void clear()=0;

		virtual string toString();

		virtual bool equals(Object*);
	protected:
};

#endif
