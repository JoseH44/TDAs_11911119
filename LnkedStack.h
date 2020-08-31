#ifndef LNKEDSTACK_H
#define LNKEDSTACK_H

#include "TDAStack.h"

#include "Node.h"
#include "Object.h"

class LnkedStack : public TDAStack
{
	public:
		LnkedStack();

		~LnkedStack();

		//metodo push que agrega un elemento a la pila
		virtual void push(Object*);

		//metodo pop que saca el elemento que se encuentra en el tope de la pila
		virtual Object* pop() ;

		//metodo top que devuelve el elemento que se encuentra en el tope de la pila
		virtual Object* top() ;

		//metodo que revisa si la pila se encuentra vacía
		virtual bool isEmpty();

		//metodo que imprime los elementos de la pila
		virtual void print();

		//metodo que vacía la pila
		virtual void clear();
		
	protected:
		Node* Ntop;//apuntador de tipo nodo que apunta al tope de la pila
};

#endif
