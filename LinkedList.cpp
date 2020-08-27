#include "LinkedList.h"

LinkedList::LinkedList()
{
	inicio = NULL;
	final = NULL;
	n = 0;
}

Object* LinkedList::primero(){
	if (inicio) //si inicio no es null
		return inicio->getData();
	else 
		return NULL;
}

void LinkedList::imprime(){
	//hops = n - 1 
	//declarar temp = inicio para iterar
	// for i = 1 to hops
		//print temp.data
		//temp = temp.sig

	Node* temporal = inicio;
	for (int i = 0; i < n; i++)	{
		cout<<endl<<temporal->getData()->toString()<<endl;
		temporal = temporal->getSiguiente();
	}
	

}

int LinkedList::localiza(Object* x){
	//hops = n - 1 
	//declarar temp = inicio para iterar
	// for i = 1 to hops
		//if x == temp.data
			//return i
		//
			//temp = temp.sig
			
	//return -1 --- el elemento no se encontr� en la lista

	//BORRAR
	Node* temporal = inicio;
	for (int i = 0; i < n; i++)	{
		if (temporal->getData()->equals(x)){
			return i + 1;
		}else{
			temporal = temporal->getSiguiente();
		}
	}
	return -1;
	


}

//si  libera en c++ el contenido de la memoria de los elementos de la lista
void LinkedList::anula(){
	if(inicio){
		delete inicio;
		n=0;
		inicio = NULL;
	}
}

bool LinkedList::vacia(){
	return n == 0; //inicio == NULL;
}

Object* LinkedList::recupera(int p){
	//validar el rango de p
	//si p es v�lido
		//hops = p - 1 
		//declarar temp = inicio para iterar
		// for i = 1 to hops
			//temp = temp.sig
		//return temp.data temp->getData()
	//else
		//return NULL;


	//revisar 

	if (p>= 1 && p <= n){
		
		Node* temporal = inicio;
		for (int i = 0; i < p-1; i++){
			
			temporal = temporal->getSiguiente();
		}
		Object* retValue;
		retValue = temporal->getData();
		//return temporal->getData();
		return retValue;

	}else{
		return NULL;
	}
	


}


Object* LinkedList::siguiente(int p) {
	//revisar
		return recupera(p+1);	
	}
	
Object* LinkedList::anterior(int p){
	return recupera(p-1);
}


Object* LinkedList::suprime(int p){

	if (p>=1 && p<=n){
		Node* temporal;

		if(p == 1){

			temporal = inicio;
			inicio = inicio->getSiguiente();
			Object* retValue;
			retValue = temporal->getData();
			delete temporal;
			n--;
			return retValue;

		}else if(p == n){
			temporal = final;
			final = final->getAnterior();
			Object* retValue;
			retValue = temporal->getData();
			cout<<"aaaaaver"<<retValue->toString();
			/*temporal->setAnterior(NULL);
			temporal->setSiguiente(NULL);*/
			delete temporal;//aquí truena
			n--;

			return retValue;

		}else if(p > 1 || p < n){
			temporal = inicio;
			for (int i = 0; i < p-1; i++){
				temporal = temporal->getSiguiente();
			}
			temporal->getAnterior()->setSiguiente(temporal->getSiguiente());
			final->getAnterior()->setAnterior(temporal->getAnterior());
			Object* retValue;
			retValue = temporal->getData();
			
			delete temporal;
			n--;
			return retValue;

		}

	}
	return NULL;
}

bool LinkedList::inserta(int p,Object* x){

	p--;
	//verificar si es una posición valida
    if(p > n)    
        return false;
    
    //nodo a agregar
    Node* newNode = new Node;    
    newNode->setData(x);    
    
    //Insertar cuando la lista esta vacia
    if(n == 0){        
        inicio = newNode;
        final = newNode;
    }else{
        //Insertar al principio
        if(p == 0){
            inicio->setAnterior(newNode);
            newNode->setSiguiente(inicio);
            inicio = newNode;                        
        //insertar enmedio o al final    
        }else{
            //nodo temporal para movilizarme            
            Node* tempNode = inicio;                                                
            for(int i=0 ; i<p-1 ; i++)                
                tempNode = tempNode->getSiguiente();                  
            
            //cruce de referencias
            newNode->setSiguiente(tempNode->getSiguiente());
            tempNode->setSiguiente(newNode);
            newNode->setAnterior(tempNode);
            
            //conectar siguiente nodo con mi nuevo nodo
            //y asignar a nuevo final su respectivo nodo si es necesario
            if(p != n)
                newNode->getSiguiente()->setAnterior(newNode);
            else
                final = newNode;                                                                                              
        }
    }
            
    n++;             
    return true;
}
	


string LinkedList::toString(){
	return "LINKEDLIST";
}

bool LinkedList::equals(Object* x){
	return false;
}	


int LinkedList::getN(){
	return n;
}


LinkedList::~LinkedList()
{
	delete inicio;
}
