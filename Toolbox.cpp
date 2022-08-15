#include "Computer.h"
#include "Toolbox.h"
#include <iostream>

Toolbox::Toolbox() : Computer(){
}

Toolbox::~Toolbox(){
}

char Toolbox::makeMove(){
	move = 'S';
	return move;
}

void Toolbox::declare_player(){
	std::cout << "This is Toolbox Player" << std::endl;
}

void Toolbox::reset_count(){
}
