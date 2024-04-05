#include "Board.h"
#include "computer_player.h"
#include "human_player.h"
#include "player.h"

class Gameplay
{
private:
	Board board;
	player* player_1;
	player* player_2;
public:
	Gameplay(player* player_1, player* player_2);

	void gameRun();
	bool playerWin();
	void board_clear();
};