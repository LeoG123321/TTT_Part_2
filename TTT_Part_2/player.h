#pragma once
#include "Board.h"
class player
{
public:
	virtual void move() = 0;
	virtual void set_board(Board* board) = 0;
	virtual char get_letter() = 0;
};
