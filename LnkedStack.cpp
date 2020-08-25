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
	//temp = top
	//while temp != null
		//print temp.data
		//temp = temp.sig
}

void LnkedStack::clear(){
	//si no est� vac�a
		delete Ntop;
		Ntop=NULL;
}


bool LnkedStack::isEmpty(){
	return Ntop == NULL;
}

Object* LnkedStack::top(){
	//si est� vac�a 
		//return null
	//else
		//return top.data
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
		
} 

void LnkedStack::push(Object* x){
	//crear newNode que contenga x 
	//newNode.sig = top
	//top.ant = newNode
	//top = newNode	
}
