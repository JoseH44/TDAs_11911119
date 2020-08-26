run.o:	main.o Alumno.o ArrayList.o ArrayQueue.o ArrayStack.o LinkedList.o LinkedQueue.o LnkedStack.o Node.o Simbolo.o TDAList.o TDAQueue.o TDAStack.o
	g++ main.o Alumno.o ArrayList.o ArrayQueue.o ArrayStack.o LinkedList.o LinkedQueue.o LnkedStack.o Node.o Simbolo.o TDAList.o TDAQueue.o TDAStack.o -o run

main.o:	main.cpp
	g++ main.cpp

Alumno.o:	Alumno.cpp Alumno.h
	g++ Alumno.cpp

ArrayList.o:	ArrayList.cpp ArrayList.h
	g++ ArrayList.cpp

ArrayQueue.o:	ArrayQueue.cpp ArrayQueue.h
	g++ ArrayQueue.cpp

ArrayStack.o:	ArrayStack.cpp ArrayStack.h
	g++ ArrayStack.cpp

LinkedList.o:	LinkedList.cpp LinkedList.h
	g++ LinkedList.cpp

LinkedQueue.o:	LinkedQueue.cpp LinkedQueue.h
	g++ LinkedQueue.cpp

LnkedStack.o:	LnkedStack.cpp LnkedStack.h
	g++ LnkedStack.cpp

Node.o:	Node.cpp Node.h
	g++ Node.cpp

Simbolo.o:	Simbolo.cpp Simbolo.h
	g++ Simbolo.cpp

TDAList.o:	TDAList.cpp TDAList.h
	g++ TDAList.cpp

TDAQueue.o:	TDAQueue.cpp TDAQueue.h
	g++ TDAQueue.cpp

TDAStack.o:	TDAStack.cpp TDAStack.h
	g++ TDAStack.cpp