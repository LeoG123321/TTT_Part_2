#include "human_player.h"
#include <iostream>

human_player::human_player(char letter) {
	this->letter = letter;
}

void human_player::move() {
	int x_coordinate;
	int y_coordinate;
	(*board).displayBoard();
tryAgain:

	cout << "Player " << letter << ":" << endl;
	cout << "Choose X_Coordinate:" << endl;
	cin >> x_coordinate;
	cout << "Choose Y_Coordinate:" << endl;
	cin >> y_coordinate;
	if (x_coordinate >= 0 && x_coordinate < board->get_size()) {
		if (y_coordinate >= 0 && y_coordinate < board->get_size()) {
			if ((*board).getCell(x_coordinate, y_coordinate) == '_') {
				(*board).setCell(x_coordinate, y_coordinate, letter);
			}
			else {
				cout << "Error, Location Already Taken. Try Again\n" << endl;
				goto tryAgain;
			}
		}
		else {
			cout << "Error, Input Out of Range. Try Again\n" << endl;
			goto tryAgain;
		}
	}
	else {
		cout << "Error, Input Out of Range. Try Again\n" << endl;
		goto tryAgain;
	}
}

void human_player::set_board(Board* board) {
	this->board = board;
}

char human_player::get_letter() {
	return letter;
}
