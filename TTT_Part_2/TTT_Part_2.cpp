//#include "Gameplay.h"  
//#include "computer_player.h"
//#include "human_player.h"
#include <iomanip>
#include <iostream>
#include "Board.h"

using namespace std;

int main()
{
	/*
	int main_menu_input;

	Gameplay* game_ptr;

	cout << "Welcome User!" << endl
		<< "Select Option With the Number Associated." << endl
		<< "Choose the Game to Play Today." << endl << endl
		<< "1 Player vs. Player" << endl
		<< "2 Player vs. Computer" << endl << endl
		<< "Enter Your Game Option: ";

main_menu_input_retry:
	cin >> main_menu_input;

	if (main_menu_input == 1) {
		human_player player_1('X');
		player* player_1_ptr = &player_1;
		human_player player_2('O');
		player* player_2_ptr = &player_2;
		Gameplay game(player_1_ptr, player_2_ptr);
		game_ptr = &game;
		game.gameRun();
	}
	else if (main_menu_input == 2) {
		human_player player_1('X');
		player* player_1_ptr = &player_1;
		computer_player player_2('O');
		player* player_2_ptr = &player_2;
		Gameplay game(player_1_ptr, player_2_ptr);
		game_ptr = &game;
		game.gameRun();
	}
	else {
		cout << "Error: Input Invalid. Try Again:" << endl;
		goto main_menu_input_retry;
	}

	char play_again_input;
	string clear_for_input;

	do {
		cout << "Would you like to play Again? y/n" << endl;
		cin >> play_again_input;
		if (play_again_input == 'y') {
			(*game_ptr).board_clear();
			(*game_ptr).gameRun();
		}
		else if (play_again_input != 'n') {
			cout << "Error: Input is not Valid." << endl << endl;
			play_again_input = 'y';
		}
		else {
			cout << "Goodbye! Have a nice day! :)" << endl;
		}
	} while (play_again_input == 'y');
	*/

	// Testing Board
	Board board(3);
	board.displayBoard();

	Board board2(5);
	board2.displayBoard();

	Board board3(10);
	board3.displayBoard();

		return 0;
}
