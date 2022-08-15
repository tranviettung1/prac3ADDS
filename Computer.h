#ifndef COMPUTER 
#define COMPUTER
#include "Player.h"
class Computer : public Player{
	public:
		Computer();
		~Computer();
		 char makeMove();
		 void declare_player();
		 void reset_count();
	private:
		char move;
};

#endif
