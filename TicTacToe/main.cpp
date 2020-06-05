#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Tablero.h"
#include "Juego.h"



int main(int argc, char** argv) {
	string nombreJ1,nombreJ2;
	
	cout << "Ingrese nombre de jugador #1: "; cin >> nombreJ1;
	cout << "Ingrese nombre de jugador #2: "; cin >> nombreJ2;
	
	Juego* juego = new Juego(new JugadorHumano(nombreJ1,'X'), new JugadorHumano(nombreJ2,'O'));
	juego->iniciarPartida();
}
