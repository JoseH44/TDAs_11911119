#include "LinkedList.h"

LinkedList::LinkedList()
{
	inicio = NULL;
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
	return 0;
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
		return NULL;
}


Object* LinkedList::siguiente(int p) {
		return recupera(p+1);	
	}
	
Object* LinkedList::anterior(int p){
	return recupera(p-1);
}


Object* LinkedList::suprime(int p){
	//validar el rango de p
	//si p es v�lido
		//hops = p - 1 
		//declarar temp = inicio para iterar
		// for i = 1 to hops
			//temp = temp.sig
		//temp.ant.sig = temp.sig  temp->getAnterior()->setSiguiente(temp->getSiguiente());
		//temp.sig.ant = temp.ant
		//temp.ant = null temp->setAnterior(NULL)
		//temp.sig = null
		//n--	
		//retValue = temp.data
		//temp.data = null
		//delete temp
		//retornar retValue
	//else
		//retorna null
	
	//BORRAR
	return nullptr;
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





LinkedList::~LinkedList()
{
	delete inicio;
}
