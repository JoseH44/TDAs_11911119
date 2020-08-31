#include "ArrayList.h"

ArrayList::ArrayList(){	
	capacity = 1024; //4096 bytes
	n=0;
	array = new Object*[capacity];
}

//metodo inserta,encargado de insertar un elemento en la lista
bool ArrayList::inserta(int p,Object* x){
	
	if (p>=1 && p<=n+1)
	{
		/*
		este for sirve para hacer los corrimientos 
		en caso de que el elemento sea ingresado en medio
		*/
		for (int i = n + 1; i >= p; i--)
			array[i] = array[i-1];
		
		array[p-1] = x;
		n++; //aumenta la cantidad de elementos en la lista
		return true;
	}else
	{
		return false;
	}
	
}

Object* ArrayList::suprime(int p){
	
	if (p>=1 && p<=n)
	{
		Object* retValue;
		retValue = array[p-1];//guarda el valor de retorno (p-1)
		
		//hace los corrimientos para que no hayan espacios vacíos en la lista
		for (int i = p; i <= n; i++)
		{
			array[i-1]=array[i];
		}
		array[n] = NULL;
		n--;
		return retValue;
		
	}else
	{
		return NULL;
	}
	
}

Object* ArrayList::recupera(int p){
	
	if (p>=1 && p<=n)
	{
		Object* retValue;
		retValue = array[p-1];//guarda el valor en la posición (p-1)
		return retValue;//retorna dicho valor guardado
	}else
	{
		return NULL;
	}	
}

Object* ArrayList::siguiente(int p){
	return recupera(p+1);//se reutiliza el metodo recupera para ahorrar el trabajo
}

Object* ArrayList::anterior(int p){
	return recupera(p-1);//se reutiliza el metodo recupera para ahorrar el trabajo
}

int ArrayList::localiza(Object* x){
	
	for (int i = 1; i <= n; i++)
	{
		//se manda a llamar el metodo equals del objeto para ver si este se encuentra en la lista
		if (x->equals(array[i-1])){
			cout<<endl<<"Datos del Alumno Encontrado:"<<endl
				<<array[i-1]->toString()<<endl;
			return i;
		}
			
	}

	return -1;//retorna -1 en caso que no lo haya encontrado
		
}


void ArrayList::imprime(){
	
	for (int i = 1; i <= n; i++)
	{
		cout<<endl<<i<<")"<<endl<<array[i-1]->toString()<<endl;
	}
}

bool ArrayList::vacia(){
	return n == 0;//retorna el valor comparado entre n y 0
}

Object* ArrayList::primero(){
	if(!vacia())
		return array[0];//si no está vacía retorna el primer elemento de la lista(posición 0 del arreglo)
	else
		return NULL;
}

void ArrayList::anula(){
	//hace delete de los elementos de la lista(recorriendo el arreglo)
	for(int i = 0 ; i < n;i++ )
		delete array[i];
	
	n = 0;//determina que la cantidad de elementos en la lista es 0
}

//
string ArrayList::toString(){
	return "TDA";
}

//
bool ArrayList::equals(Object* object){
	return false;
}

int ArrayList::getN(){
	return n;//retorna el valor de n para saber cuantos elementos hay
}

ArrayList::~ArrayList()
{
	//vacía los elementos de la lista(recorriendo el arreglo)
	for(int i = 0 ; i < n;i++ )
		delete array[i];
		
	delete[] array;//elimina el arreglo utilizado
}
