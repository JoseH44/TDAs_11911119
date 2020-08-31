#ifndef LINKEDQUEUE_H
#define LINKEDQUEUE_H

#include "TDAQueue.h"

#include "Node.h"

#include "Object.h"

class LinkedQueue : public TDAQueue
{
	public:
		LinkedQueue();

		~LinkedQueue();
		
		//metodo que devuelve el elemento que se encuentra en el frente de la cola
		virtual Object* frente();

		//metodo que agrega un elemento a la cola
		virtual void poneEnCola(Object*);

		//metodo que saca el elemento que se encuentra en el frente
		virtual Object* quitaDeCola();

		//metodo que revisa si la cola se encuentra vacía
		virtual bool vacia();

		//metodo que vacía la pila,dejandola sin elementos
		virtual void anula();

		//metodo que imprime los elementos de la lista
		virtual void imprime();
		
		
	protected:
		Node* inicio;//apuntador de tipo Node que representa el inicio de la cola
		Node* final;//apuntador de tipo Node que representa el final de la cola
};

#endif
