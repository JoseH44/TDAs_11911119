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
	while ((array[Pfrente]) && (cont<capacity))
	{
		cout<<array[Pfrente]->toString()<<endl;
		Pfrente++;
			
		if (Pfrente >= capacity)//
		{
			Pfrente = 0;
		}
		cont++;

		cout<<"Prueba1";				
	}
	cout<<"Prueba2";
		
}

ArrayQueue::~ArrayQueue()
{
	anula();
	delete[] array;
}
