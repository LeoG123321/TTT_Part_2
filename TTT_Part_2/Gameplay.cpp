#include "Gameplay.h"

#include <iostream>

using namespace std;

Gameplay::Gameplay(player* player_1, player* player_2) {
	this->player_1 = player_1;
	this->player_2 = player_2;
	(*player_1).set_board(&board);
	(*player_2).set_board(&board);
	return;
}

void Gameplay::gameRun() {
	bool win = false;

	for (int i = 0; i < 9; i++) {
		if (i % 2 == 0) {
			(*player_1).move();
		}
		else {
			(*player_2).move();
		}
		win = playerWin();
		if (win)
			return;
	}
	if (!win) {
		board.displayBoard();
		cout << "Game Over: Draw" << endl;
	}
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

	if (win == true) {
		board.displayBoard();
		cout << "Player " << winner << " Wins!" << endl;
	}
	return win;
}

void Gameplay::board_clear() {
	for (int i = 1; i < 10; i++) {
		board.setCell(i, i + 48);
	}
}
