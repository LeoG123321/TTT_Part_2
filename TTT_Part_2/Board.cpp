#include "Board.h"
#include <iostream> 
#include <iomanip>

Board::Board() {
	cells[1] = '1';
	cells[2] = '2';
	cells[3] = '3';
	cells[4] = '4';
	cells[5] = '5';
	cells[6] = '6';
	cells[7] = '7';
	cells[8] = '8';
	cells[9] = '9';
}

void Board::displayBoard() {
	//Creating the board in quotes, shifting it over to the right using setw(), and printing it out using cout commands
	cout << "\n";
	cout << setw(70) << " _______________________ \n";
	cout << setw(70) << "|       |       |       |\n";
	cout << setw(48) << "|   " << cells[1] << "   |   " << cells[2] << "   |   " << cells[3] << "   |\n";
	cout << setw(70) << "|_______|_______|_______|\n";
	cout << setw(70) << "|       |       |       |\n";
	cout << setw(48) << "|   " << cells[4] << "   |   " << cells[5] << "   |   " << cells[6] << "   |\n";
	cout << setw(70) << "|_______|_______|_______|\n";
	cout << setw(70) << "|       |       |       |\n";
	cout << setw(48) << "|   " << cells[7] << "   |   " << cells[8] << "   |   " << cells[9] << "   |\n";
	cout << setw(70) << "|_______|_______|_______|\n";
	cout << "\n";
}

char Board::getCell(int cell) {
	return cells[cell];
}

void Board::setCell(int cell, char num) {
	cells[cell] = num;
}