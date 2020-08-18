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
		
		virtual Object* frente();
		virtual void poneEnCola(Object*);
		virtual Object* quitaDeCola();
		virtual bool vacia();
		virtual void anula();
		virtual void imprime();
		
		
	protected:
		Node* inicio;
		Node* final;
};

#endif
