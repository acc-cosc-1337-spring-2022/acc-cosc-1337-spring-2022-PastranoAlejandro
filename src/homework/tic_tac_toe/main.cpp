#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<cctype>
using std::cout; using std::cin; using std::string;

int main() 
{
	unique_ptr<TicTacToe> game;
	TicTacToeManager manager;
	string first_player;
	int w;
	int o;
	int t;
	char choice;
	int board_type = 0;

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
	
	
		cout<<"Enter 3 To play on a 3x3 board and Enter 4 for a 4x4 board\n";
		cin>>board_type;

		while(board_type != 3 && board_type != 4)
		{
			cout<<"Inavlid input, please enter 3 or 4\n";
			cin>>board_type;

		}
		if(board_type == 3)
		{
			game = make_unique<TicTacToe3>();
		}
		else if(board_type == 4)
		{
			game = make_unique<TicTacToe4>();
		}
		else
		{
			cout<<"Invalid Input\n";
		}
	
	

	
	game->start_game(first_player);

	while(game->game_over() == false)
	{
		cin>>*game;
		cout<<*game;
	}


	manager.save_game(game);//saves game to manager

	manager.get_winner_total(o, w, t);//displays the running total of the games played
	
	cout<<"Type Y to play again: ";
	cin>>choice;
	
	}while(choice == 'Y' || choice == 'y');

	cout<<manager; // displays all games the player has played before quiting

	cout<<"Exiting game...."<<"\n";

	return 0;
}