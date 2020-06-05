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
	cout << endl << "Puntos Jugador #1: " << this->jugador1 ->getPuntos() << endl
	<< "Puntos Jugador #2: " << this->jugador2->getPuntos() << endl;
}


void Juego::iniciarPartida(){
	int turno = 1, i ,j;
	cout << "HA EMPEZADO LA PARTIDA !" << endl << endl;
	while(!validarGanador()){
		
		if (turno % 2 == 0){
			cout << "Turno de: " << this->jugador2 -> getNombre() << endl;
			this->jugador2 -> realizarJugada(i,j,this->tablero);			
		} else {
			cout << "Turno de: " << this->jugador1 -> getNombre() << endl;
			this->jugador1 -> realizarJugada(i,j,this->tablero);
		}
		
		cout << endl;
		turno++;
		
		validarGanador();
		if(validarGanador() == true){
			cout << "El ganador es: " << elejirGanador()->getNombre() << endl;
			this->tablero -> printTablero();
			break;
		}
		
	}
}


bool Juego::validarGanador(){
	// lineas horizontales
	if (this->tablero->getCasilla(0,0) == this->jugador1->getMarca() && this->tablero->getCasilla(0,1) == this->jugador1->getMarca() && this->tablero->getCasilla(0,2) == this->jugador1->getMarca()){
		return true;	
	}
	if (this->tablero->getCasilla(1,0) == this->jugador1->getMarca() && this->tablero->getCasilla(1,1) == this->jugador1->getMarca() && this->tablero->getCasilla(1,2) == this->jugador1->getMarca()){
		return true;
	}
	if (this->tablero->getCasilla(2,0) == this->jugador1->getMarca() && this->tablero->getCasilla(2,1) == this->jugador1->getMarca() && this->tablero->getCasilla(2,2) == this->jugador1->getMarca()){
		return true;
	}
	
	if (this->tablero->getCasilla(0,0) == this->jugador2->getMarca() && this->tablero->getCasilla(0,1) == this->jugador2->getMarca() && this->tablero->getCasilla(0,2) == this->jugador2->getMarca()){
		return true;	
	}
	if (this->tablero->getCasilla(1,0) == this->jugador2->getMarca() && this->tablero->getCasilla(1,1) == this->jugador2->getMarca() && this->tablero->getCasilla(1,2) == this->jugador2->getMarca()){
		return true;
	}
	if (this->tablero->getCasilla(2,0) == this->jugador2->getMarca() && this->tablero->getCasilla(2,1) == this->jugador2->getMarca() && this->tablero->getCasilla(2,2) == this->jugador2->getMarca()){
		return true;
	}
	
	// lineas verticales
	if (this->tablero->getCasilla(0,0) == this->jugador1->getMarca() && this->tablero->getCasilla(1,0) == this->jugador1->getMarca() && this->tablero->getCasilla(2,0) == this->jugador1->getMarca()){
		return true;	
	}
	if (this->tablero->getCasilla(0,1) == this->jugador1->getMarca() && this->tablero->getCasilla(1,1) == this->jugador1->getMarca() && this->tablero->getCasilla(2,1) == this->jugador1->getMarca()){
		return true;
	}
	if (this->tablero->getCasilla(0,2) == this->jugador1->getMarca() && this->tablero->getCasilla(1,2) == this->jugador1->getMarca() && this->tablero->getCasilla(2,2) == this->jugador1->getMarca()){
		return true;
	}
	
	if (this->tablero->getCasilla(0,0) == this->jugador2->getMarca() && this->tablero->getCasilla(1,0) == this->jugador2->getMarca() && this->tablero->getCasilla(2,0) == this->jugador2->getMarca()){
		return true;	
	}
	if (this->tablero->getCasilla(0,1) == this->jugador2->getMarca() && this->tablero->getCasilla(1,1) == this->jugador2->getMarca() && this->tablero->getCasilla(2,1) == this->jugador2->getMarca()){
		return true;
	}
	if (this->tablero->getCasilla(0,2) == this->jugador2->getMarca() && this->tablero->getCasilla(1,2) == this->jugador2->getMarca() && this->tablero->getCasilla(2,2) == this->jugador2->getMarca()){
		return true;
	}
	
	
	// lineas diagonales
	if (this->tablero->getCasilla(0,0) == this->jugador1->getMarca() && this->tablero->getCasilla(1,1) == this->jugador1->getMarca() && this->tablero->getCasilla(2,2) == this->jugador1->getMarca()){
		return true;	
	}
	if (this->tablero->getCasilla(0,2) == this->jugador1->getMarca() && this->tablero->getCasilla(1,1) == this->jugador1->getMarca() && this->tablero->getCasilla(2,0) == this->jugador1->getMarca()){
		return true;
	}
	
	if (this->tablero->getCasilla(0,0) == this->jugador2->getMarca() && this->tablero->getCasilla(1,1) == this->jugador2->getMarca() && this->tablero->getCasilla(2,2) == this->jugador2->getMarca()){
		return true;	
	}
	if (this->tablero->getCasilla(0,2) == this->jugador2->getMarca() && this->tablero->getCasilla(1,1) == this->jugador2->getMarca() && this->tablero->getCasilla(2,0) == this->jugador2->getMarca()){
		return true;
	}
	
}

