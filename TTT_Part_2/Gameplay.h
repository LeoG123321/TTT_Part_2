#include "Board.h"
class Gameplay
{
private:
	Board board;

public:
	Gameplay();
	//human vs human
	//human vs com
	//Or maybe i can do all in one


	void gameRun();
	void playerInput(char);
	bool playerWin();
};