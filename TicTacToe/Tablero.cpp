#include "Tablero.h"

#include <iostream>
using std::cout;
using std::endl;

Tablero::Tablero(){
	size=3;
	matriz = new Casilla **[size];
	
	for(int i = 0;i<size;i++){
		matriz[i] = new Casilla*[size];
	}
	///instanciar size x size casillas
	for(int i=0;i<size;i++)
		for(int j=0;j<size;j++)
		   matriz[i][j] = new Casilla();
	
}

Tablero::~Tablero(){
	//liberar 9 casillas
	for(int i=0;i<size;i++)
		for(int j=0;j<size;j++){
			delete matriz[i][j];
			matriz[i][j] = NULL;
		}
		
	for(int i = 0;i<size;i++){
		delete[] matriz[i];
	}
	
	delete[] matriz;
		  
}
		
bool Tablero::marcarCasilla(int i,int j, char pValue){
	if( i < 0 || i >= size || j < 0 || j>= size)
		return false;
	else{
		if(matriz[i][j]->getValue() == ' '){
			matriz[i][j]->setValue(pValue);
			return true;
		}else
			return false;
	}
}


void Tablero::printTablero(){
	for(int i=0;i<size;i++){
		cout<<"|";
		for(int j=0;j<size;j++){
			cout<<matriz[i][j]->getValue()<<" ";
		}
		cout<<"|"<<endl;
	}
		
}

char Tablero::getCasilla(int i, int j){
	return this->matriz[i][j]->getValue();
}
		

