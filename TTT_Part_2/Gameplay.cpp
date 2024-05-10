#include "Gameplay.h"
#include <iostream>

using namespace std;

Gameplay::Gameplay(player* player_1, player* player_2, int size) {
	board = new Board(size);
	this->player_1 = player_1;
	this->player_2 = player_2;
	(*player_1).set_board(board);
	(*player_2).set_board(board);
	return;
}

void Gameplay::gameRun() {
	bool win = false;
	player* current_player;

	//Game loops through until all spots on the board are full
	for (int i = 0; i < ((*board).get_size() * (*board).get_size()); i++) {
		if (i % 2 == 0) {
			(*player_1).move();
		}
		else {
			(*player_2).move();
		}
		win = playerWin();
		if (win) {
			(*board).displayBoard();
			if (i % 2 == 0) {
				current_player = player_1;
			}
			else {
				current_player = player_2;
			}
			cout << "Player " << (*current_player).get_letter() << " Wins!" << endl;
			return;
		}
	}
	if (!win) {
		(*board).displayBoard();
		cout << "Game Over: Draw" << endl;
	}
}

bool Gameplay::playerWin() {
	bool win = false;
	bool equal = true;

	vector<vector<char>> x_columns;
	vector<vector<char>> y_rows;
	vector<vector<char>> z_diagonal;
	vector<char> column;
	vector<char> row;
	vector<char> diagonal;
	vector<char> empty;

	//Splits the board into columns and rows
	for (int i = 0; i < (*board).get_size(); i++) {
		for (int j = 0; j < (*board).get_size(); j++) {
			column.push_back((*board).getCell(i, j));
			row.push_back((*board).getCell(j, i));
		}
		x_columns.push_back(column);
		column = empty;
		y_rows.push_back(row);
		row = empty;
	}

	for (int i = 0; i < (*board).get_size(); i++) {
		diagonal.push_back(board->getCell(i,i));
	}
	z_diagonal.push_back(diagonal);
	diagonal = empty;

	for (int i = 0; i < (*board).get_size(); i++) {
		diagonal.push_back(board->getCell(i, board->get_size() - 1 - i));
	}
	z_diagonal.push_back(diagonal);
	diagonal = empty;

	//Assumes that there is n in a row/column, if there is any charcter that is different, then no one has one
	//loop until all possible wins are checked
	for (int i = 0; i < (*board).get_size(); i++) {
		for (int j = 0; j < (*board).get_size() - 1; j++) {
			if (x_columns[i][j] != x_columns[i][j + 1] || x_columns[i][j] == '_' || x_columns[i][j+1] == '_') {
				equal = false;
			}
		}
		if (!equal) {
			equal = true;
		}
		else {
			win = true;
		}

		for (int j = 0; j < (*board).get_size() - 1; j++) {
			if (y_rows[i][j] != y_rows[i][j + 1] || y_rows[i][j] == '_' || y_rows[i][j + 1] == '_') {
				equal = false;
			}
		}
		if (!equal) {
			equal = true;
		}
		else {
			win = true;
		}
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < (*board).get_size() - 1; j++) {
			if (z_diagonal[i][j] != z_diagonal[i][j + 1] || z_diagonal[i][j] == '_' || z_diagonal[i][j + 1] == '_') {
				equal = false;
			}
		}
		if (!equal) {
			equal = true;
		}
		else {
			win = true;
		}
	}
	
	return win;
}

void Gameplay::board_clear() {
	delete board;
	board = new Board(board->get_size());
}