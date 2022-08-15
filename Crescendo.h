#ifndef CRESCENDO
#define CRESCENDO
#include "Computer.h"
class Crescendo : public Computer {
	public:
		Crescendo();
		~Crescendo();
		void declare_player();
		void reset_count();
		char makeMove(); 
		
	private:
		char move;
	    int count;
};
#endif
