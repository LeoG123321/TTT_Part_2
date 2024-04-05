#include "Board.h"
#include "computer_player.h"
#include "human_player.h"

class Gameplay
{
private:
	Board board;

public:
	Gameplay();
	//human vs human
	//human vs com
	//Or maybe i can do all in one

	void gameRun(player player_1, player player_2);
	void playerInput(char);
	bool playerWin();
};