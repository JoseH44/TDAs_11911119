#ifndef ARRAYQUEUE_H
#define ARRAYQUEUE_H

#include "TDAQueue.h"

class ArrayQueue : public TDAQueue
{
	public:
		ArrayQueue();

		~ArrayQueue();
		
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
		Object** array;//un apuntador de objetos que apunta a un arreglo
		int capacity;//representa la capacidad de elementos que puede tomar la cola
		int Pfrente;//guarda la posición del primer elemento en la cola
		int final;//guarda la posición del último elemento en la cola
		int auxiliar;//guarda la cantidad de elementos que contiene la cola
};

#endif
