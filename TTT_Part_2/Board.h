#pragma once
#include <string>
#include <vector>
using namespace std;
class Board
{
private:
	vector<vector<char>> board;
public:
	Board();

	void displayBoard();

	char getCell(int);
	void setCell(int, char);
};

