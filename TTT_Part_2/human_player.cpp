#include "human_player.h"
#include <iostream>
/*
human_player::human_player(char letter) {
	this->letter = letter;
}

void human_player::move() {
	int num;
	(*board).displayBoard();
tryAgain:

	cout << "Player " << letter << ":" << endl;
	cout << "Choose Your Location" << endl;
	cin >> num;

	if (num > 0 && num < 10) {
		if ((*board).getCell(num) != 'X' && (*board).getCell(num) != 'O') {
			(*board).setCell(num, letter);
		}
		else {
			cout << "Error, Location Already Taken. Try Again\n" << endl;
			goto tryAgain;
		}
	}
	else {
		if (num > 9)
			cout << "Error, Location Input Greater Than '9'. Try Again\n" << endl;
		else
			cout << "Error, Location Input Less Than '1'. Try Again\n" << endl;
		goto tryAgain;
	}
}

void human_player::set_board(Board* board) {
	this->board = board;
}
*/