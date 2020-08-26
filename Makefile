run.o:	main.o Alumno.o ArrayList.o ArrayQueue.o ArrayStack.o LinkedList.o LinkedQueue.o LnkedStack.o Node.o Simbolo.o TDAList.o TDAQueue.o TDAStack.o
	g++ main.o Alumno.o ArrayList.o ArrayQueue.o ArrayStack.o LinkedList.o LinkedQueue.o LnkedStack.o Node.o Simbolo.o TDAList.o TDAQueue.o TDAStack.o -o run

main.o:	main.cpp
	g++ main.cpp

Alumno.o:	Alumno.h Alumno.cpp 
	g++ Alumno.cpp

ArrayList.o:	ArrayList.h ArrayList.cpp 
	g++ ArrayList.cpp

ArrayQueue.o:	ArrayQueue.h ArrayQueue.cpp 
	g++ ArrayQueue.cpp

ArrayStack.o:	ArrayStack.h ArrayStack.cpp 
	g++ ArrayStack.cpp

LinkedList.o:	LinkedList.h LinkedList.cpp
	g++ LinkedList.cpp

LinkedQueue.o:	LinkedQueue.h LinkedQueue.cpp
	g++ LinkedQueue.cpp

LnkedStack.o:	LnkedStack.h LnkedStack.cpp
	g++ LnkedStack.cpp

Node.o:	Node.h Node.cpp 
	g++ Node.cpp

Simbolo.o:	Simbolo.h Simbolo.cpp 
	g++ Simbolo.cpp

TDAList.o:	TDAList.h TDAList.cpp 
	g++ TDAList.cpp

TDAQueue.o:	TDAQueue.h TDAQueue.cpp 
	g++ TDAQueue.cpp

TDAStack.o:	TDAStack.h TDAStack.cpp 
	g++ TDAStack.cpp

