#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include "TDAStack.h"

class ArrayStack : public TDAStack
{
	public:
		ArrayStack();
		~ArrayStack();
		
		virtual void push(Object*);
		virtual Object* pop() ;
		virtual Object* top() ;
		virtual bool isEmpty();
		virtual void print();
		virtual void clear();
	protected:
		Object** array;
		int capacity;
		int tope;
		
};

#endif
