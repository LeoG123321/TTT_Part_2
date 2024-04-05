#include "Gameplay.h"

#include <iostream>

using namespace std;

Gameplay::Gameplay() {
	return;
}

void Gameplay::gameRun(player player_1, player player_2) {
	bool win = false;
	board.displayBoard();
	for (int i = 0; i < 9; i++) {
		if (i % 2 == 0)
			player_1.move();
		else
			player_2.move();
		win = playerWin();
		if (win)
			return;
	}
	if (!win)
		cout << "Game Over: Draw" << endl;
}

void Gameplay::playerInput(char input) {
	int num;

tryAgain:

	cout << "Player " << input << ":" << endl;
	cout << "Choose Your Location" << endl;
	cin >> num;

	if (num > 0 && num < 10) {
		if (board.getCell(num) != 'X' && board.getCell(num) != 'O') {
			board.setCell(num, input);
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

	board.displayBoard();
}

bool Gameplay::playerWin() {
	char winner;
	bool win = false;

	if (board.getCell(1) == board.getCell(2) && board.getCell(2) == board.getCell(3)) {
		win = true;
		winner = board.getCell(1);
	}
	else if (board.getCell(4) == board.getCell(5) && board.getCell(5) == board.getCell(6)) {
		win = true;
		winner = board.getCell(4);
	}
	else if (board.getCell(7) == board.getCell(8) && board.getCell(8) == board.getCell(9)) {
		win = true;
		winner = board.getCell(7);
	}
	else if (board.getCell(1) == board.getCell(5) && board.getCell(5) == board.getCell(9)) {
		win = true;
		winner = board.getCell(1);
	}
	else if (board.getCell(3) == board.getCell(5) && board.getCell(5) == board.getCell(7)) {
		win = true;
		winner = board.getCell(3);
	}
	else if (board.getCell(1) == board.getCell(4) && board.getCell(4) == board.getCell(7)) {
		win = true;
		winner = board.getCell(1);
	}
	else if (board.getCell(2) == board.getCell(5) && board.getCell(5) == board.getCell(8)) {
		win = true;
		winner = board.getCell(2);
	}
	else if (board.getCell(3) == board.getCell(6) && board.getCell(6) == board.getCell(9)) {
		win = true;
		winner = board.getCell(3);
	}

	if (win == true)
		cout << "Player " << winner << " Wins!" << endl;
	return win;
}