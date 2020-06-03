#include "Juego.h"

Juego::Juego()
{
	this->tablero = new Tablero ();
}

Juego::~Juego()
{
	delete tablero;
	
	for (int i = 0; i < jugadores.size(); i++){
		delete jugadores[i];
	}
}
