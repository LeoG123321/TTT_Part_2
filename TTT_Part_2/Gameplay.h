#include "Board.h"
#include "computer_player.h"
#include "human_player.h"
#include "player.h"

class Gameplay
{
private:
	Board board;

public:
	Gameplay();

	void gameRun(player *player_1, player *player_2);
	bool playerWin();
};