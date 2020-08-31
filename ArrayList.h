#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#include "TDAList.h"

class ArrayList : public TDAList
{
	protected:
		Object** array;//un apuntador de objetos que apunta a un arreglo
		int capacity;//representa la capacidad de elementos que puede tomar la lista
		int n;//n que representa la cantidad de elementos en la lista
	public:
		
		ArrayList();

		~ArrayList();
		
		//metodo que agrega un elemento a la lista en la posición indicada
		virtual bool inserta(int,Object*);
		
		//metodo que elimina un elemento de la lista en la posición indicada
		virtual Object* suprime(int);

		//metodo que limpia la lista(la vacía)
		virtual void anula();
		
		//metodo que devuelve el elemento de la lista en la posición indicada
		virtual Object* recupera(int);

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


};


#endif
