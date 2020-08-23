#include "LinkedQueue.h"

LinkedQueue::LinkedQueue()
{
	inicio=final=NULL;
}

Object* LinkedQueue::frente(){
	/*
	if(vacia())
		return NULL;
	else
		return inicio.data;
	*/
}

void LinkedQueue::poneEnCola(Object* x){
	/*
	crear newNode que contenga x
	if(vacia())
		inicio = final = newNode
	else
		
		final.sig = newNode
		newNode.ant = final
		final = newNode
	*/
}


Object* LinkedQueue::quitaDeCola(){
	//if !vacia
        //temp = frente apuntar el valor del frente de la cola 
        //retValue = temp->getData almacenar el valor del nodo 
        //if temp.sig  validando que no sea el �ltimo nodo
            //temp.sig.ant = NULL 
            //frente = temp.sig
        //temp.siguiente =NULL
        //temp.data =NULL 
        //Validando en caso que la cola quede vac�a
            //metodo clear 
        //else 
            //borra temp 
        //retorna el retValue 
    //else
        //return NULL
}

bool LinkedQueue::vacia(){
	//return inicio == NULL
}

void LinkedQueue::anula(){
	
    //validar si no esta vacio
    //while( vacia() ){
    //  temp = inicio;
    //  inicio = inicio.siguiente();
    //  inicio.anterior() = NULL;
    //	temp.siguiente = NULL;
    //  delete temp;
    //}
    //inicio = final = NULL;
    //

}

void LinkedQueue::imprime(){
	//Crear nodo* temporal y asignarle el inicio
    //validar que inicio sea diferente de NULL
        //si es diferente de null entonces
            //while temporal sea diferente de null
                //cout<<temporal.data
                //temporal= temporal.sig
        // retornar mensaje de que la cola esta vacia.
}

LinkedQueue::~LinkedQueue()
{
	delete inicio;
}
