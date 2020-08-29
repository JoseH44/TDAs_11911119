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
    
    //BORRAR
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

    while (!vacia())
    {
        Node* temporal = inicio;
        inicio = inicio->getSiguiente();
        inicio->setAnterior(NULL);
        temporal->setSiguiente(NULL);
        delete temporal;
    }
    inicio = final = NULL;
    

}

void LinkedQueue::imprime(){
	//Crear nodo* temporal y asignarle el inicio
    //validar que inicio sea diferente de NULL
        //si es diferente de null entonces
            //while temporal sea diferente de null
                //cout<<temporal.data
                //temporal= temporal.sig
        // retornar mensaje de que la cola esta vacia.

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
