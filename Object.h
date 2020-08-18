#ifndef OBJECT_H
#define OBJECT_H

#include <iostream>
using namespace std;

#include <string>
using std::string;

class Object
{
	public:
		virtual string toString()=0;
		virtual bool equals(Object*)=0;
	protected:
};

#endif
