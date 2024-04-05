#include "computer_player.h"
#include <iostream>
#include <random>	//Random Engine
#include <ctime>	//Seed for Engine

computer_player::computer_player(char letter, Board* board) {
	this->board = board;
	this->letter = letter;
}

void computer_player::move() {
	default_random_engine engine{ static_cast<unsigned int>(time(0)) };	//Sets Seed

	uniform_int_distribution<unsigned int> generate_num{ 1,9 };	//Sets ranges from 1-9

	int num;

generate_new_number:
	num = generate_num(engine); //Generates number with seed and range

	if ((*board).getCell(num) != 'X' && (*board).getCell(num) != 'O') {
		(*board).setCell(num, letter);
	}
	else {
		goto generate_new_number;
	}

}
