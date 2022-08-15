#include "Player.h"
#include <iostream>
Player::Player(){
	move = ' ';

}

Player::~Player(){
}

char Player::makeMove(){
	return move;
}

void Player::reset_count(){

}

void Player::declare_player(){
	std::cout<< "This is player" << std::endl;
}
