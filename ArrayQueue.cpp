#include "ArrayQueue.h"

ArrayQueue::ArrayQueue()
{
	capacity = 1000;
	array = new Object*[capacity];
	Pfrente = final = 0;
}

Object* ArrayQueue::frente(){
	//si no est� vac�a
		//recuperar el valor de frente 
		//retornar el valor
	//else retornar nulo
}

void ArrayQueue::poneEnCola(Object* x){
	//validar si no est� llena
		//insertar x en la posici�n final 
		//incrementar final (calcular desbordamiento si existe)
		//incrementar auxiliar
	//else
		//no hacer nada/mostar mensaje
}

Object* ArrayQueue::quitaDeCola(){
	//si no est� vac�a
		//recuperar el valor de la casilla frente
		//frente ++ 
		//decrementar auxiliar
		//retornar el valor recuperado
		
	//else return null
}

void ArrayQueue::anula(){
	//iterar las casillas desde frente hasta final y  borrar los datos (delete)
	//while no est� vac�a
		// temp = quitaDeCola()
		//delete temp
	//frente = final = 0
}

bool ArrayQueue::vacia(){
	return Pfrente == final;
}

void ArrayQueue::imprime(){
		//iterar las casillas desde frente hasta final e imprimir en pantalla 
		//cada elemento
}

ArrayQueue::~ArrayQueue()
{
	anula();
	delete[] array;
}
