#ifndef BUREAUCRAT
#define BUREAUCRAT
#include "Computer.h"
class Bureaucrat : public Computer {
public:
        Bureaucrat();
        char makeMove();
        void refresh();
};

#endif
