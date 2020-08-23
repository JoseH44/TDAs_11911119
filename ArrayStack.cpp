#include "ArrayStack.h"

ArrayStack::ArrayStack()
{
	capacity = 1000;
	array = new Object*[capacity];
	tope=0;
}

void ArrayStack::push(Object* x){

	array[tope] = x;//asigna x a la casilla tope
	tope++;//incrementa tope
}

bool ArrayStack::isEmpty(){
	return tope == 0;
}

Object* ArrayStack::pop(){
	//si no está vacía 
	if (!isEmpty())
	{
		Object* retValue; 
		retValue =array[tope-1];//recuperar el valor de la casilla tope-1 
		array[tope-1] = NULL;//asigna null a tope-1
		tope--;//se decrementa tope(tope--)
		return retValue;//retorna el valor recuperado
	}else
	{
		return NULL;
	}

}

void ArrayStack::print(){
	
	for (int i = tope-1; i >= 0; i--)
	{
		cout<<array[i]->toString()<<endl;//imprime el contenido de la casilla i del array
	}
}

Object* ArrayStack::top() {
	//si no está vacía
	if (!isEmpty())
	{
		Object* retValue;//variable que guardará el dato 
		retValue = array[tope-1];//recupera el valor de la casilla tope-1 
		return retValue;//retorna el valor recuperado
	}else
	{
		return NULL;
	}
	
}

void ArrayStack::clear(){
	for(int i = 0 ; i < tope;i++ )
		delete array[i];
		
	tope = 0;
}

ArrayStack::~ArrayStack()
{
	for(int i = 0 ; i < tope;i++ )
		delete array[i];
		
	delete[] array;
}
