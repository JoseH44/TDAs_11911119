#include "LnkedStack.h"

LnkedStack::LnkedStack()
{
	Ntop = NULL;
}

LnkedStack::~LnkedStack()
{
	delete Ntop;
}


void LnkedStack::print(){

	Node* temporal = Ntop;
	
	//mientras temporal no apunte a null este seguirá imprimiendo los elementos de la pila
	while (temporal)
	{
		cout<<endl<<temporal->getData()->toString()<<endl;
		temporal = temporal->getAnterior();
	}
	
}

void LnkedStack::clear(){
	//si no está vacía
	if(!isEmpty()){
		delete Ntop;
		Ntop=NULL;
	}
		
}


bool LnkedStack::isEmpty(){
	return Ntop == NULL;//devuelve el valor comparado entre el apuntador y null
}

Object* LnkedStack::top(){
	
	if(isEmpty()){
		return NULL;//si está vacía retorna null
	}else{
		Object* retValue;
		retValue = Ntop->getData();//guarda el elemento en el tope de la pila
		return retValue;
	}
}

Object* LnkedStack::pop(){
	
	if(isEmpty()){
		return NULL;
	}else{
		Node* temporal = Ntop;
		Object* retValue;
		retValue = temporal->getData();////guarda el elemento en el tope de la pila
		Ntop = Ntop->getAnterior();//el tope de la pila ahora se mueve apuntando al anterior
		//se setean los enlaces
		Ntop->setSiguiente(NULL);
		temporal->setAnterior(NULL);
		temporal->setSiguiente(NULL);
		temporal->setData(NULL);
		delete temporal;
		return retValue;


	}

} 

void LnkedStack::push(Object* x){
	
	if(isEmpty()){
		Node* newNode = new Node();//crea un nuevo nodo
		newNode->setData(x);
		Ntop = newNode;//como la pila está vacía el nodo tope apunta al nuevo nodo
	}else{
		Node* newNode = new Node();
		newNode->setData(x);
		newNode->setAnterior(Ntop);//el nodo anterior del nuevo será el nodo tope
		Ntop->setSiguiente(newNode);
		Ntop = newNode;//el nuevo nodo se convierte en el tope de la pila
	}
	
}
