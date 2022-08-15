#ifndef TOOL_BOX
#define TOOL_BOX
#include "Computer.h"
class Toolbox : public Computer{
	public:
		Toolbox();
		~Toolbox();
		char makeMove();
		void reset_count();
		void declare_player();
		
	private:
		char move;
};
#endif
