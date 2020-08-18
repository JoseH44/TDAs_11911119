#include "ArrayStack.h"

ArrayStack::ArrayStack()
{
	capacity = 1000;
	array = new Object*[capacity];
	tope=0;
}

void ArrayStack::push(Object* x){
	//asignar x a la casilla tope
	//incrementar tope
	array[tope] = x;
	tope++;
}

bool ArrayStack::isEmpty(){
	return tope == 0;
}

Object* ArrayStack::pop(){
	//si no est� vac�a 
		//recuperar el valor de la casilla tope-1 
		//asignar null a tope-1
		//tope--
		//retornar el valor recuperado
	//else return null
}

void ArrayStack::print(){
	//for i = tope-1 hasta 1
		//imprimir el contenido de la casilla i del array
}

Object* ArrayStack::top() {
	//si no est� vac�a 
		//recuperar el valor de la casilla tope-1 
		//retornar el valor recuperado
	//else return null
}

void ArrayStack::clear(){
	for(int i = 0 ; i < tope;i++ )
		delete array[i];
		
	tope =0;
}

ArrayStack::~ArrayStack()
{
	for(int i = 0 ; i < tope;i++ )
		delete array[i];
		
	delete[] array;
}
