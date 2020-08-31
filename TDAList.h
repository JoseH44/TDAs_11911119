#ifndef TDALIST_H
#define TDALIST_H

#include "Object.h"

class TDAList : public Object
{
	public:

		//metodo que agrega un elemento a la lista en la posición indicada
		virtual bool inserta(int,Object*)=0;
		
		//metodo que elimina un elemento de la lista en la posición indicada
		virtual Object* suprime(int)=0;
		
		//metodo que limpia la lista(la vacía)
		virtual void anula()=0;
		
		//metodo que devuelve el elemento de la lista en la posición indicada
		virtual Object* recupera(int) =0;
		
		//metodo que devuelve el elemento de la lista una posición adelante de la indicada
		virtual Object* siguiente(int)=0;
		
		//metodo que devuelve el elemento de la lista una posición atrás de la indicada
		virtual Object* anterior(int)=0;
		
		//metodo que revisa si la lista se encuentra vacía o no
		virtual bool vacia()=0;
		
		//metodo que imprime los elementos de la lista
		virtual void imprime()=0;
		
		//metodo que devuelve el primer elemento de la lista
		virtual Object* primero()=0;
		
		//metodo que devuelve la posición del objeto indicado
		virtual int localiza(Object*)=0;
		
		virtual string toString()=0;

		virtual bool equals(Object*)=0;
		
		//metodo que devuelve la cantidad de elementos en la lista
		virtual int getN()=0;					
};

#endif
