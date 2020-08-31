#include "LinkedQueue.h"

LinkedQueue::LinkedQueue()
{
	inicio=final=NULL;
}

Object* LinkedQueue::frente(){
	
    if(vacia()){
        return NULL;//de estar vacía este retornará null
    }else{
        Object* retValue;
        retValue = inicio->getData();//retorna el contenido al que apunta el nodo inicio
       
        return retValue;
    }
    
}

void LinkedQueue::poneEnCola(Object* x){
	

    Node* newNode = new Node();//se crea un nuevo nodo
    newNode->setData(x);//se hace set del objeto 
    if(vacia()){
        inicio = final = newNode;//en caso que la cola esté vacía ambos nodos apuntaran al nuevo nodo
    }else{
        final->setSiguiente(newNode);
        newNode->setAnterior(final);
        final = newNode;
    }
}


Object* LinkedQueue::quitaDeCola(){
	
	if(!vacia()){
        Node* temporal = inicio;//se crea un apuntador tipo nodo que apunte al inicio de la cola
        Object* retValue = temporal->getData();//guarda el valor que será retornado
        //validar si hay un siguiente elemento en la cola
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

//metodo sin usar
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
    //valida si temporal no es null
    if(temporal){
        while (temporal){
            //mientras temporal no apunte a null este seguirá imprimiendo los elementos de la cola
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
