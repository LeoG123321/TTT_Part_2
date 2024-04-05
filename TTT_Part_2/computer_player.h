#pragma once
#include "player.h"
#include "Board.h"
class computer_player : public player
{
private:
	char letter;
	Board* board;
public:
	computer_player(char letter);
	void move() override;
	void set_board(Board* board) override;
};

