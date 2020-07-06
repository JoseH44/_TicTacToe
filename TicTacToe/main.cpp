#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <fstream>
using std::ofstream;
using std::ifstream;
using std::ios;
#include <vector>
using std::vector;

#include "Tablero.h"
#include "Juego.h"

vector<Jugador*> jugadores;

void escribirDatos(string,char);
void leerDatos();


int main(int argc, char** argv) {
	try{
		leerDatos();
	}catch(const std::exception& e){
	}
	
	if(jugadores.size()==0){
		string nombreJ1,nombreJ2;
		cout << "Ingrese nombre de jugador #1: "; cin >> nombreJ1;
		escribirDatos(nombreJ1,'X');
		cout << "Ingrese nombre de jugador #2: "; cin >> nombreJ2;
		escribirDatos(nombreJ2,'O');
		jugadores.push_back(new JugadorHumano(nombreJ1,'X'));
		jugadores.push_back(new JugadorHumano(nombreJ2,'O'));
	}
			
	Juego* juego = new Juego(jugadores[0],jugadores[1]);
	juego->iniciarPartida();
	
	delete juego;
}

void escribirDatos(string nombre,char marca){
	ofstream textFile;
	textFile.open("Datos.txt",ios::app|ios::out);
	
	textFile << nombre << "," << marca << endl;
	textFile.flush();
	textFile.close();
}
void leerDatos(){
	ifstream textFile;
	textFile.open("Datos.txt",ios::in);
	
	if(!textFile.fail()){
		while(!textFile.eof()){
			string texto;
			getline(textFile,texto);
			if(texto.size()==0)
				break;
			string datos [2];
			int cont = 0;
			for(int i=0;i<texto.length();i++){
				if(texto[i]==',')
					cont++;
				else
					datos[cont]+=texto[i];
			}
			
			jugadores.push_back(new JugadorHumano(datos[0],datos[1][0]));
		}	
	}
	
	
	
	textFile.close();
}
