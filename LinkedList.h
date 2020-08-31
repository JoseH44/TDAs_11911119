#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "TDAList.h"

#include "Node.h"

class LinkedList : public TDAList
{
	public:
		LinkedList();

		~LinkedList();
		
		//metodo que agrega un elemento a la lista en la posición indicada
		virtual bool inserta(int,Object*);
		
		//metodo que elimina un elemento de la lista en la posición indicada
		virtual Object* suprime(int);
		
		//metodo que limpia la lista(la vacía)
		virtual void anula();
		
		//metodo que devuelve el elemento de la lista en la posición indicada
		virtual Object* recupera(int) ;
		
		//metodo que devuelve el elemento de la lista una posición adelante de la indicada
		virtual Object* siguiente(int);
		
		//metodo que devuelve el elemento de la lista una posición atrás de la indicada
		virtual Object* anterior(int);
		
		//metodo que revisa si la lista se encuentra vacía o no
		virtual bool vacia();
		
		//metodo que imprime los elementos de la lista
		virtual void imprime();
		
		//metodo que devuelve el primer elemento de la lista
		virtual Object* primero();
		
		//metodo que devuelve la posición del objeto indicado
		virtual int localiza(Object*);

		virtual string toString();

		virtual bool equals(Object*);

		//metodo que devuelve la cantidad de elementos en la lista
		virtual int getN();

		
		
	protected:
		Node* inicio;//apuntador de tipo Node que representa el inicio de la lista
		Node* final;//apuntador de tipo Node que representa el final de la lista
		int n;//n que representa la cantidad de elementos en la lista
};

#endif
