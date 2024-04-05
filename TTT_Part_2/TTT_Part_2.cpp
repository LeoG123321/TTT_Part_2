#include "Gameplay.h"  
#include "computer_player.h"
#include "human_player.h"
#include <iomanip>
#include <iostream>

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

	char play_again_input = 'y';
	string clear_for_input;

	cout << "Would you like to play Again? y/n" << endl;
	cin >> play_again_input;
	if (play_again_input == 'y') {
		(*game_ptr).board_clear();
		(*game_ptr).gameRun();
	}
		
		/*
			while (play_again_input == 'y')
			cout << "Would you like to play Again? y/n" << endl;
			getline(cin, clear_for_input); //clearing input
			if (play_again_input == 'y') {
				(*game_ptr).board_clear();
				(*game_ptr).gameRun();
			}
		*/
		return 0;
	
}
