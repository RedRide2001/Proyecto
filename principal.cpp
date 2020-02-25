#include <iostream>
#include <string>
#include "cancion.cpp"
using namespace std;
int main(){
	cancion c1;
	string nom;
	string au;

	cout<<"Ingrese el nombre de la cancion"<<endl;
	getline(cin,nom);
	cout<<"Ingrese el autor de la cancion"<<endl;
	getline(cin,au);

	c1.ponTitulo(nom);
	c1.ponAutor(au);
	
	cout<<"El Titulo de la cancion es: "<<c1.dameTitulo()<<endl;
	cout<<"El Autor de la cancion es: "<<c1.dameAutor()<<endl;
	return 0;
}

