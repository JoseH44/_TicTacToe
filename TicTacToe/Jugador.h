#ifndef JUGADOR_H
#define JUGADOR_H


#include "Tablero.h"

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


class Jugador
{
	protected:
		string nombre;
		int puntos;
		char marca;
	public:
		Jugador();//constructor sobrecargado
		Jugador(string,char);
		//setter y getter de nombre
		string getNombre();
		void setNombre(string);
		//setter y getter de puntos
		int getPuntos();
		void setPuntos(int);
		//setter y getter de marca
		char getMarca();
		void setMarca(char);
		
		virtual void elegirCasilla(int&,int&,Tablero*)=0;
		virtual void realizarJugada(int,int,Tablero*)=0;
		
	
};

#endif
