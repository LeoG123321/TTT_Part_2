#pragma once
#include "player.h"
class computer_player : public player
{
private:
	char letter;
public:
	computer_player(char letter);
	void move();
};

