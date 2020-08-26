run.o:	Alumno.o ArrayList.o ArrayQueue.o ArrayStack.o LinkedList.o LinkedQueue.o LnkedStack.o Node.o Simbolo.o TDAQueue.o TDAStack.o main.o
	g++ Alumno.o ArrayList.o ArrayQueue.o ArrayStack.o LinkedList.o LinkedQueue.o LnkedStack.o Node.o Simbolo.o TDAQueue.o TDAStack.o main.o -o run

Alumno.o:	Alumno.cpp Alumno.h
	g++ -c Alumno.cpp

ArrayList.o:	ArrayList.cpp ArrayList.h
	g++ -c ArrayList.cpp

ArrayQueue.o:	ArrayQueue.cpp ArrayQueue.h
	g++ -c ArrayQueue.cpp

ArrayStack.o:	ArrayStack.cpp ArrayStack.h
	g++ -c ArrayStack.cpp

LinkedList.o:	LinkedList.cpp LinkedList.h
	g++ -c LinkedList.cpp

LinkedQueue.o:	LinkedQueue.cpp LinkedQueue.h
	g++ -c LinkedQueue.cpp

LnkedStack.o:	LnkedStack.cpp LnkedStack.h
	g++ -c LnkedStack.cpp

Node.o:	Node.cpp Node.h
	g++ -c Node.cpp

Simbolo.o:	Simbolo.cpp Simbolo.h
	g++ -c Simbolo.cpp

TDAList.o:	TDAList.cpp TDAList.h
	g++ -c TDAList.cpp

TDAQueue.o:	TDAQueue.cpp TDAQueue.h
	g++ -c TDAQueue.cpp

TDAStack.o:	TDAStack.cpp TDAStack.h
	g++ -c TDAStack.cpp

main.o:	main.cpp
	g++ -c main.cpp