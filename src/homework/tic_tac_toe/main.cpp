#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include<cctype>
using std::cout; using std::cin; using std::string;

int main() 
{
	TicTacToe game;
	TicTacToeManager manager;
	string first_player;
	int w;
	int o;
	int t;
	char choice;

	do
	{
		
	cout<<"Enter first player (X or O)";
	cin>>first_player;
	
	for(auto &u : first_player)//makes sure the user input is correct even if they dont capatilize 
	{
		u = toupper(u);
	}
		do
		{
			if(first_player != "X" && first_player != "O")//validates input from user and loops if incorrect
			{
				cout<<"Invalid Input\n";
				cout<<"Enter first player (X or O)";
				cin>>first_player;
				for(auto &u : first_player)
				{
					u = toupper(u);
				}

			}
			

			


		}while(first_player != "X" && first_player != "O");
	
	
	

	
	game.start_game(first_player);

	while(game.game_over() == false)
	{
		cin>>game;
		cout<<game;
	}

	cout<<"\nWinner: "<<game.get_winner()<<"\n";

	manager.save_game(game);//saves game to manager

	manager.get_winner_total(o, w, t);//displays the running total of the games played
	
	cout<<"Type Y to play again: ";
	cin>>choice;
	
	}while(choice == 'Y' || choice == 'y');

	cout<<manager; // displays all games the player has played before quiting

	cout<<"Exiting game...."<<"\n";

	return 0;
}