#ifndef JUEGO_H
#define JUEGO_H

#include <vector>
#include "Tablero.h"

class Juego
{
	public:
		Juego(Tablero*);
		~Juego();
		
		void iniciarPartida();
		bool validarGanador();
		void elejirGanador();
		void mostrarPuntuaciones();
		void ImprimirJugadores();
		
	protected:
		Tablero* tablero;

};

#endif
