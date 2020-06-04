#include "Juego.h"

Juego::Juego(Jugador* jugador1, Jugador* jugador2)
{
	this->jugador1 = jugador1;
	this->jugador2= jugador2;
	this->tablero = new Tablero ();
}

Juego::~Juego()
{
	delete tablero;
	delete jugador1;
	delete jugador2;
}


Jugador* Juego::getJugador1(){
	return this->jugador1;
}

Jugador* Juego::getJugador2(){
	return this->jugador2;
}

void Juego::ImprimirJugadores(){
	cout << "Jugador #1: " << this->jugador1 ->getNombre() << endl
	<< "Jugador #2: " << this->jugador2 ->getNombre() << endl;
}

void Juego::mostrarPuntuaciones()
{
	cout << "Puntos Jugador #1: " << this->jugador1 ->getPuntos() << endl
	<< "Puntos Jugador #2: " << this->jugador2->getPuntos() << endl;
}

void Juego::iniciarPartida(){
	int turno = 1, i ,j;
	while(validarGanador()){
		if (turno % 2 == 0){
			
			
			
		} else {
			
		}
		
		cout << endl;
	}
}

