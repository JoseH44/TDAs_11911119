#ifndef TDASTACK_H
#define TDASTACK_H

#include "Object.h"

class TDAStack
{
	public:
		virtual void push(Object*)=0;
		virtual Object* pop() =0;
		virtual Object* top() =0;
		virtual bool isEmpty()=0;
		virtual void print()=0;
		virtual void clear()=0;
	protected:
};

#endif
