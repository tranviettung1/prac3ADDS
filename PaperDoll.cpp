#include "Computer.h"
#include "PaperDoll.h"
#include <iostream>

PaperDoll::PaperDoll() : Computer(){
	count = 0;
	move = ' ';
}
PaperDoll::~PaperDoll(){
}

void PaperDoll::reset_count(){
	count = 0;
}

char PaperDoll::makeMove(){
	int number  = count;
	if ( number == 0 || number == 3){
	   move = 'P';
	}
	else{
		move = 'S';
	}
	count++;
	return move;
}

void PaperDoll::declare_player(){
	std::cout << "This is PaperDoll Player" << std::endl;
}
