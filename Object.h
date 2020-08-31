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
		//metodo virtual puro toString
		virtual string toString()=0;
		//metodo virtual puro equals
		virtual bool equals(Object*)=0;	
};

#endif