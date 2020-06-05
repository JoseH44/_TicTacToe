#ifndef JUEGO_H
#define JUEGO_H

#include <iostream>
#include "Tablero.h"
#include "Jugador.h"
#include "JugadorHumano.h"

using std::cout;
using std::cin;
using std::endl;

class Juego
{
	public:
		Juego(Jugador*,Jugador*);
		~Juego();
		
		void iniciarPartida();
		bool validarGanador();
		Jugador* elejirGanador();
		void mostrarPuntuaciones();
		void ImprimirJugadores();
		
		Jugador* getJugador1();
		Jugador* getJugador2();
		
	protected:
		Tablero* tablero;
		Jugador* jugador1;
		Jugador* jugador2;

};

#endif
