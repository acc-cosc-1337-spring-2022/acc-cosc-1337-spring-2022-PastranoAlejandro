#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"tic_tac_toe.h"
#include"tic_tac_toe_manager.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test tic tac toe game over for a tie")
{
	TicTacToe game;

	game.mark_board(1);
	REQUIRE(false == game.game_over());
	game.mark_board(2);
	REQUIRE(false == game.game_over());
	game.mark_board(3);
	REQUIRE(false == game.game_over());
	game.mark_board(4);
	REQUIRE(false == game.game_over());
	game.mark_board(5);
	REQUIRE(false == game.game_over());
	game.mark_board(7);
	REQUIRE(false == game.game_over());
	game.mark_board(6);
	REQUIRE(false == game.game_over());
	game.mark_board(9);
	REQUIRE(false == game.game_over());
	game.mark_board(8);
	REQUIRE(true == game.game_over());
	//Testing if winner is C
	REQUIRE(game.get_winner() == "C");

	
}

//HW 7 TEST CASES
TEST_CASE("Test first player is set to X")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.get_player() == "X");
}

TEST_CASE("Test first player is set to O")
{
	TicTacToe game;
	game.start_game("O");
	REQUIRE(game.get_player() == "O");
}

TEST_CASE("Test Win by First Column")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(1);//player will be X
	REQUIRE(false == game.game_over());
	game.mark_board(2);//player will be O
	REQUIRE(false == game.game_over());
	game.mark_board(4);//player X
	REQUIRE(false == game.game_over());
	game.mark_board(3);//player O
	REQUIRE(false == game.game_over());
	game.mark_board(7);//player X Should win by first column
	REQUIRE(true == game.game_over());
	REQUIRE(game.get_winner() == "X");

}

TEST_CASE("Test Win by Second Column")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(2);//player will be X
	REQUIRE(false == game.game_over());
	game.mark_board(1);//player will be O
	REQUIRE(false == game.game_over());
	game.mark_board(5);//player X
	REQUIRE(false == game.game_over());
	game.mark_board(3);//player O
	REQUIRE(false == game.game_over());
	game.mark_board(8);//player X wins by second column
	REQUIRE(true == game.game_over());
	REQUIRE(game.get_winner() == "X");


}

TEST_CASE("Test Win by Third Column")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(3);//player will be X
	REQUIRE(false == game.game_over());
	game.mark_board(1);//player will be O
	REQUIRE(false == game.game_over());
	game.mark_board(6);//player X
	REQUIRE(false == game.game_over());
	game.mark_board(2);//player O
	REQUIRE(false == game.game_over());
	game.mark_board(9);//player X wins by third column
	REQUIRE(true == game.game_over());
	REQUIRE(game.get_winner() == "X");

}

TEST_CASE("Test Win by First Row")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(1);//player will be X
	REQUIRE(false == game.game_over());
	game.mark_board(5);//player will be O
	REQUIRE(false == game.game_over());
	game.mark_board(2);//player X
	REQUIRE(false == game.game_over());
	game.mark_board(6);//player O
	REQUIRE(false == game.game_over());
	game.mark_board(3);//player X wins by First Row
	REQUIRE(true == game.game_over());
	REQUIRE(game.get_winner() == "X");


}

TEST_CASE("Test Win by Second Row")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(4);//player will be X
	REQUIRE(false == game.game_over());
	game.mark_board(1);//player will be O
	REQUIRE(false == game.game_over());
	game.mark_board(5);//player X
	REQUIRE(false == game.game_over());
	game.mark_board(2);//player O
	REQUIRE(false == game.game_over());
	game.mark_board(6);//player X wins by Second Row
	REQUIRE(true == game.game_over());
	REQUIRE(game.get_winner() == "X");

}

