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
		retValue = array[Pfrente];
		return retValue;
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
		retValue = array[Pfrente];
		array[Pfrente] = NULL;
		Pfrente++;
		return retValue;
	}else{
		return NULL;
	}
	
}

void ArrayQueue::anula(){
	
	while (!vacia())
	{
		Object* temp = quitaDeCola();
		delete temp;
	}
	Pfrente = final = 0;
	
}

bool ArrayQueue::vacia(){
	return auxiliar == 0;
	//Pfrente == final;
}

void ArrayQueue::imprime(){
	//iterar las casillas desde frente hasta final e imprimir en pantalla
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
