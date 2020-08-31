#ifndef NODE_H
#define NODE_H

#include "Object.h"

class Node
{
	public:
		Node();
		
		//metodo que hace set del nodo siguiente a quien apunta
		void setSiguiente(Node*);

		//metodo que recupera el nodo siguiente a quien apunta
		Node* getSiguiente();

		//metodo que hace set del nodo anterior a quien apunta
		void setAnterior(Node*);

		//metodo que recupera el nodo anterior a quien apunta
		Node* getAnterior();
		
		//metodo que hace set del objeto en el nodo
		void setData(Object*);

		//metodo que recupera el objeto del nodo
		Object* getData();		
		
		~Node();
	protected:
		Node* siguiente;//apuntador que apunta al siguiente nodo de este
		Node* anterior;//apuntador que apunta al anterior nodo de este
		Object* data;//apuntador de objeto que apunta a la data del nodo
};

#endif
