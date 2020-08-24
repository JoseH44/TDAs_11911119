#include <iostream>
using namespace std;

#include "Object.h"
#include "Node.h"

#include "TDAList.h"
#include "TDAQueue.h"
#include "TDAStack.h"

#include "ArrayList.h"
#include "ArrayQueue.h"
#include "ArrayStack.h"

#include "LinkedList.h"
#include "LinkedQueue.h"
#include "LnkedStack.h"

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
		case 2:
		{
			int opcionSub = 0;
			cout << endl
				 << "--MENU PILAS--";
			while (opcionSub != 3)
			{
				cout << endl
					 << "1.Trabajar con ArrayStack"
					 << endl
					 << "2.Trabajar con LinkedStacked"
					 << endl
					 << "3.Regresar al Menu Principal"
					 << endl
					 << "Escoja una opcion: ";
				cin >> opcionSub;
				switch (opcionSub)
				{
				case 1:
				{
					break;
				}

				case 2:
				{
					break;
				}

				default:
					break;
				} //fin del switch del submenu de TDA PILA
			}

			break;
		}
		case 3:
		{
			int opcionSub = 0;
			cout << endl
				 << "--MENU COLAS--";
			while (opcionSub != 3)
			{
				cout << endl
					 << "1.Trabajar con ArrayQueue"
					 << endl
					 << "2.Trabajar con LinkedQueue"
					 << endl
					 << "3.Regresar al Menu Principal"
					 << endl
					 << "Escoja una opcion: ";
				cin >> opcionSub;
				switch (opcionSub)
				{
				case 1:
				{
					break;
				}
				case 2:
				{
					break;
				}
				case 3:
				{
					break;
				}

				default:
					break;
				}
			}

			break;
		} //fin del switch de TDA COLA

		default:
			break;
		} //fin del switch principal

	} //fin del while principal
	cout << endl
		 << "-----HASTA LUEGO-----";

	//deletes de los punteros
	delete Lista;
	delete Pila;
	delete Cola;
	return 0;
}
