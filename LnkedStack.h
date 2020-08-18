#ifndef LNKEDSTACK_H
#define LNKEDSTACK_H

#include "TDAStack.h"

#include "Node.h"
#include "Object.h"

class LnkedStack : public TDAStack
{
	public:
		LnkedStack();
		~LnkedStack();
		virtual void push(Object*);
		virtual Object* pop() ;
		virtual Object* top() ;
		virtual bool isEmpty();
		virtual void print();
		virtual void clear();
		
	protected:
		Node* Ntop;
};

#endif
