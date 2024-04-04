#include "Board.h"
class Gameplay
{
private:
	Board board;

public:
	Gameplay();
	//human vs human
	//human vs com


	void gameRun();
	void playerInput(char);
	bool playerWin();
};