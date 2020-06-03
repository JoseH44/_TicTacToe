#include "Char.h"

Char::Char(char pCaracter)
{
	caracter = pCaracter;
}


char Char::getChar(){
	return caracter;
}

void Char::setChar(char pCaracter){
	caracter = pCaracter;
}
