#pragma once
#include "player.h"
#include "Board.h"
class human_player : public player
{
private:
	char letter;
	Board* board;
public:
	human_player(char letter, Board* board);
	void move();
};

