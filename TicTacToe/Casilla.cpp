#include "Casilla.h"

Casilla::Casilla(){
	//this->value=' ';
	value = new Char(' ');
}

Casilla::~Casilla(){
	delete value;
}

char Casilla::getValue(){
	return this->value->getChar();
}

void Casilla::setValue(char pValue){
	value->setChar(pValue);
}
