#pragma once
#include <string>
using namespace std;
class Board
{
private:
	char cells[10];

public:
	Board();

	void displayBoard();

	char getCell(int);
	void setCell(int, char);
};

