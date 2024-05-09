#pragma once
#include "player.h"
#include "Board.h"
class human_player : public player
{
private:
	char letter;
	Board* board;
public:
	human_player(char letter);
	void move() override;
	void set_board(Board* board) override;

	char get_letter() override;
};

