#ifndef PLAYER
#define PLAYER

class Player{
	public: 
	Player();
	~Player();
	virtual char makeMove();
	virtual void reset_count();
	virtual void declare_player();
	private:
		char move;
};

#endif

