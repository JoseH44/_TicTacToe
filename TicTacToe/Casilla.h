#ifndef CASILLA_H
#define CASILLA_H

#include "Char.h"

class Casilla
{
	public:
		Casilla();
		char getValue();
		void setValue(char);
		~Casilla();
		
	protected:
		Char* value;
};

#endif
