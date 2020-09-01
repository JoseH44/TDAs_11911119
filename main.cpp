#include <iostream>
using namespace std;

#include <string>
using std::string;

#include <ctype.h>

#include <stdlib.h>


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

int validarNumero(string);

bool validarChar(string);

int main()
{
	//apuntadores a las diferentes TDAs
	TDAList *Lista = nullptr;
	TDAStack *Pila = nullptr;
	TDAQueue *Cola = nullptr;
	Object *alumno = nullptr;
	Object *simbolo = nullptr;

	

	
	
	string entrada;
	int Gflag;
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
		cin >> entrada;

		Gflag = validarNumero(entrada);

		//validación de entrada principal
		while (Gflag != 0)
		{
			cout << endl<<"No Ha ingresado un Numero!"<<endl<<endl
				<< "--MENU PRINCIPAL--" << endl
				<< "1.Trabajar con Listas" << endl
				<< "2.Trabajar con Pilas" << endl
				<< "3.Trabajar con Colas" << endl
				<< "4.Salir" << endl
				<< "Escoja una opcion: ";
			cin >> entrada;

			Gflag = validarNumero(entrada);
		}

		opcion = stoi(entrada);//pasa el string a número
		


		switch (opcion)
		{
		case 1:
		{
			int opcionSub = 0;
			int flag_one;
			string entrada1;
			
			while (opcionSub != 3)
			{
				cout << endl<< "--MENU LISTAS--"<<endl
					<< "1.Trabajar con ArrayList"
					<< endl
					<< "2.Trabajar con Linked List" << endl
					<< "3.Regresar al Menu Principal"
					<< endl
					<< "Escoja una opcion: ";
				cin >> entrada1;

				flag_one = validarNumero(entrada1);
				//validación de entrada de la opción 1
				while (flag_one != 0)
				{
					cout << endl<<"No ha Ingresado un Numero!"<<endl<<endl
						<< "--MENU LISTAS--"<<endl
						<< "1.Trabajar con ArrayList"
						<< endl
						<< "2.Trabajar con Linked List" << endl
						<< "3.Regresar al Menu Principal"
						<< endl
						<< "Escoja una opcion: ";
					cin >> entrada1;

					flag_one = validarNumero(entrada1);
				}

				opcionSub = stoi(entrada1);
				

				switch (opcionSub)
				{
				case 1:
				{
					int posicion;
					Lista = new ArrayList();
					int opcionSub1 = 0;
					string A_nombre,Pcuenta;
					int flag;
					int A_cuenta;

					//variables para validar entrada
					string vEntrada;
					int lFlag;
					 
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
						cin >> vEntrada;

						lFlag = validarNumero(vEntrada);

						//while de validación para la entrada
						while (lFlag != 0)
						{
							cout<<endl<<"No Ha Ingresado un Numero!"<<endl
								<< endl
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
							cin >> vEntrada;

							lFlag = validarNumero(vEntrada);
						}
						

						opcionSub1 = stoi(vEntrada);

						switch (opcionSub1)
						{
						case 1:
						{
							
							int respuesta = -1;
							//variables para validar
							string posEntrada,resEntrada;
							int pFlag,rFlag;

							while (respuesta != 0)
							{
								cin.ignore(1000,'\n');
								cout << endl << "Ingrese el Nombre del Alumno:" ;
								getline(cin,A_nombre);

								/*
								Bloque para validar la entrada de la posición
								*/
								cout << endl << "Ingrese su Numero de Cuenta: ";
								getline(cin,Pcuenta);
								flag = validarNumero(Pcuenta);

								//validar el numero de cuenta
								while (flag != 0)
								{
									cout<<endl<<"Numero de Cuenta Invalido!"<<endl;
									
									cout << endl << "Ingrese Nuevamente el Numero de Cuenta: ";
									getline(cin,Pcuenta);
									flag = validarNumero(Pcuenta);
								}
								
								A_cuenta = stoi(Pcuenta);

								/*
								Bloque para validar la entrada de la posición
								*/

								cout << endl << "Ingrese la Posicion en la que se Guardara: ";
								cin >> posEntrada;


								pFlag = validarNumero(posEntrada);

								//validar la posición
								while (pFlag != 0)
								{
									cout<<endl<<"No Ha Ingresado un Numero!"<<endl
										<<endl<<"Ingrese Nuevamente la Posicion:";

									cin>>posEntrada;

									pFlag = validarNumero(posEntrada);
								}

								posicion = stoi(posEntrada);
								
								//validación para que la posición sea mayor que 0
								if(posicion < 1){
									cout<<endl<<endl<<"La Lista Empieza en la Posicion 1"
										<<endl;
								}else{
									if (Lista->inserta(posicion,new Alumno(A_nombre,A_cuenta))){
										cout<<endl<<"El Alumno fue Insertado Exitosamente!"<<endl;
									}else{
										cout<<endl<<"El Alumno no Fue Insertado"<<endl;
									}
								}

								
								
								/*
								Bloque para validar la entrada de la respuesta
								*/
								cout << endl << "Desea Introducir Otro Elemento[1/0]: ";
								cin >> resEntrada;

								rFlag = validarNumero(resEntrada);

								//while para validar la respuesta
								while (rFlag != 0)
								{
									cout<<endl<<"No Ha Ingresado un Numero!"<<endl
										<<endl<<"Ingrese Nuevamente la Respuesta-->"
										<<endl<<"Desea Introducir Otro Elemento[1/0]: ";
									cin >> resEntrada;

									rFlag = validarNumero(resEntrada);
								}

								respuesta = stoi(resEntrada);
								

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
							//variables
							string entrada_validar;
							int pos,cuenta_ref,cFlag;
							
							cout<<endl<<"Ingrese el Numero de Cuenta:";
							cin >> entrada_validar;

							cFlag = validarNumero(entrada_validar);

							//validar la entrada de
							while (cFlag != 0)
							{
								cout<<endl<<"Numero de Cuenta Invalido!"<<endl;
									
								cout << endl << "Ingrese Nuevamente el Numero de Cuenta: ";
								cin >> entrada_validar;
								cFlag = validarNumero(entrada_validar);
							}

							cuenta_ref = stoi(entrada_validar);
								

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
							//varaibles para validar
							string posEntrada;
							int pFlag;

							/*
							Bloque para validar la posición a eliminar
							*/
							cout<<endl<<"Ingrese la Posicion a Eliminar:";
							cin >> posEntrada;

							pFlag = validarNumero(posEntrada);

							while (pFlag != 0)
							{
								cout<<endl<<"No Ha Ingresado un Numero!"<<endl
									<<endl<<"Ingrese la Posicion Nuevamente:";
								
								cin >> posEntrada;

								pFlag = validarNumero(posEntrada);
							}

							posBusqueda = stoi(posEntrada);

							if(posBusqueda < 1){
								cout<<endl<<endl<<"La Lista Empieza en la Posicion 1"
									<<endl;
							}else{
								if (alumno = Lista->suprime(posBusqueda)){
									cout <<endl<<"El Alumno fue Eliminado Exitosamente!"
										<<endl<<"Alumno Eliminado:" <<endl<<alumno->toString();
								}else{
									cout <<endl<<"El Alumno no fue Eliminado";
								}

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
							//varaibles para validar
							string posEntrada;
							int pFlag;

							cout<<endl<<"Ingrese la Posicion a Obtener:";
							cin >> posEntrada;
							pFlag = validarNumero(posEntrada);

							//while para validar la posición a buscar
							while (pFlag != 0)
							{
								cout << endl << "No Ha Ingresado un Numero!" << endl
									<< endl << "Ingrese la Posicion Nuevamente:";
								
								cin >> posEntrada;
								pFlag = validarNumero(posEntrada);

							}

							posBusqueda = stoi(posEntrada);

							if(posBusqueda < 1){
								cout << endl << "La Lista Empieza en la Posicion 1"
									<<endl;
							}else{
								if (alumno = Lista->recupera(posBusqueda)){
									cout<<endl<<"Alumno Recuperado:"<<endl
								  		<<alumno->toString()<<endl;
								
								}else{
									cout<<endl<<"Posicion no Valida"<<endl;
								}
							}
							

							
							
							break;
						}
						case 7:
						{
							int posBusqueda;
							//varaibles para validar
							string posEntrada;
							int pFlag;

							cout<<endl<<"Ingrese la Posicion:";
							cin >> posEntrada;

							pFlag = validarNumero(posEntrada);
							while (pFlag != 0)
							{
								cout << endl << "No Ha Ingresado un Numero!" << endl
									<< endl << "Ingrese la Posicion Nuevamente:";
								
								cin >> posEntrada;
								pFlag = validarNumero(posEntrada);
							}

							posBusqueda = stoi(posEntrada);
							

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
							//varaibles para validar
							string posEntrada;
							int pFlag;

							cout<<endl<<"Ingrese la Posicion:";
							cin >> posEntrada;

							pFlag = validarNumero(posEntrada);
							while (pFlag != 0)
							{
								cout << endl << "No Ha Ingresado un Numero!" << endl
									<< endl << "Ingrese la Posicion Nuevamente:";
								
								cin >> posEntrada;
								pFlag = validarNumero(posEntrada);
							}

							posBusqueda = stoi(posEntrada);

							if(posBusqueda <=1){
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
					string A_nombre,Pcuenta;

					int A_cuenta,flag;
					
					//variables para validar entrada
					string vEntrada;
					int lFlag;
					 
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
						cin >> vEntrada;


						lFlag = validarNumero(vEntrada);

						//while de validación para la entrada
						while (lFlag != 0)
						{
							cout<<endl<<"No Ha Ingresado un Numero!"<<endl
								<< endl
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
							cin >> vEntrada;

							lFlag = validarNumero(vEntrada);
						}
						

						opcionSub1 = stoi(vEntrada);

						switch (opcionSub1)
						{
						case 1:
						{
							int respuesta = -1;
							//variables para validar
							string posEntrada,resEntrada;
							int pFlag,rFlag;

							while (respuesta != 0)
							{
								cin.ignore(1000,'\n');
								cout << endl << "Ingrese el Nombre del Alumno:" ;
								getline(cin,A_nombre);

								cout << endl << "Ingrese su Numero de Cuenta: ";
								getline(cin,Pcuenta);
								flag = validarNumero(Pcuenta);
								while (flag != 0)
								{
									cout<<endl<<"Numero de Cuenta Invalido"<<endl;
									
									cout << endl << "Ingrese su Numero de Cuenta: ";
									getline(cin,Pcuenta);
									flag = validarNumero(Pcuenta);
								}
								
								A_cuenta = stoi(Pcuenta);

								/*
								Bloque para validar la entrada de la posición
								*/

								cout << endl << "Ingrese la Posicion en la que se Guardara: ";
								cin >> posEntrada;


								pFlag = validarNumero(posEntrada);

								//validar la posición
								while (pFlag != 0)
								{
									cout<<endl<<"No Ha Ingresado un Numero!"<<endl
										<<endl<<"Ingrese Nuevamente la Posicion:";

									cin>>posEntrada;

									pFlag = validarNumero(posEntrada);
								}

								posicion = stoi(posEntrada);

								//validación para que la posición sea mayor que 0
								if(posicion < 1){
									cout<<endl<<endl<<"La Lista Empieza en la Posicion 1"
										<<endl;
								}else{
									if (Lista->inserta(posicion,new Alumno(A_nombre,A_cuenta))){
										cout<<endl<<"El Alumno fue Insertado Exitosamente!"<<endl;
									}else{
										cout<<endl<<"El Alumno no Fue Insertado"<<endl;
									}
								}

								
								/*
								Bloque para validar la entrada de la respuesta
								*/
								cout << endl << "Desea Introducir Otro Elemento[1/0]: ";
								cin >> resEntrada;

								rFlag = validarNumero(resEntrada);

								//while para validar la respuesta
								while (rFlag != 0)
								{
									cout<<endl<<"No Ha Ingresado un Numero!"<<endl
										<<endl<<"Ingrese Nuevamente la Respuesta-->"
										<<endl<<"Desea Introducir Otro Elemento[1/0]: ";
									cin >> resEntrada;

									rFlag = validarNumero(resEntrada);
								}

								respuesta = stoi(resEntrada);

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
							int pos,cuenta_ref,cFlag;
							string entrada_validar;
							
							cout<<endl<<"Ingrese el Numero de Cuenta:";
							cin >> entrada_validar;

							cFlag = validarNumero(entrada_validar);

							//validar la entrada de
							while (cFlag != 0)
							{
								cout<<endl<<"Numero de Cuenta Invalido!"<<endl;
									
								cout << endl << "Ingrese Nuevamente el Numero de Cuenta: ";
								cin >> entrada_validar;
								cFlag = validarNumero(entrada_validar);
							}

							cuenta_ref = stoi(entrada_validar);


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
							//varaibles para validar
							string posEntrada;
							int pFlag;


							/*
							Bloque para validar la posición a eliminar
							*/
							cout<<endl<<"Ingrese la Posicion a Eliminar:";
							cin >> posEntrada;

							pFlag = validarNumero(posEntrada);

							while (pFlag != 0)
							{
								cout<<endl<<"No Ha Ingresado un Numero!"<<endl
									<<endl<<"Ingrese la Posicion Nuevamente:";
								
								cin >> posEntrada;

								pFlag = validarNumero(posEntrada);
							}

							posBusqueda = stoi(posEntrada);

							if(posBusqueda < 1){
								cout<<endl<<endl<<"La Lista Empieza en la Posicion 1"
									<<endl;
							}else{
								if (alumno = Lista->suprime(posBusqueda)){
									cout <<endl<<"El Alumno fue Eliminado Exitosamente!"
										<<endl<<"Alumno Eliminado:" <<endl<<alumno->toString();
								}else{
									cout <<endl<<"El Alumno no fue Eliminado";
								}

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
							//varaibles para validar
							string posEntrada;
							int pFlag;

							cout<<endl<<"Ingrese la Posicion a Obtener:";
							cin >> posEntrada;
							pFlag = validarNumero(posEntrada);

							//while para validar la posición a buscar
							while (pFlag != 0)
							{
								cout << endl << "No Ha Ingresado un Numero!" << endl
									<< endl << "Ingrese la Posicion Nuevamente:";
								
								cin >> posEntrada;
								pFlag = validarNumero(posEntrada);

							}

							posBusqueda = stoi(posEntrada);

							if(posBusqueda < 1){
								cout << endl << "La Lista Empieza en la Posicion 1"
									<<endl;
							}else{
								if (alumno = Lista->recupera(posBusqueda)){
									cout<<endl<<"Alumno Recuperado:"<<endl
								  		<<alumno->toString()<<endl;
								
								}else{
									cout<<endl<<"Posicion no Valida"<<endl;
								}
							}


							
							break;
						}
						case 7:
						{
							

							int posBusqueda;
							//varaibles para validar
							string posEntrada;
							int pFlag;

							cout<<endl<<"Ingrese la Posicion:";
							cin >> posEntrada;

							pFlag = validarNumero(posEntrada);
							while (pFlag != 0)
							{
								cout << endl << "No Ha Ingresado un Numero!" << endl
									<< endl << "Ingrese la Posicion Nuevamente:";
								
								cin >> posEntrada;
								pFlag = validarNumero(posEntrada);
							}

							posBusqueda = stoi(posEntrada);
							

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
							//varaibles para validar
							string posEntrada;
							int pFlag;

							cout<<endl<<"Ingrese la Posicion:";
							cin >> posEntrada;

							pFlag = validarNumero(posEntrada);
							while (pFlag != 0)
							{
								cout << endl << "No Ha Ingresado un Numero!" << endl
									<< endl << "Ingrese la Posicion Nuevamente:";
								
								cin >> posEntrada;
								pFlag = validarNumero(posEntrada);
							}

							posBusqueda = stoi(posEntrada);

							if(posBusqueda <=1){
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

				default:
					break;
				} //fin del switch del submenu de TDA Lista
			}	  //while del subMenu de listas

			break;
		}
		case 2:
		{
			int opcionSub = 0;
			//variables para validar
			int flag_two;
			string entrada2;
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
				cin >> entrada2;
				/*
				Bloque para validar la entrada del menu de pilas
				*/
				flag_two = validarNumero(entrada2);
				while (flag_two != 0)
				{
					cout<<endl<<endl<<"No ha Ingresado un Numero!"<<endl
						<<endl<< "--MENU PILAS--"<< endl
						<< "1.Trabajar con ArrayStack"
						<< endl
						<< "2.Trabajar con LinkedStacked"
						<< endl
						<< "3.Regresar al Menu Principal"
						<< endl
						<< "Escoja una opcion: ";
					cin >> entrada2;
				
					flag_two = validarNumero(entrada2);
				}

				opcionSub = stoi(entrada2);
				

				switch (opcionSub)
				{
				case 1:
				{
					Pila = new ArrayStack();
					int opcionSub1 = 0;
					string pChar;
					//variables para validar
					string sEntrada;
					int sFlag;

					while (opcionSub1 != 6)
					{
						cout<<endl<<endl<<"--OPERACIONES DE PILA--"<<endl
							<<"1.Empujar(Push)"<<endl<<"2.Sacar(Pop)"
							<<endl<<"3.Ver Tope(Top)"<<endl<<"4.Verificar si esta vacia"
							<<endl<<"5.Imprimir elementos"<<endl<<"6.Regresar al Menu"
							<<endl<<"Escoja una opcion: ";
						cin >> sEntrada;

						//bloque para validar la entrada del menu de pilas
						sFlag = validarNumero(sEntrada);
						while (sFlag)
						{
							cout<<endl<<endl<<"No Ha Ingresado un Numero!"<<endl
								<<endl<<"--OPERACIONES DE PILA--"<<endl
								<<"1.Empujar(Push)"<<endl<<"2.Sacar(Pop)"
								<<endl<<"3.Ver Tope(Top)"<<endl<<"4.Verificar si esta vacia"
								<<endl<<"5.Imprimir elementos"<<endl<<"6.Regresar al Menu"
								<<endl<<"Escoja una opcion: ";
							cin >> sEntrada;

						
							sFlag = validarNumero(sEntrada);
							
						}

						opcionSub1 = stoi(sEntrada);
						
						switch (opcionSub1)
						{
						case 1:{
							cin.ignore(1000,'\n');
							char simbolo_entrada;
							cout<<endl<<"Ingrese un Simbolo para Empujar a la Pila:";
							getline(cin,pChar);
							
							while (!validarChar(pChar))
							{
								cout<<endl<<"Debe Ingresar Un Solo Caracter"<<endl
									<<"Ingrese un Simbolo para Empujar a la Pila:";
								getline(cin,pChar);

							}

							simbolo_entrada = pChar[0];
							
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
					string pChar;
					//variables para validar
					string sEntrada;
					int sFlag;

					while (opcionSub1 != 6)
					{
						cout<<endl<<endl<<"--OPERACIONES DE PILA--"<<endl
							<<"1.Empujar(Push)"<<endl<<"2.Sacar(Pop)"
							<<endl<<"3.Ver Tope(Top)"<<endl<<"4.Verificar si esta vacia"
							<<endl<<"5.Imprimir elementos"<<endl<<"6.Regresar al Menu"
							<<endl<<"Escoja una opcion: ";
						cin >> sEntrada;
						//bloque para validar la entrada del menu de pilas
						sFlag = validarNumero(sEntrada);
						while (sFlag)
						{
							cout<<endl<<endl<<"No Ha Ingresado un Numero!"<<endl
								<<endl<<"--OPERACIONES DE PILA--"<<endl
								<<"1.Empujar(Push)"<<endl<<"2.Sacar(Pop)"
								<<endl<<"3.Ver Tope(Top)"<<endl<<"4.Verificar si esta vacia"
								<<endl<<"5.Imprimir elementos"<<endl<<"6.Regresar al Menu"
								<<endl<<"Escoja una opcion: ";
							cin >> sEntrada;

						
							sFlag = validarNumero(sEntrada);
							
						}

						opcionSub1 = stoi(sEntrada);

						switch (opcionSub1)
						{
						case 1:{
							char simbolo_entrada;
							cin.ignore(1000,'\n');
							cout<<endl<<"Ingrese un Simbolo para Empujar a la Pila:";
							
							getline(cin,pChar);
							
							while (!validarChar(pChar))
							{
								cout<<endl<<"Debe Ingresar Un Solo Caracter"<<endl
									<<"Ingrese un Simbolo para Empujar a la Pila:";
								getline(cin,pChar);

							}

							simbolo_entrada = pChar[0];

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
			//variables para validar
			int flag_three;
			string entrada3;

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
				cin >> entrada3;

				flag_three = validarNumero(entrada3);

				while (flag_three != 0)
				{
					cout<<endl<<endl<<"No Ha Ingresado un Numero!"<<endl
						<<endl<<"--MENU COLAS--"
						<<endl
						<< "1.Trabajar con ArrayQueue"
						<< endl
						<< "2.Trabajar con LinkedQueue"
						<< endl
						<< "3.Regresar al Menu Principal"
						<< endl
						<< "Escoja una opcion: ";
					cin >> entrada3;

					flag_three = validarNumero(entrada3);
				}

				opcionSub = stoi(entrada3);
				

				switch (opcionSub)
				{
				case 1:
				{
					string A_nombre,Pcuenta;
					int A_cuenta,flag;
					int opcionSub1 = 0;
					Cola = new ArrayQueue();

					//variables para validar
					string cEntrada;
					int c_Flag;

					while (opcionSub1 != 6)
					{
						cout<<endl<<"--OPERACIONES DE COLAS--"<<endl
							<<"1.Encolar(Queue) "<<endl<<"2.Desencolar(Dequeue) "
							<<endl<<"3.Ver Tope(Peek) "<<endl<<"4.Verificar si esta vacia"
							<<endl<<"5.Imprimir elementos"<<endl<<"6.Regresar al Menu"
							<<endl<<"Escoja una opcion: ";
						cin >> cEntrada;

						c_Flag = validarNumero(cEntrada);
						while (c_Flag != 0)
						{
							cout<<endl<<endl<<"No ha Ingresado un Numero!"<<endl
								<<endl<<"--OPERACIONES DE COLAS--"<<endl
								<<"1.Encolar(Queue) "<<endl<<"2.Desencolar(Dequeue) "
								<<endl<<"3.Ver Tope(Peek) "<<endl<<"4.Verificar si esta vacia"
								<<endl<<"5.Imprimir elementos"<<endl<<"6.Regresar al Menu"
								<<endl<<"Escoja una opcion: ";
							cin >> cEntrada;

							c_Flag = validarNumero(cEntrada);
						}

						opcionSub1 = stoi(cEntrada);

						switch (opcionSub1)
						{
						case 1:{
							cin.ignore(1000,'\n');
							cout << endl << "Ingrese el Nombre del Alumno:" ;
							getline(cin,A_nombre);

							cout << endl << "Ingrese su Numero de Cuenta: ";
							getline(cin,Pcuenta);
							flag = validarNumero(Pcuenta);
							while (flag != 0){
								cout<<endl<<"Numero de Cuenta Invalido"<<endl;
								;
								cout << endl << "Ingrese su Numero de Cuenta: ";
								getline(cin,Pcuenta);
								flag = validarNumero(Pcuenta);
							}
								
							A_cuenta = stoi(Pcuenta);

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
					string A_nombre,Pcuenta;
					int A_cuenta,flag;
					int opcionSub1 = 0;
					Cola = new LinkedQueue();

					//variables para validar
					string cEntrada;
					int c_Flag;

					while (opcionSub1 != 6)
					{
						cout<<endl<<"--OPERACIONES DE COLAS--"<<endl
							<<"1.Encolar(Queue) "<<endl<<"2.Desencolar(Dequeue) "
							<<endl<<"3.Ver Tope(Peek) "<<endl<<"4.Verificar si esta vacia"
							<<endl<<"5.Imprimir elementos"<<endl<<"6.Regresar al Menu"
							<<endl<<"Escoja una opcion: ";
						cin >> cEntrada;

						c_Flag = validarNumero(cEntrada);
						while (c_Flag != 0)
						{
							cout<<endl<<endl<<"No ha Ingresado un Numero!"<<endl
								<<endl<<"--OPERACIONES DE COLAS--"<<endl
								<<"1.Encolar(Queue) "<<endl<<"2.Desencolar(Dequeue) "
								<<endl<<"3.Ver Tope(Peek) "<<endl<<"4.Verificar si esta vacia"
								<<endl<<"5.Imprimir elementos"<<endl<<"6.Regresar al Menu"
								<<endl<<"Escoja una opcion: ";
							cin >> cEntrada;

							c_Flag = validarNumero(cEntrada);
						}

						opcionSub1 = stoi(cEntrada);
						
						switch (opcionSub1)
						{
						case 1:{
							cin.ignore(1000,'\n');
							cout << endl << "Ingrese el Nombre del Alumno:" ;
							getline(cin,A_nombre);

							cout << endl << "Ingrese su Numero de Cuenta: ";
							getline(cin,Pcuenta);
							flag = validarNumero(Pcuenta);
							while (flag != 0){
								cout<<endl<<"Numero de Cuenta Invalido"<<endl;
								
								cout << endl << "Ingrese su Numero de Cuenta: ";
								getline(cin,Pcuenta);
								flag = validarNumero(Pcuenta);
							}
								
							A_cuenta = stoi(Pcuenta);

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

//funcion de validar el numero
int validarNumero(string sCuenta){
	int contador = 0;
	for (int i = 0; i < sCuenta.size(); i++)
	{
		if(isdigit(sCuenta[i])==0){
			contador++;
			
		}
		
	}
	
	return contador;
}

//funcion para validar el char
bool validarChar(string pChar){
	if(pChar.size() == 1)
		return true;
	else{
		return false;
	}
}
