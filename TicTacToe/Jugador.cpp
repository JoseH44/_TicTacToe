#include "Jugador.h"

Jugador::Jugador(string nombre, int puntos, Char* marca)
{
	this->nombre = nombre;
	this->puntos = puntos;
	this->marca = marca;
}
Jugador::~Jugador()
{
	delete this->marca;
}
