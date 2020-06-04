#include "Jugador.h"

Jugador::Jugador(string nombre,Char* marca)
{
	this->nombre = nombre;
	this->puntos = 0;
	this->marca = marca;
}


string Jugador::getNombre(){
	return (nombre);
}

void Jugador::setNombre(string pNombre){
	nombre = pNombre;
}

int Jugador::getPuntos(){
	return (puntos);
}

void Jugador::setPuntos(int pPuntos){
	puntos = pPuntos;
}

Char* Jugador::getMarca(){
	return (marca->getChar());
}

void Jugador::setMarca(Char* pMarca){
	marca = pMarca;
}


void Jugador::realizarJugada(){
	
}


Jugador::~Jugador()
{
	delete this->marca;
}
