#include "Node.h"

Node::Node()
{
	anterior=NULL;
	siguiente=NULL;
	data=NULL;
}

void Node::setSiguiente(Node* next){
	siguiente = next;//direcciona el apuntador siguiente al nodo next
}
	
Node* Node::getSiguiente(){
	return siguiente;//retorna el nodo siguiente
}
void Node::setAnterior(Node* prev){
	anterior=prev;//direcciona el apuntador anterior al nodo prev
}
Node* Node::getAnterior(){
	return anterior;//retorna el nodo siguiente
}

void Node::setData(Object* pdata){
	data=pdata;
}

Object* Node::getData(){
	return data;//retorna el objeto del nodo
}
		

Node::~Node()
{
	if(siguiente)
		delete siguiente;
		
	if(data)
		delete data;
}
