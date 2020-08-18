#ifndef NODE_H
#define NODE_H

#include "Object.h"

class Node
{
	public:
		Node();
		
		void setSiguiente(Node*);
		Node* getSiguiente();
		void setAnterior(Node*);
		Node* getAnterior();
		void setData(Object*);
		Object* getData();		
		
		~Node();
	protected:
		Node* siguiente;
		Node* anterior;
		Object* data;
};

#endif
