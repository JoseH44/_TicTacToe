#include "JugadorHumano.h"
#include <iostream>
using std::cin;

JugadorHumano::JugadorHumano():Jugador(){
}

JugadorHumano::JugadorHumano(string pNombre,char pMarca) : Jugador(pNombre,pMarca){
}

void JugadorHumano::elegirCasilla(int& i,int& j,Tablero* p_tablero){
	p_tablero->printTablero();
	int x,y;
	cout<<"Ingrese el valor de i:"
	cin>>x;
	cout<<endl<<"Ingrese el Valor de j:"
	cin>>y;
	i = x;
	j = y;
	
}

void JugadorHumano::realizarJugada(int i,int j,Tablero* p_Tablero){
	elegirCasilla(i,j,p_Tablero);
	p_Tablero[i][j] = this->marca;
}

JugadorHumano::~JugadorHumano()
{
}
