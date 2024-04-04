#include "human_player.h"
#include <iostream>

human_player::human_player(char letter, Board* board) {
	this->letter = letter;
	this->board = board;
}

void human_player::move() {
	int num;

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
