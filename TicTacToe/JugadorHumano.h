#ifndef JUGADORHUMANO_H
#define JUGADORHUMANO_H

#include "Jugador.h"

class JugadorHumano : public Jugador
{
	public:
		JugadorHumano(string,char);
		JugadorHumano();
		void elegirCasilla(int&,int&,Tablero*);
		void realizarJugada(int,int,Tablero*);
		
		~JugadorHumano();
	protected:
};

#endif
