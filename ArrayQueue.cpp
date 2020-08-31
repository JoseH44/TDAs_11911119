#include "ArrayQueue.h"

ArrayQueue::ArrayQueue()
{
	capacity = 1000;
	array = new Object*[capacity];
	Pfrente = auxiliar = final = 0;
}

Object* ArrayQueue::frente(){
	
	if (!vacia())
	{
		Object* retValue;
		retValue = array[Pfrente];//guarda el elemento que se encuentra al frente de la cola
		return retValue;//retorna dicho valor guardado
	}else{
		return NULL;
	}
	

}

void ArrayQueue::poneEnCola(Object* x){
	
	if (auxiliar<=capacity)
	{
		array[final] = x;//inserta x en la posición final de la cola
		final++;
		if (final >= capacity)//validación para manejar el desbordamiento
		{
			final = 0;
		}
		
		auxiliar++;
	}else{
		cout<<endl<<"La Cola esta Llena"<<endl;
	}
	
	
}

Object* ArrayQueue::quitaDeCola(){
	
	if (!vacia())
	{
		Object* retValue;
		retValue = array[Pfrente];//guarda el elemento que se encuentra al frente de la cola
		array[Pfrente] = NULL;//le asigna NULL al frente de la cola para determinar que el elemento ya no está
		
		Pfrente++;//el frente de la cola ahora se mueve una posición
		return retValue;
	}else{
		return NULL;
	}
	
}

void ArrayQueue::anula(){
	
	while (!vacia())
	{
		Object* temp = quitaDeCola();//reutilizamos la función de quitaDeCola para ahorrar trabajo
		delete temp;
	}
	Pfrente = final = 0;
	
}

bool ArrayQueue::vacia(){
	return auxiliar == 0;//retorna el valor comparado entre el auxiliar y 0
	
}

void ArrayQueue::imprime(){
	/*
	Caso 1: el frente de la cola se encuentra adelante del final de la cola
	Caso 2: este es el caso normal,el frente de la cola se encuentra antes que el final
	*/
	int cont = 0;
	cout<<endl;
	if (Pfrente > final)	{
		for (int i = Pfrente; i < capacity; i++)
		{
			cout<<endl<<array[i]->toString()<<endl;
		}
		for (int i = 0; i < final; i++)
		{
			cout<<endl<<array[i]->toString()<<endl;
		}

	}else{
		
		for (int i = Pfrente; i < final; i++)
		{
			cout<<endl<<array[i]->toString()<<endl;
		}
	}
	
		
}

ArrayQueue::~ArrayQueue()
{
	anula();
	delete[] array;
}
