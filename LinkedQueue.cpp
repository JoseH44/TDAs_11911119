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
    if(vacia()){
        return NULL;
    }else{
        Object* retValue;
        retValue = inicio->getData();
       
        return retValue;
    }
    
}

void LinkedQueue::poneEnCola(Object* x){
	

    Node* newNode = new Node();
    newNode->setData(x);
    if(vacia()){
        inicio = final = newNode;
    }else{
        final->setSiguiente(newNode);
        newNode->setAnterior(final);
        final = newNode;
    }
}


Object* LinkedQueue::quitaDeCola(){
	
	if(!vacia()){
        Node* temporal = inicio;
        Object* retValue = temporal->getData();
        if(temporal->getSiguiente()){
            temporal->getSiguiente()->setAnterior(NULL);
            inicio = temporal->getSiguiente();
        }else{
            inicio = NULL;
        }
        temporal->setSiguiente(NULL);
        temporal->setData(NULL);
        
        delete temporal;
        return retValue;

    }else{
        return 0;
    }
    
}

bool LinkedQueue::vacia(){
	return inicio == NULL;

}

void LinkedQueue::anula(){
	
    

    /*while (!vacia())
    {
        Node* temporal = inicio;
        inicio = inicio->getSiguiente();
        inicio->setAnterior(NULL);
        temporal->setSiguiente(NULL);
        delete temporal;
    }
    inicio = final = NULL;*/
    

}

void LinkedQueue::imprime(){
	

    Node* temporal = inicio;
    if(temporal){
        while (temporal){
            cout<<endl<<temporal->getData()->toString()<<endl;
            temporal = temporal->getSiguiente();
    
        }
    }else{
        cout<<"No Hay Elemtos en la Pila"<<endl;
    }
    
}

LinkedQueue::~LinkedQueue()
{
	delete inicio;
}
