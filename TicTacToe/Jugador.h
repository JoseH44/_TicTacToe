#ifndef JUGADOR_H
#define JUGADOR_H

#include "Char.h"

#include <string>
using std::string;

class Jugador
{
	private:
		string nombre;
		int puntos;
		Char* marca;
	public:
		Jugador();
		Jugador(string,int,char);//constructor sobrecargado
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
		
		virtual void elegirCasilla(int,int)=0;
		void realizarJugada();
		
	
};

#endif
