#ifndef ARRAYQUEUE_H
#define ARRAYQUEUE_H

#include "TDAQueue.h"

class ArrayQueue : public TDAQueue
{
	public:
		ArrayQueue();
		~ArrayQueue();
		
		
		virtual Object* frente();
		virtual void poneEnCola(Object*);
		virtual Object* quitaDeCola();
		virtual bool vacia();
		virtual void anula();
		virtual void imprime();
		
		
	protected:
		Object** array;
		int capacity;
		int Pfrente, final, auxiliar;
};

#endif
