#include "Computer.h"
#include "Bureaucrat.h"
#include <iostream>
Bureaucrat::Bureaucrat() {
    move = 'P';
}

char Bureaucrat::makeMove() {
    return move;
}

void Bureaucrat::refresh() {}
