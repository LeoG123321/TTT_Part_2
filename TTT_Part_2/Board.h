#pragma once
#include <string>
#include <vector>
using namespace std;
class Board
{
private:
	vector<vector<char>> board;
	int board_size;
public:
	Board(int size);

	void displayBoard();

	char getCell(int x_coordinate, int y_coordinate);
	void setCell(int x_coordinate, int y_coordinate, char character);

	int get_size();
};

