#include <iostream>
using namespace std;

//#include "Object.h"

#include "Node.h"

#include "Alumno.h"

#include "Simbolo.h"

//#include "TDAList.h"

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
	TDAList *Lista = nullptr;
	TDAStack *Pila = nullptr;
	TDAQueue *Cola = nullptr;
	Object *alumno = nullptr;
	Object *simbolo = nullptr;

	

	int opcion = 0;
	cout <<endl<< "-----BIENVENIDO-----" << endl
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
									"Tiene "<<Lista->getN()<<" Elementos"<<endl;
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
							if(posBusqueda < 1){
								cout<<endl<<"Posicion Invalida"<<endl;
							}else{
								if (alumno = Lista->siguiente(posBusqueda)){
									cout<<endl<<"Alumno en la Posicion Siguiente:"<<endl
								  		<<alumno->toString()<<endl;
								}else{
									cout<<endl<<"La Siguiente Posicion Esta Vacia"<<endl;
								}
							}
							
							
							break;
						}
						case 8:
						{
							int posBusqueda;
							cout<<endl<<"Ingrese la Posicion:";
							cin >> posBusqueda;
							if(posBusqueda <1){
								cout<<endl<<"Posicion Invalida"<<endl;
							}else{
								if (alumno = Lista->anterior(posBusqueda)){
									cout<<endl<<"Alumno en la Posicion Anterior:"<<endl
								  		<<alumno->toString()<<endl;
								}else{
									cout<<endl<<"La Posicion Anterior Esta Vacia"<<endl;
								}
							}
							
							break;
						}
						case 9:
						{
							Lista->anula();
							cout<<endl<<"Elementos Borrados de la Lista"<<endl;
							break;
						}

						default:
							break;
						} //switch de las opciones de las operaciones de lista
					}	  //while de las opciones de las operaciones de lista

					break;
				}
				//linkedLIst
				case 2:
				{
					int posicion;
					Lista = new LinkedList();
					int opcionSub1 = 0;
					string A_nombre;
					int A_cuenta;

					 
					while (opcionSub1 != 10)
					{
						cout << endl << endl
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
									"Tiene "<<Lista->getN()<<" Elemento(s)"<<endl;
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
							if (posBusqueda < 1)
							{
								cout<<endl<<"La Lista Empieza en el Numero 1"<<endl;
							}else{
								if (alumno = Lista->siguiente(posBusqueda))
								{
									cout<<endl<<"Alumno en la Posicion Siguiente:"<<endl
								  		<<alumno->toString()<<endl;
								}else{
								cout<<endl<<"La Siguiente Posicion Esta Vacia"<<endl;
								}
							}
							
							
							
							break;
						}
						case 8:
						{
							int posBusqueda;
							cout<<endl<<"Ingrese la Posicion:";
							cin >> posBusqueda;
							if (posBusqueda < 1)
							{
								cout<<endl<<"Posicion No Valida"<<endl;
							}else{
								if (alumno = Lista->anterior(posBusqueda))
								{
									cout<<endl<<"Alumno en la Posicion Anterior:"<<endl
								  		<<alumno->toString()<<endl;
								}else{
									cout<<endl<<"La Posicion Anterior Esta Vacia"<<endl;
								}
							}
							
							
							break;
						}
						case 9:
						{
							Lista->anula();
							cout<<endl<<"Elementos Borrados de la Lista"<<endl;
							break;
						}

						default:
							break;
						} //switch de las opciones de las operaciones de lista
					}	  //while de las opciones de las operaciones de lista
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
			while (opcionSub != 3)
			{
				cout << endl
				 	<< "--MENU PILAS--"<< endl
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
					Pila = new ArrayStack();
					int opcionSub1 = 0;
					while (opcionSub1 != 6)
					{
						cout<<endl<<endl<<"--OPERACIONES DE PILA--"<<endl
							<<"1.Empujar(Push)"<<endl<<"2.Sacar(Pop)"
							<<endl<<"3.Ver Tope(Top)"<<endl<<"4.Verificar si esta vacia"
							<<endl<<"5.Imprimir elementos"<<endl<<"6.Regresar al Menu"
							<<endl<<"Escoja una opcion: ";
						cin >> opcionSub1;
						switch (opcionSub1)
						{
						case 1:{
							char simbolo_entrada;
							cout<<"Ingrese un Simbolo para Empujar a la Pila:";
							cin >> simbolo_entrada;
							Pila->push(new Simbolo(simbolo_entrada));
							cout<<endl<<"Simbolo Empujado Exitosamente!"<<endl;
							break;
						}
						case 2:{
							if (simbolo = Pila->pop())
							{
								cout<<endl<<"Elemento Sacado:"<<endl;
								cout<<simbolo->toString();
							}else
							{
								cout<<endl<<"No hay Elementos en la Pila";
							}
							
							
							break;
						}
						case 3:{
							if (simbolo = Pila->top())
							{
								cout<<endl<<"Elemento en el Tope:"<<endl;
								cout<<simbolo->toString();
							}else
							{
								cout<<endl<<"No hay Elementos en la Pila";
							}
							
							break;
						}
						case 4:{
							if (Pila->isEmpty())
							{
								cout<<endl<<"Esta Vacia"<<endl;
							}else
							{
								cout<<endl<<"No esta Vacia"<<endl;
							}
							
							
							break;
						}
						case 5:{
							cout<<endl<<endl<<"Elementos en la Pila:"<<endl<<endl;
							Pila->print();
							break;
						}
						
						default:
							break;
						}//switch de las operaciones de pila
					}//while de pila 1
					
					break;
				}

				case 2:
				{
					Pila = new LnkedStack();
					int opcionSub1 = 0;
					while (opcionSub1 != 6)
					{
						cout<<endl<<endl<<"--OPERACIONES DE PILA--"<<endl
							<<"1.Empujar(Push)"<<endl<<"2.Sacar(Pop)"
							<<endl<<"3.Ver Tope(Top)"<<endl<<"4.Verificar si esta vacia"
							<<endl<<"5.Imprimir elementos"<<endl<<"6.Regresar al Menu"
							<<endl<<"Escoja una opcion: ";
						cin >> opcionSub1;
						switch (opcionSub1)
						{
						case 1:{
							char simbolo_entrada;
							cout<<"Ingrese un Simbolo para Empujar a la Pila:";
							cin >> simbolo_entrada;
							Pila->push(new Simbolo(simbolo_entrada));
							cout<<endl<<"Simbolo Empujado Exitosamente!"<<endl;
							break;
						}
						case 2:{
							if (simbolo = Pila->pop())
							{
								cout<<endl<<"Elemento Sacado:"<<endl;
								cout<<simbolo->toString();
							}else
							{
								cout<<endl<<"No hay Elementos en la Pila";
							}
							
							
							break;
						}
						case 3:{
							if (simbolo = Pila->top())
							{
								cout<<endl<<"Elemento en el Tope:"<<endl;
								cout<<simbolo->toString();
							}else
							{
								cout<<endl<<"No hay Elementos en la Pila";
							}
							
							break;
						}
						case 4:{
							if (Pila->isEmpty())
							{
								cout<<endl<<"Esta Vacia"<<endl;
							}else
							{
								cout<<endl<<"No esta Vacia"<<endl;
							}
							
							
							break;
						}
						case 5:{
							cout<<endl<<endl<<"Elementos en la Pila:"<<endl<<endl;
							Pila->print();
							break;
						}
						
						default:
							break;
						}//switch de las operaciones de pila
					}//while pila 2

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
			cout ;
			while (opcionSub != 3)
			{
				cout << endl
					<< "--MENU COLAS--"
					<<endl
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
					string A_nombre;
					int A_cuenta;
					int opcionSub1 = 0;
					Cola = new ArrayQueue();
					while (opcionSub1 != 6)
					{
						cout<<endl<<"--OPERACIONES DE COLAS--"<<endl
							<<"1.Encolar(Queue) "<<endl<<"2.Desencolar(Dequeue) "
							<<endl<<"3.Ver Tope(Peek) "<<endl<<"4.Verificar si esta vacia"
							<<endl<<"5.Imprimir elementos"<<endl<<"6.Regresar al Menu"
							<<endl<<"Escoja una opcion: ";
						cin >> opcionSub1;
						switch (opcionSub1)
						{
						case 1:{
							cout << endl << "Ingrese el Nombre del Alumno:" ;
							cin >> A_nombre;
							cout << endl << "Ingrese su Numero de Cuenta: ";
							cin >> A_cuenta;
							Cola->poneEnCola(new Alumno(A_nombre,A_cuenta));
							cout<<endl<<"Alumno Puesto en Cola Exitosamente!"<<endl;
							break;
						}
						case 2:{
							if (alumno = Cola->quitaDeCola())
							{
								cout<<endl<<"Elemento Sacado de la Cola:"<<endl
									<<alumno->toString()<<endl;
							}else
							{
								cout<<endl<<"No hay Elementos en la Cola"<<endl;
							}
							
							
							break;
						}
						case 3:{
							if (alumno = Cola->frente())
							{
								cout<<endl<<"Elemento en el Frente de la Cola:"<<endl
									<<alumno->toString()<<endl;

							}else
							{
								cout<<endl<<"No hay Elementos en la Cola"<<endl;

							}
							
							
							break;
						}
						case 4:{
							if (Cola->vacia())
							{
								cout<<endl<<"La Cola Esta Vacia"<<endl;
								
							}else
							{
								cout<<endl<<"La Cola No Esta Vacia"<<endl;

							}
							
							
							break;
						}
						case 5:{
							cout<<endl<<"Elementos en la Cola:"<<endl;
							Cola->imprime();
							
							break;
						}
						
						default:
							break;
						}//switch de las operaciones de cola
					}//while de cola 2
					
					break;
				}
				case 2:
				{
					string A_nombre;
					int A_cuenta;
					int opcionSub1 = 0;
					Cola = new LinkedQueue();
					while (opcionSub1 != 6)
					{
						cout<<endl<<"--OPERACIONES DE COLAS--"<<endl
							<<"1.Encolar(Queue) "<<endl<<"2.Desencolar(Dequeue) "
							<<endl<<"3.Ver Tope(Peek) "<<endl<<"4.Verificar si esta vacia"
							<<endl<<"5.Imprimir elementos"<<endl<<"6.Regresar al Menu"
							<<endl<<"Escoja una opcion: ";
						cin >> opcionSub1;
						switch (opcionSub1)
						{
						case 1:{
							cout << endl << "Ingrese el Nombre del Alumno:" ;
							cin >> A_nombre;
							cout << endl << "Ingrese su Numero de Cuenta: ";
							cin >> A_cuenta;
							Cola->poneEnCola(new Alumno(A_nombre,A_cuenta));
							cout<<endl<<"Alumno Puesto en Cola Exitosamente!"<<endl;
							break;
						}
						case 2:{
							if (alumno = Cola->quitaDeCola())
							{
								cout<<endl<<"Elemento Sacado de la Cola:"<<endl
									<<alumno->toString()<<endl;
							}else
							{
								cout<<endl<<"No hay Elementos en la Cola"<<endl;
							}
							
							
							break;
						}
						case 3:{
							if (alumno = Cola->frente())
							{
								cout<<endl<<"Elemento en el Frente de la Cola:"<<endl
									<<alumno->toString()<<endl;

							}else
							{
								cout<<endl<<"No hay Elementos en la Cola"<<endl;

							}
							
							
							break;
						}
						case 4:{
							if (Cola->vacia())
							{
								cout<<endl<<"La Cola Esta Vacia"<<endl;
								
							}else
							{
								cout<<endl<<"La Cola No Esta Vacia"<<endl;

							}
							
							
							break;
						}
						case 5:{
							cout<<endl<<"Elementos en la Cola:"<<endl;
							Cola->imprime();
							
							break;
						}
						
						default:
							break;
						}//switch de las operaciones de cola
					}//while de cola 2
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
		 << "-----HASTA LUEGO-----"<<endl;

	//deletes de los punteros
	
	if (Lista)
	{
		delete Lista;
	}
	
	if (Pila)
	{
		delete Pila;
	}
	
	if (Cola)
	{
		delete Cola;
	}
	
	return 0;
}
