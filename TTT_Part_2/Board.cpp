#include "Board.h"
#include <iostream> 
#include <iomanip>

Board::Board() {
	vector<char> temp;

	for (int i = 0; i < 3; i++) {
		temp.push_back('_');
	}

	for (int i = 0; i < 3; i++) {
		board.push_back(temp);
	}
}

void Board::displayBoard() {
	vector<string> multi_layer;
	string layer = "";
	string split = "";
	for (int i = 0; i < board.size(); i++) {
		for (int j = 0; j < board.size() - 1; j++) {
			layer += " ";
			layer += board[j][i];
			layer += " |";
			//layer += " _ |";
		}
		layer += " _ ";
		multi_layer.push_back(layer);
		layer = "";
	}

	for (int i = 0; i < board.size() - 1; i++) {
		split += "---+";
	}
	split += "---";

	cout << "\t      X" << endl;
	cout << "\t  ";
	for (int i = 0; i < board.size(); i++) {
		cout << i << "   ";
	}
	cout << endl << endl;

	int y_counter = 0;
	for (int i = 0; i < (board.size() * 2) - 1 ; i++) {
		if (i % 2 == 0) {
			
			if (i == 2) {
				cout << "Y";
			}
			else {
				cout << " ";
			}

			cout << "   " << y_counter << "\t ";
			cout << multi_layer[y_counter] << endl;
			y_counter++;
		}
		if (i % 2 == 1) {
			
			cout << "\t " << split << endl;
		}
	}
	cout << endl << endl;

}

char Board::getCell(int x_coordinate, int y_coordinate) {
	return board[x_coordinate][y_coordinate];
}

void Board::setCell(int x_coordinate, int y_coordinate, char character) {
	board[x_coordinate][y_coordinate] = character;
}


/*
			 X
		 0   1   2

   0	 _ | _ | _
		---+---+---
Y  1 	 _ | _ | _ 
		---+---+---
   2	 _ | _ | _

   3. 5

			 X
		 0   1   2   3

   0	 _ | _ | _ | _
		---+---+---+---
Y  1 	 _ | _ | _ | _ 
		---+---+---+---
   2	 _ | _ | _ | _ 
        ---+---+---+---
   3	 _ | _ | _ | _

   4, 7

   5, 9
*/