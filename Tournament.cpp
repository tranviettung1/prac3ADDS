#include "Tournament.h"
#include "Player.h"
#include "Referee.h"
#include <iostream>
#include <array>
Tournament::Tournament(){
    
}

Tournament::~Tournament(){
}

Player* Tournament::run( std::array<Player*, 8> competitors){
	Referee ref;
    Player* advanced_A = ref.match(competitors[0], competitors[1]);
    Player* advanced_B = ref.match(competitors[2], competitors[3]);
    Player* advanced_C = ref.match(competitors[4], competitors[5]);
    Player* advanced_D = ref.match(competitors[6], competitors[7]);
    
    Player* advanced_E = ref.match(advanced_A, advanced_B );
    Player* advanced_F = ref.match(advanced_C, advanced_D );
    
    Player* won = ref.match(advanced_E, advanced_F );
    return won;
}

