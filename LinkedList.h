#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "TDAList.h"

#include "Node.h"

class LinkedList : public TDAList
{
	public:
		LinkedList();
		~LinkedList();
		
		virtual bool inserta(int,Object*);
		
		virtual Object* suprime(int);
		
		virtual void anula();
		
		virtual Object* recupera(int) ;
		
		virtual Object* siguiente(int);
		
		virtual Object* anterior(int);
		
		virtual bool vacia();
		
		virtual void imprime();
		
		virtual Object* primero();
		
		virtual int localiza(Object*);

		virtual string toString();

		virtual bool equals(Object*);

		virtual int getN();

		
		
	protected:
		Node* inicio;
		Node* final;
		int n; 
};

#endif
