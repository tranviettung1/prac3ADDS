#ifndef PAPER_DOLL
#define PAPER_DOLL
#include "Computer.h"
class PaperDoll : public Computer{
	public:
	PaperDoll();
	~PaperDoll();
	void reset_count();
	char makeMove(); 
	void declare_player();
	private:
		char move;
		int count;
};

#endif
