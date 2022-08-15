#include "Computer.h"
#include "Avalanche.h"
#include <iostream>
Avalanche::Avalanche() {
    move = 'R';
}

char Avalanche::makeMove() {
    return move;
}

void Avalanche::refresh() {}
    