#ifndef OBJECT_H
#define OBJECT_H

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

class Object
{
	public:
		virtual string toString()=0;
		virtual bool equals(Object*)=0;	
};

#endif
