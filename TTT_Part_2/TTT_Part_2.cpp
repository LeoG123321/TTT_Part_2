#include "Gameplay.h"  
#include "computer_player.h"
#include "human_player.h"
#include <iomanip>
#include <iostream>
#include "Board.h"

using namespace std;

int main()
{
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

	if (main_menu_input == 1 || main_menu_input == 2) {
		int size_input;
		cout << endl << endl;

	size_try_again:
		cout << "Please Enter the Size of the Board (N,N):" << endl
			<< "Example Input: 3" << endl
			<< "Result: Size = 3x3 Board" << endl
			<< "Input Range > 2" << endl;

		cin >> size_input;
		if (size_input > 2) {
			if (main_menu_input == 1) {
				human_player player_1('X');
				player* player_1_ptr = &player_1;
				human_player player_2('O');
				player* player_2_ptr = &player_2;
				game_ptr = new Gameplay(player_1_ptr, player_2_ptr, size_input);
				game_ptr->gameRun();
			}
			else if (main_menu_input == 2) {
				human_player player_1('X');
				player* player_1_ptr = &player_1;
				computer_player player_2('O');
				player* player_2_ptr = &player_2;
				game_ptr = new Gameplay(player_1_ptr, player_2_ptr, size_input);
				game_ptr->gameRun();
			}
		}
		else {
			cout << "Error: Input Invalid. Try Again:" << endl;
			goto size_try_again;
		}
	}
	else {
		cout << "Error: Input Invalid. Try Again:" << endl;
		goto main_menu_input_retry;
	}

	/*
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
		return 0;
}
