#include "Computer.h"
#include "Player.h"
#include <iostream>
Computer::Computer():Player(){
	move = ' ';
}

Computer::~Computer(){
	
}

char Computer::makeMove(){
	move = 'R';
	return move;
}


void Computer::declare_player(){
	std::cout << "This is Computer Player" << std::endl;
}

void Computer::reset_count(){
	
}


