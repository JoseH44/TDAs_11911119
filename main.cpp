#include <iostream>
using namespace std;

#include "Object.h"
#include "Node.h"

#include "Alumno.h"
#include "Alumno.cpp"
#include "Simbolo.h"

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

int main()
{
	//apuntadores a las diferentes TDAs
	TDAList *Lista;
	TDAStack *Pila;
	TDAQueue *Cola;
	Object *alumno;

	

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
					int posicion;
					Lista = new ArrayList();
					int opcionSub1 = 0;
					string A_nombre;
					int A_cuenta;

					 
					while (opcionSub1 != 10)
					{
						cout << endl
						 	 << "--OPERACIONES DE LISTA--"<< endl
							 << "1.Insertar Elemento" << endl
							 << "2.Imprimir Elementos" << endl
							 << "3.Buscar Elemento" << endl
							 << "4.Borrar Elemento" << endl
							 << "5.Ver si esta Vacia " << endl
							 << "6.Obtener Elemento por Posicion" << endl
							 << "7.Obtener Siguiente" << endl
							 << "8.Obtener Anterior" << endl
							 << "9.Borrar Todos los Elementos" << endl
							 << "10.Regresar al Menu" << endl
							 << "Escoja una opcion: ";
						cin >> opcionSub1;
						switch (opcionSub1)
						{
						case 1:
						{
							int respuesta = -1;
							while (respuesta != 0)
							{
								cout << endl << "Ingrese el Nombre del Alumno:" ;
								cin >> A_nombre;
								cout << endl << "Ingrese su Numero de Cuenta: ";
								cin >> A_cuenta;
								cout << endl << "Ingrese la Posicion en la que se Guardara: ";
								cin >> posicion;

								if (Lista->inserta(posicion,new Alumno(A_nombre,A_cuenta)))
								{
									cout<<endl<<"El Alumno fue Insertado Exitosamente!"<<endl;
								}else{
									cout<<endl<<"El Alumno no Fue Insertado"<<endl;
								}
								

								cout << endl << "Desea Introducir Otro Elemento[1/0]: ";
								cin >> respuesta;

							}
							
							break;
						}
						case 2:
						{
							cout<<endl<<"Lista de Alumnos:"<<endl;
							Lista->imprime();
							break;
						}
						case 3:
						{
							int pos,cuenta_ref;
							cout<<endl<<"Ingrese el Numero de Cuenta:";
							cin >> cuenta_ref;
							alumno = new Alumno(" ",cuenta_ref);
							pos = Lista->localiza(alumno);
							
							if (pos != -1)
							{
								cout <<endl<<"El Alumno se encontro en la Posicion: "<<pos
									 <<endl;
							}else{
								cout<<endl<<"El Alumno No fue Encontrado"<<endl;
							}
							
							break;
						}
						case 4:
						{
							int posBusqueda;
							cout<<endl<<"Ingrese la Posicion a Eliminar:";
							cin >> posBusqueda;
							if (alumno = Lista->suprime(posBusqueda))
							{
								cout <<endl<<"El Alumno fue Eliminado Exitosamente!"
									 <<endl<<"Alumno Eliminado:" <<endl<<alumno->toString();
							}else{
								cout <<endl<<"El Alumno no fue Eliminado";
							}
							
							break;
						}
						case 5:
						{
							if (Lista->vacia())
							{
								cout<<endl<<"La lista Esta Vacia"<<endl;
							}else{
								cout<<endl<<"La lista No Esta Vacia"<<endl<<
									"Tiene "<<endl;
							}
							
							break;
						}
						case 6:
						{
							int posBusqueda;
							cout<<endl<<"Ingrese la Posicion a Obtener:";
							cin >> posBusqueda;
							if (alumno = Lista->recupera(posBusqueda))
							{
								cout<<endl<<"Alumno Recuperado:"<<endl
								  	<<alumno->toString()<<endl;
								
							}else{
								cout<<endl<<"Posicion no Valida"<<endl;
							}
							
							break;
						}
						case 7:
						{
							int posBusqueda;
							cout<<endl<<"Ingrese la Posicion:";
							cin >> posBusqueda;
							if (alumno = Lista->siguiente(posBusqueda))
							{
								cout<<endl<<"Alumno en la Posicion Siguiente:"<<endl
								  	<<alumno->toString()<<endl;
							}else{
								cout<<endl<<"La Siguiente Posicion Esta Vacia"<<endl;
							}
							
							break;
						}
						case 8:
						{
							int posBusqueda;
							cout<<endl<<"Ingrese la Posicion:";
							cin >> posBusqueda;
							if (alumno = Lista->anterior(posBusqueda))
							{
								cout<<endl<<"Alumno en la Posicion Anterior:"<<endl
								  	<<alumno->toString()<<endl;
							}else{
								cout<<endl<<"La Posicion Anterior Esta Vacia"<<endl;
							}
							break;
						}
						case 9:
						{
							Lista->anula();
							break;
						}

						default:
							break;
						} //switch de las opciones de las operaciones de lista
					}	  //while de las opciones de las operaciones de lista

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
	delete alumno;
	return 0;
}
