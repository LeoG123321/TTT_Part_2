#include "Board.h"
#include <iostream> 
#include <iomanip>

Board::Board(int size) {
	vector<char> temp;

	for (int i = 0; i < size; i++) {
		temp.push_back('_');
	}

	for (int i = 0; i < size; i++) {
		board.push_back(temp);
	}
}

void Board::displayBoard() {
	vector<string> multi_layer;
	string layer = "";
	string split = "";

	//Creates Layers that display the characters, and go into a vector
	for (int i = 0; i < board.size(); i++) {
		for (int j = 0; j < board.size() - 1; j++) {
			layer += " ";
			layer += board[j][i];
			layer += " |";
		}
		layer += " ";
		layer += board[board.size() - 1][i];
		layer += " ";
		multi_layer.push_back(layer);
		layer = "";
	}
	
	//Creates the splits that go in between layers
	for (int i = 0; i < board.size() - 1; i++) {
		split += "---+";
	}
	split += "---";

	//Creates the X indexes above the board
	cout << "\t      X" << endl << endl;
	cout << "\t  ";
	for (int i = 0; i < board.size(); i++) {
		cout << i << "   ";
	}
	cout << endl << endl;


	//Displays the Y indexes and the board
	int y_counter = 0;
	for (int i = 0; i < (board.size() * 2) - 1 ; i++) {
		if (i % 2 == 0) {
			
			//Always displays the character 'Y' in the 3rd loop
			if (i == 2) {
				cout << "Y";
			}
			else {
				cout << " ";
			}

			//Displays the corresponding layer
			cout << "   " << y_counter << "\t ";
			cout << multi_layer[y_counter] << endl;
			y_counter++;
		}
		//Adds the split between layers
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
* 
* Notes & Examples
			 X
		 0   1   2

   0	 _ | _ | _
		---+---+---
Y  1 	 _ | _ | _ 
		---+---+---
   2	 _ | _ | _

   3, 5

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