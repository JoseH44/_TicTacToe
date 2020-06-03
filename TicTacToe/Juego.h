#ifndef JUEGO_H
#define JUEGO_H

#include <vector>
#include "Tablero.h"
#include "Jugador.h"

class Juego
{
	public:
		Juego();
		~Juego();
		
		void iniciarPartida();
		bool validarGanador();
		Jugador* elejirGanador();
		void mostrarPuntuaciones();
		void ImprimirJugadores();
		
	protected:
		Tablero* tablero;
		vector <Jugador*> jugadores;

};

#endif
