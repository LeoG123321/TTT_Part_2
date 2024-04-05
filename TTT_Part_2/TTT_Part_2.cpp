#include "Gameplay.h"  
#include "computer_player.h"
#include "human_player.h"
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	Gameplay game;

	int main_menu_input;

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
		game.gameRun(player_1_ptr, player_2_ptr);
	}
	else if (main_menu_input == 2) {
		human_player player_1('X');
		player* player_1_ptr = &player_1;
		computer_player player_2('O');
		player* player_2_ptr = &player_2;
		game.gameRun(player_1_ptr, player_2_ptr);
	} 
	else {
		cout << "Error: Input Invalid. Try Again:" << endl;
		goto main_menu_input_retry;
	}

	return 0;
}
