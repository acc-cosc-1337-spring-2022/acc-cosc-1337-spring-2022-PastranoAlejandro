#include "tic_tac_toe.h"
#include<cctype>
using std::cout; using std::cin; using std::string;

int main() 
{
	TicTacToe game;
	string first_player;
	char choice;

	do
	{
		
	cout<<"Enter first player (X or O)";
	cin>>first_player;
	
	for(auto &u : first_player)
	{
		u = toupper(u);
	}
		do
		{
			cout<<"Invalid Input\n";
			cout<<"Enter first player (X or O)";
			cin>>first_player;
			for(auto &u : first_player)
			{
				u = toupper(u);
			}

			


		}while(first_player != "X" && first_player != "O");
	
	
	

	
	game.start_game(first_player);

	int position;
	while(game.game_over() == false)
	{
		cout<<"Enter position [1-9]";
		cin>>position;
		game.mark_board(position);
		game.display_board();
	}

	cout<<"\nWinner: "<<game.get_winner()<<"\n";

	cout<<"Type Y to play again: ";
	cin>>choice;
	
	}while(choice == 'Y' || choice == 'y');

	return 0;
}