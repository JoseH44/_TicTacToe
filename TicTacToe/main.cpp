#include <iostream>
using std::cout;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include "Tablero.h"



int main(int argc, char** argv) {
	//apuntadores
	Tablero* tablero = new Tablero();
	
	
	if(!tablero->marcarCasilla(0,0,'X')){
		cout<<"Casilla Incorrecta\n";
	}
	if(!tablero->marcarCasilla(0,0,'X')){
		cout<<"Casilla Incorrecta\n";
	}
	
	tablero->printTablero();
	
	delete tablero;
}
