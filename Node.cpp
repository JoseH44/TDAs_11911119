#include "Node.h"

Node::Node()
{
	anterior=NULL;
	siguiente=NULL;
	data=NULL;
}

void Node::setSiguiente(Node* next){
	siguiente = next;
}
	
Node* Node::getSiguiente(){
	return siguiente;
}
void Node::setAnterior(Node* prev){
	anterior=prev;
}
Node* Node::getAnterior(){
	return anterior;
}

void Node::setData(Object* pdata){
	data=pdata;
}

Object* Node::getData(){
	return data;
}
		

Node::~Node()
{
	if(siguiente)
		delete siguiente;
		
	if(data)
		delete data;
}