TEST_CASE("Test Win by Third Row")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(7);//player will be X
	REQUIRE(false == game.game_over());
	game.mark_board(1);//player will be O
	REQUIRE(false == game.game_over());
	game.mark_board(8);//player X
	REQUIRE(false == game.game_over());
	game.mark_board(2);//player O
	REQUIRE(false == game.game_over());
	game.mark_board(9);//player X wins by Second Row
	REQUIRE(true == game.game_over());
	REQUIRE(game.get_winner() == "X");

}

TEST_CASE("Test Win Diagonally from top left")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(1);//player will be X
	REQUIRE(false == game.game_over());
	game.mark_board(2);//player will be O
	REQUIRE(false == game.game_over());
	game.mark_board(5);//player X
	REQUIRE(false == game.game_over());
	game.mark_board(3);//player O
	REQUIRE(false == game.game_over());
	game.mark_board(9);//player X wins from Diagonal
	REQUIRE(true == game.game_over());
	REQUIRE(game.get_winner() == "X");



}

TEST_CASE("Test Win Diagonally from bottom left")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(7);//player will be X
	REQUIRE(false == game.game_over());
	game.mark_board(2);//player will be O
	REQUIRE(false == game.game_over());
	game.mark_board(5);//player X
	REQUIRE(false == game.game_over());
	game.mark_board(4);//player O
	REQUIRE(false == game.game_over());
	game.mark_board(3);//player X wins from Diagonal
	REQUIRE(true == game.game_over());
	REQUIRE(game.get_winner() == "X");


}

TEST_CASE("Test TicTacToe Manager and get_winner function")
{
	int o;
	int w;
	int t;

	TicTacToe xwin;
	TicTacToeManager manager;
	xwin.start_game("X");
	xwin.mark_board(7);//player will be X
	REQUIRE(false == xwin.game_over());
	xwin.mark_board(2);//player will be O
	REQUIRE(false == xwin.game_over());
	xwin.mark_board(5);//player X
	REQUIRE(false == xwin.game_over());
	xwin.mark_board(4);//player O
	REQUIRE(false == xwin.game_over());
	xwin.mark_board(3);//player X wins from Diagonal
	REQUIRE(true == xwin.game_over());
	REQUIRE(xwin.get_winner() == "X");
	manager.save_game(xwin);

	TicTacToe owin;
	owin.start_game("O");
	owin.mark_board(7);//player will be X
	REQUIRE(false == owin.game_over());
	owin.mark_board(2);//player will be O
	REQUIRE(false == owin.game_over());
	owin.mark_board(5);//player X
	REQUIRE(false == owin.game_over());
	owin.mark_board(4);//player O
	REQUIRE(false == owin.game_over());
	owin.mark_board(3);//player O wins from Diagonal
	REQUIRE(true == owin.game_over());
	REQUIRE(owin.get_winner() == "O");
	manager.save_game(owin);

	TicTacToe tiegame;
	tiegame.start_game("X");
	tiegame.mark_board(1);//player will be X
	REQUIRE(false == tiegame.game_over());
	tiegame.mark_board(3);//player will be O
	REQUIRE(false == tiegame.game_over());
	tiegame.mark_board(2);//player will be X
	REQUIRE(false == tiegame.game_over());
	tiegame.mark_board(4);//player will be O
	REQUIRE(false == tiegame.game_over());
	tiegame.mark_board(6);//player will be X
	REQUIRE(false == tiegame.game_over());
	tiegame.mark_board(5);//player will be O
	REQUIRE(false == tiegame.game_over());
	tiegame.mark_board(7);//player will be X
	REQUIRE(false == tiegame.game_over());
	tiegame.mark_board(9);//player will be O
	REQUIRE(false == tiegame.game_over());
	tiegame.mark_board(8);//game ends in tie
	REQUIRE(true == tiegame.game_over());
	REQUIRE(tiegame.get_winner() == "C");
	manager.save_game(tiegame);

	manager.get_winner_total(o, w ,t);
	REQUIRE(o == 1);//Player O has atleast one win
	REQUIRE(w == 1);//Player X has atleast one win
	REQUIRE(t == 1);//There is atleast one tie



}