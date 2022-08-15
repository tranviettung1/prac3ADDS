#ifndef REFEREE
#define REFEREE
#include "Player.h"

class Referee{
	public:
		Referee();
		//~Referee()?
		char refGame(Player* player1, Player* player2);
		Player* match(Player* p1, Player*p2);
	private:
		char result;
};

#endif 
