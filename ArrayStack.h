#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include "TDAStack.h"

class ArrayStack : public TDAStack
{
	public:
		ArrayStack();

		~ArrayStack();
		
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
		Object** array;//un apuntador de objetos que apunta a un arreglo
		int capacity;//representa la capacidad de elementos que puede tomar la pila
		int tope;//guarda la posición en la que se encuentra el elemento en el tope de la pila
		
};

#endif
