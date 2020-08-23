#include <iostream>
using namespace std;

#include "Object.h"
#include "Node.h"

#include "TDAList.h"
#include "TDAList.cpp"
#include "TDAQueue.h"
#include "TDAStack.h"

#include "ArrayList.h"
#include "ArrayList.cpp"
#include "ArrayQueue.h"
#include "ArrayStack.h"

#include "LinkedList.h"
#include "LinkedQueue.h"
#include "LnkedStack.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	//apuntadores a las diferentes TDAs
	TDAList *Lista;
	TDAStack *Pila;
	TDAQueue *Cola;

	int opcion = 0;
	cout << "-----BIENVENIDO-----" << endl
		 << endl;
	while (opcion != 4)
	{
		cout << endl
			 << "--MENU PRINCIPAL--" << endl
			 << "1.Trabajar con Listas" << endl
			 << "2.Trabajar con Pilas" << endl
			 << "3.Trabajar con Colas" << endl
			 << "4.Salir" << endl
			 << "Escoja una opcion: ";
		cin >> opcion;

		switch (opcion)
		{
		case 1:
		{
			int opcionSub = 0;
			cout << endl
				 << "--MENU LISTAS--";
			while (opcionSub != 3)
			{
				cout << endl
					 << "1.Trabajar con ArrayList"
					 << endl
					 << "2.Trabajar con Linked List" << endl
					 << "3.Regresar al Menu Principal"
					 << endl
					 << "Escoja una opcion: ";
				cin >> opcionSub;
				switch (opcionSub)
				{
				case 1:
				{
					//Lista = new ArrayList();
					
					break;
				}
				case 2:
				{
					//Lista = new LinkedList();
					break;
				}

				default:
					break;
				} //fin del switch del submenu de TDA Lista
			}	  //while del subMenu de listas

			break;
		}

		default:
			break;
		}

	} //fin del while
	cout << endl
		 << "-----HASTA LUEGO-----";

	//deletes de los punteros
	delete Lista;
	delete Pila;
	delete Cola;
	return 0;
}
