#include <iostream>
#include "cancion.h"
using namespace std;

cancion::cancion(){

}

cancion::cancion(string nom, string au)
{
	nombre=nom;
	autor=au;
}

cancion::~cancion(){
	cout<<"Se libera la memoria del objeto"<<endl;
}

void cancion::ponTitulo(string nom)
{
		nombre=nom;
}
	
void cancion::ponAutor(string au)
{
	autor=au;
} 
	
string cancion::dameTitulo()
{
	return nombre;
}

string cancion::dameAutor(){
	return autor;
}