Jugador* Juego::elejirGanador(){
	// Linear Horizontales
	if (this->tablero->getCasilla(0,0) == this->jugador1->getMarca() && this->tablero->getCasilla(0,1) == this->jugador1->getMarca() && this->tablero->getCasilla(0,2) == this->jugador1->getMarca()){
		return this->jugador1;	
	}
	if (this->tablero->getCasilla(1,0) == this->jugador1->getMarca() && this->tablero->getCasilla(1,1) == this->jugador1->getMarca() && this->tablero->getCasilla(1,2) == this->jugador1->getMarca()){
		return this->jugador1;
	}
	if (this->tablero->getCasilla(2,0) == this->jugador1->getMarca() && this->tablero->getCasilla(2,1) == this->jugador1->getMarca() && this->tablero->getCasilla(2,2) == this->jugador1->getMarca()){
		return this->jugador1;
	}
	
	if (this->tablero->getCasilla(0,0) == this->jugador2->getMarca() && this->tablero->getCasilla(0,1) == this->jugador2->getMarca() && this->tablero->getCasilla(0,2) == this->jugador2->getMarca()){
		return this->jugador2;	
	}
	if (this->tablero->getCasilla(1,0) == this->jugador2->getMarca() && this->tablero->getCasilla(1,1) == this->jugador2->getMarca() && this->tablero->getCasilla(1,2) == this->jugador2->getMarca()){
		return this->jugador2;
	}
	if (this->tablero->getCasilla(2,0) == this->jugador2->getMarca() && this->tablero->getCasilla(2,1) == this->jugador2->getMarca() && this->tablero->getCasilla(2,2) == this->jugador2->getMarca()){
		return this->jugador2;
	}
	
	//Lineas Verticales
	if (this->tablero->getCasilla(0,0) == this->jugador1->getMarca() && this->tablero->getCasilla(1,0) == this->jugador1->getMarca() && this->tablero->getCasilla(2,0) == this->jugador1->getMarca()){
		return this->jugador1;	
	}
	if (this->tablero->getCasilla(0,1) == this->jugador1->getMarca() && this->tablero->getCasilla(1,1) == this->jugador1->getMarca() && this->tablero->getCasilla(2,1) == this->jugador1->getMarca()){
		return this->jugador1;
	}
	if (this->tablero->getCasilla(0,2) == this->jugador1->getMarca() && this->tablero->getCasilla(1,2) == this->jugador1->getMarca() && this->tablero->getCasilla(2,2) == this->jugador1->getMarca()){
		return this->jugador1;
	}
	
	if (this->tablero->getCasilla(0,0) == this->jugador2->getMarca() && this->tablero->getCasilla(1,0) == this->jugador2->getMarca() && this->tablero->getCasilla(2,0) == this->jugador2->getMarca()){
		return this->jugador2;	
	}
	if (this->tablero->getCasilla(0,1) == this->jugador2->getMarca() && this->tablero->getCasilla(1,1) == this->jugador2->getMarca() && this->tablero->getCasilla(2,1) == this->jugador2->getMarca()){
		return this->jugador2;
	}
	if (this->tablero->getCasilla(0,2) == this->jugador2->getMarca() && this->tablero->getCasilla(1,2) == this->jugador2->getMarca() && this->tablero->getCasilla(2,2) == this->jugador2->getMarca()){
		return this->jugador2;
	}
	
	// lineas diagonales
	if (this->tablero->getCasilla(0,0) == this->jugador1->getMarca() && this->tablero->getCasilla(1,1) == this->jugador1->getMarca() && this->tablero->getCasilla(2,2) == this->jugador1->getMarca()){
		return this->jugador1;	
	}
	if (this->tablero->getCasilla(0,2) == this->jugador1->getMarca() && this->tablero->getCasilla(1,1) == this->jugador1->getMarca() && this->tablero->getCasilla(2,0) == this->jugador1->getMarca()){
		return this->jugador1;
	}
	
	if (this->tablero->getCasilla(0,0) == this->jugador2->getMarca() && this->tablero->getCasilla(1,1) == this->jugador2->getMarca() && this->tablero->getCasilla(2,2) == this->jugador2->getMarca()){
		return this->jugador2;	
	}
	if (this->tablero->getCasilla(0,2) == this->jugador2->getMarca() && this->tablero->getCasilla(1,1) == this->jugador2->getMarca() && this->tablero->getCasilla(2,0) == this->jugador2->getMarca()){
		return this->jugador2;
	}
}
