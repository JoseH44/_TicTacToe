#include "Juego.h"

Juego::Juego(Tablero* tablero)
{
	this->tablero = tablero;
}

Juego::~Juego()
{
	delete tablero;
	
}
