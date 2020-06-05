#include "Jugador.h"



Jugador::Jugador(){
}

Jugador::Jugador(string nombre,char marca){
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

char Jugador::getMarca(){
	return (marca);
}

void Jugador::setMarca(char pMarca){
	marca = pMarca;
}






