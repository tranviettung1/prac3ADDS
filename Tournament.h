#ifndef TOURNAMENT 
#define TOURNAMENT 
#include "Player.h"
#include "Referee.h"
#include <array>
class Tournament{
	public:
	Tournament();
	~Tournament();
	Player * run(std::array<Player *, 8> competitors);
};

#endif 
