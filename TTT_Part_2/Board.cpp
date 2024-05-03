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
	string layer = "";
	string split = "";
	for (int i = 0; i < board.size() - 1; i++) {
		layer += " _ |";
		split += "---+";
	}
	layer += " _ ";
	split += "---";

	cout << "\t\t\t X" << endl;
	cout << "\t\t ";
	for (int i = 0; i < board.size() - 1; i++) {
		cout << i << "   ";
	}
	cout << endl << endl;

	for (int i = 0; i < (board.size() * 2) - 1 ; i++) {
		if 
	}

}
// for (i = 0; i < sqrt(board.size()); i++){
//	*text stuff*
//		for (j = 0
char Board::getCell(int cell) {
	return cells[cell];
}

void Board::setCell(int cell, char num) {
	cells[cell] = num;
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