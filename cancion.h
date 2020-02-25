#include <iostream>

using namespace std;
class cancion{
	string nombre;
	string autor;	
public:
	cancion();
    cancion(string nom,string au);
	~cancion();
	
	void ponTitulo(string nombre);
	void ponAutor(string autor); 
	
	string dameTitulo();
	string dameAutor();
		
};

