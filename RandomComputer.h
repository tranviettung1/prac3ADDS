#ifndef RANNDOM_COMPUTER
#define RANDOM_COMPUTER
#include "Computer.h"

class RandomComputer : public Computer{
	public:
		RandomComputer();
		~RandomComputer();
		char makeMove();
		void reset_count();
		void declare_player();
		
	private:
		char move;
};

#endif
