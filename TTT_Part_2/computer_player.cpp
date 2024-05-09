#include "computer_player.h"
#include <iostream>
#include <random>	//Random Engine
#include <ctime>	//Seed for Engine

computer_player::computer_player(char letter) {
	this->letter = letter;
}

void computer_player::move() {
	default_random_engine engine{ static_cast<unsigned int>(time(0)) };	//Sets Seed

	unsigned int max_num = board->get_size() - 1;

	uniform_int_distribution<unsigned int> generate_num{ 0, max_num };	//Sets ranges by the size of one size of the board

	int x_coordinate;
	int y_coordinate;

generate_new_number:
	x_coordinate = generate_num(engine); //Generates number with seed and range
	y_coordinate = generate_num(engine);

	if ((*board).getCell(x_coordinate, y_coordinate) == '_') {
		(*board).setCell(x_coordinate, y_coordinate, letter);

		cout << endl << x_coordinate << endl << y_coordinate << endl;
		cout << "Player " << letter << " has made their move." << endl << endl;
	}
	else {
		goto generate_new_number;
	}

}

void computer_player::set_board(Board* board) {
	this->board = board;
}

char computer_player::get_letter() {
	return letter;
}