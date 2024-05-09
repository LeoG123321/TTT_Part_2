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

	char getCell(int x_coordinate, int y_coordinate);
	void setCell(int x_coordinate, int y_coordinate, char character);
};

