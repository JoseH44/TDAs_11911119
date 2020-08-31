#include "LinkedList.h"

LinkedList::LinkedList()
{
	inicio = NULL;
	final = NULL;
	n = 0;
}

Object* LinkedList::primero(){
	if (inicio) //si inicio no es null
		return inicio->getData();//extrae la data del nodo inicio(siendo esta un objeto) y la devuelve
	else 
		return NULL;
}

void LinkedList::imprime(){
	

	Node* temporal = inicio;
	//el for nos ayuda a saber cuantos saltos va a dar nuestro nodo temporal 
	//para imprimir todos los elementos

	for (int i = 0; i < n; i++)	{
		cout<<endl<<i+1<<")"<<endl<<temporal->getData()->toString()<<endl;
		temporal = temporal->getSiguiente();
	}
	

}

int LinkedList::localiza(Object* x){
	
	Node* temporal = inicio;
	for (int i = 0; i < n; i++)	{
		if (temporal->getData()->equals(x)){
			return i + 1;//si encuentra el elemento en la lista se devuelve la posición en la que se encuentra
		}else{
			temporal = temporal->getSiguiente();
		}
	}
	return -1;
	


}

//libera el contenido de la memoria de los elementos de la lista
void LinkedList::anula(){
	if(inicio){
		delete inicio;
		n=0;
		inicio = NULL;
	}
}

bool LinkedList::vacia(){
	return n == 0; //retorna el valor comparado entre n y 0
}

Object* LinkedList::recupera(int p){
	

	if (p>= 1 && p <= n){
		
		Node* temporal = inicio;
		//el for es para moverse desde el primer nodo hasta el de la posición(p)
		for (int i = 0; i < p-1; i++){
			
			temporal = temporal->getSiguiente();
		}
		Object* retValue;
		retValue = temporal->getData();
		
		return retValue;

	}else{
		return NULL;
	}
	


}


Object* LinkedList::siguiente(int p) {
	
	return recupera(p+1);//se reutiliza el metodo recupera para ahorrar el trabajo	
}
	
Object* LinkedList::anterior(int p){
	return recupera(p-1);//se reutiliza el metodo recupera para ahorrar el trabajo
}


Object* LinkedList::suprime(int p){

	if (p>=1 && p<=n){
		Node* temporal;

		//caso 1: que la posición ingresada sea la 1(el inicio)
		if(p == 1){

			temporal = inicio;//el nodo temporal apunta al nodo inicio
			inicio = inicio->getSiguiente();//el nodo inicio cambia de posición a la cual apunta
			Object* retValue;
			retValue = temporal->getData();
			temporal->setAnterior(NULL);
			temporal->setSiguiente(NULL);
			
			n--;
			return retValue;

		}else if(p == n){//caso 2: que la posición ingresada sea la última
			temporal = final;
			
			final = final->getAnterior();
			
			Object* retValue;
			retValue = temporal->getData();
			
			temporal->setAnterior(NULL);
			temporal->setSiguiente(NULL);
			
			n--;

			return retValue;

		}else if(p > 1 || p < n){//caso 3: que la posición ingresada esté en medio
			temporal = inicio;
			//for para movernos hasta la posición ingresada
			for (int i = 0; i < p-1; i++){
				temporal = temporal->getSiguiente();
			}
			temporal->getAnterior()->setSiguiente(temporal->getSiguiente());
			final->getAnterior()->setAnterior(temporal->getAnterior());
			Object* retValue;
			retValue = temporal->getData();
			temporal->setAnterior(NULL);
			temporal->setSiguiente(NULL);

			
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
    Node* newNode = new Node();    
    newNode->setData(x);    
    
    //Insertar cuando la lista esta vacia
    if(n == 0){        
		//ambos nodos apuntan al nuevo nodo creado
        inicio = newNode;
        final = newNode;
    }else{
        //Insertar al principio
        if(p == 0){
            inicio->setAnterior(newNode);
            newNode->setSiguiente(inicio);
            inicio = newNode;                        
        //insertar en medio o al final    
        }else{
                     
            Node* tempNode = inicio;
			//for para movilizarme                                                   
            for(int i=0 ; i<p-1 ; i++)                
                tempNode = tempNode->getSiguiente();                  
            
            //se hacen los enlaces necesarios
            newNode->setSiguiente(tempNode->getSiguiente());
            tempNode->setSiguiente(newNode);
            newNode->setAnterior(tempNode);
            
            //conectar siguiente nodo con mi nuevo nodo
            //asignar a nuevo final su respectivo nodo si es necesario
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
	return n;//retorna el valor de n para saber cuantos elementos hay
}


LinkedList::~LinkedList()
{
	delete inicio;
}
