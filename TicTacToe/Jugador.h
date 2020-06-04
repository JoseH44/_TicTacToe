#ifndef JUGADOR_H
#define JUGADOR_H

#include "Char.h"
#include "Tablero.h"

#include <string>
using std::string;

class Jugador
{
	protected:
		string nombre;
		int puntos;
		Char* marca;
	public:
		Jugador(string,Char*);//constructor sobrecargado
		~Jugador();
		//setter y getter de nombre
		string getNombre();
		void setNombre(string);
		//setter y getter de puntos
		int getPuntos();
		void setPuntos(int);
		//setter y getter de marca
		Char* getMarca();
		void setMarca(Char*);
		
		virtual void elegirCasilla(int&,int&,Tablero*)=0;
		void realizarJugada();
		
	
};

#endif
