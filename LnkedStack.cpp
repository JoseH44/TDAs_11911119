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
	
	

	while (temporal)
	{
		cout<<endl<<temporal->getData()->toString()<<endl;
		temporal = temporal->getAnterior();
	}
	
}

void LnkedStack::clear(){
	//si no est� vac�a
	if(!isEmpty()){
		delete Ntop;
		Ntop=NULL;
	}
		
}


bool LnkedStack::isEmpty(){
	return Ntop == NULL;
}

Object* LnkedStack::top(){
	
	if(isEmpty()){
		return NULL;
	}else{
		Object* retValue;
		retValue = Ntop->getData();
		return retValue;
	}
}

Object* LnkedStack::pop(){
	//si est� vac�a
		//return null
	//else
		//nodo* temp = top
		//top = top.sig
		//top.ant = null
		//temp.sig = null
		//retValue = temp.data
		//temp.data = NULL
		//delete temp
		//return reValue
		
	//BORRAR
	
	if(isEmpty()){
		return NULL;
	}else{
		Node* temporal = Ntop;
		Object* retValue;
		retValue = temporal->getData();
		Ntop = Ntop->getAnterior();
		Ntop->setSiguiente(NULL);
		temporal->setAnterior(NULL);
		temporal->setSiguiente(NULL);
		temporal->setData(NULL);
		delete temporal;
		return retValue;


	}

} 

void LnkedStack::push(Object* x){
	//crear newNode que contenga x 
	//newNode.sig = top
	//top.ant = newNode
	//top = newNode	
	if(isEmpty()){
		Node* newNode = new Node();
		newNode->setData(x);
		Ntop = newNode;
	}else{
		Node* newNode = new Node();
		newNode->setData(x);
		newNode->setAnterior(Ntop);
		Ntop->setSiguiente(newNode);
		Ntop = newNode;
	}
	


}
