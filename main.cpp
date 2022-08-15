#include <stdio.h>
#include "Computer.h"
#include "Human.h"
#include "Player.h"
#include "Referee.h"
#include <stdlib.h>
#include <time.h> 
#include <iostream>
#include "Bureaucrat.h"
#include "Avalanche.h"
#include "Toolbox.h"
#include "Crescendo.h"
#include "FistfullODollars.h"
#include "RandomComputer.h"
#include "Tournament.h"
#include <array>
using namespace std;

int main (){
	 Tournament tour;
     Avalanche p1;
     Bureaucrat p2;
     Bureaucrat p3;
     Toolbox p4;
     Toolbox p5;
     Crescendo p6;
     Crescendo p7;
     FistfullODollars p8; 
     array<Player *, 8> Competitors{&p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8};
     Player* winner = tour.run(Competitors);
     winner->declare_player();
     return 0;
}

