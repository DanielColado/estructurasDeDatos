#include <iostream>
#include <Persona.hpp>
using namespace std;

int main(int argc, char **argv)
{
	Persona pepe;
	pepe.setEdad(18);
	pepe.setGenero(false);
	pepe.mostrar();
	
	Persona juan;
	juan.setEdad(19);
	juan.setGenero(false);
	juan.mostrar();
	
	Persona Dani;
	Dani.setEdad(20);
	Dani.setGenero(true);
	Dani.mostrar();
	
	Persona paco;
	paco.setEdad(21);
	paco.setGenero(false);
	paco.mostrar();
	
	Persona ivan;
	ivan.setEdad(22);
	ivan.setGenero(false);
	ivan.mostrar();
	
	Persona sara;
	sara.setEdad(23);
	sara.setGenero(true);
	sara.mostrar();
	
	Persona carlos;
	carlos.setEdad(24);
	carlos.setGenero(false);
	carlos.mostrar();
	
	Persona manue;
	manue.setEdad(25);
	manue.setGenero(false);
	manue.mostrar();
	
	Persona lucia;
	lucia.setEdad(26);
	lucia.setGenero(true);
	lucia.mostrar();
	
	Persona roberto;
	roberto.setEdad(27);
	roberto.setGenero(false);
	roberto.mostrar();
	
	return 0;
}
