#include "ArrayList.h"

ArrayList::ArrayList(){
	
	capacity = 1024; //4096 bytes
	n=0;
	array = new Object*[capacity];
}

bool ArrayList::inserta(int p,Object* x){
	
	if (p>=1 && p<=n+1)
	{
		
		for (int i = n + 1; i >= p; i--)
			array[i] = array[i-1];
		
		array[p-1] = x;
		n++; 
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
	//validar p en el rango ( 1 hasta n )
	if (p>=1 && p<=n)
	{
		Object* retValue;
		retValue = array[p-1];
		return retValue;
	}else
	{
		return NULL;
	}	
}

Object* ArrayList::siguiente(int p){
	return recupera(p+1);
}

Object* ArrayList::anterior(int p){
	return recupera(p-1);
}

int ArrayList::localiza(Object* x){
	
	for (int i = 1; i <= n; i++)
	{
		if (x->equals(array[i-1])){
			cout<<endl<<"Datos del Alumno Encontrado:"<<endl
				<<array[i-1]->toString()<<endl;
			return i;
		}
			
	}

	return -1;
		
}


void ArrayList::imprime(){
	
	for (int i = 1; i <= n; i++)
	{
		cout<<array[i-1]->toString()<<endl;
	}
}

bool ArrayList::vacia(){
	return n == 0;
}

Object* ArrayList::primero(){
	if(!vacia())
		return array[0];
	else
		return NULL;
}

void ArrayList::anula(){
	for(int i = 0 ; i < n;i++ )
		delete array[i];
	
	n = 0;
}

string ArrayList::toString(){
	return "TDA";
}

bool ArrayList::equals(Object* object){
	return false;
}



ArrayList::~ArrayList()
{
	for(int i = 0 ; i < n;i++ )
		delete array[i];
		
	delete[] array;
}
