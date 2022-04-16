#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"tic_tac_toe.h"
#include"tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test tic tac toe game over for a tie on 3x3")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe3>();
	game->start_game("X");

	game->mark_board(1);
	REQUIRE(false == game->game_over());
	game->mark_board(2);
	REQUIRE(false == game->game_over());
	game->mark_board(3);
	REQUIRE(false == game->game_over());
	game->mark_board(4);
	REQUIRE(false == game->game_over());
	game->mark_board(5);
	REQUIRE(false == game->game_over());
	game->mark_board(7);
	REQUIRE(false == game->game_over());
	game->mark_board(6);
	REQUIRE(false == game->game_over());
	game->mark_board(9);
	REQUIRE(false == game->game_over());
	game->mark_board(8);
	REQUIRE(true == game->game_over());
	//Testing if winner is C which is a tie
	REQUIRE(game->get_winner() == "C");

}
//HW9 Tie Test Case
TEST_CASE("Test TicTacToe4 Game ending on Tie on a 4x4")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe4>();
	game->start_game("X");

	game->mark_board(1);//Player X
	REQUIRE(false == game->game_over());
	game->mark_board(2);//Player O
	REQUIRE(false == game->game_over());
	game->mark_board(3);
	REQUIRE(false == game->game_over());
	game->mark_board(4);
	REQUIRE(false == game->game_over());
	game->mark_board(7);
	REQUIRE(false == game->game_over());
	game->mark_board(5);
	REQUIRE(false == game->game_over());
	game->mark_board(8);
	REQUIRE(false == game->game_over());
	game->mark_board(6);
	REQUIRE(false == game->game_over());
	game->mark_board(9);
	REQUIRE(false == game->game_over());
	game->mark_board(11);
	REQUIRE(false == game->game_over());
	game->mark_board(10);
	REQUIRE(false == game->game_over());
	game->mark_board(12);
	REQUIRE(false == game->game_over());
	game->mark_board(14);
	REQUIRE(false == game->game_over());
	game->mark_board(13);
	REQUIRE(false == game->game_over());
	game->mark_board(16);
	REQUIRE(false == game->game_over());
	game->mark_board(15);
	REQUIRE(true == game->game_over());
	//Testing if winner is C which is a tie
	REQUIRE(game->get_winner() == "C");


}


//HW 7 TEST CASES
TEST_CASE("Test first player is set to X on 3x3")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe3>();
	game->start_game("X");
	REQUIRE(game->get_player() == "X");
}

TEST_CASE("Test first player is set to O on 3x3")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe3>();
	game->start_game("O");

	REQUIRE(game->get_player() == "O");

}

//HW 9 TEST CASES with 4x4
TEST_CASE("Test first player is set to X on 4x4")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe4>();
	game->start_game("X");
	REQUIRE(game->get_player() == "X");
}

TEST_CASE("Test first player is set to O on 4x4")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe4>();
	game->start_game("O");

	REQUIRE(game->get_player() == "O");
}

//Column wins on a 3x3 or TicTacToe3
TEST_CASE("Test Win by First Column on 3x3")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);//player will be X
	REQUIRE(false == game->game_over());
	game->mark_board(2);//player will be O
	REQUIRE(false == game->game_over());
	game->mark_board(4);//player X
	REQUIRE(false == game->game_over());
	game->mark_board(3);//player O
	REQUIRE(false == game->game_over());
	game->mark_board(7);//player X Should win by first column
	REQUIRE(true == game->game_over());
	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test Win by Second Column on 3x3")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(2);//player will be X
	REQUIRE(false == game->game_over());
	game->mark_board(1);//player will be O
	REQUIRE(false == game->game_over());
	game->mark_board(5);//player X
	REQUIRE(false == game->game_over());
	game->mark_board(3);//player O
	REQUIRE(false == game->game_over());
	game->mark_board(8);//player X wins by second column
	REQUIRE(true == game->game_over());
	REQUIRE(game->get_winner() == "X");


}

TEST_CASE("Test Win by Third Column on 3x3")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(3);//player will be X
	REQUIRE(false == game->game_over());
	game->mark_board(1);//player will be O
	REQUIRE(false == game->game_over());
	game->mark_board(6);//player X
	REQUIRE(false == game->game_over());
	game->mark_board(2);//player O
	REQUIRE(false == game->game_over());
	game->mark_board(9);//player X wins by third column
	REQUIRE(true == game->game_over());
	REQUIRE(game->get_winner() == "X");

}

//Column wins on TicTacToe4 or 4x4
TEST_CASE("Test Win by First Column on 4x4")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(1);//player will be X
	REQUIRE(false == game->game_over());
	game->mark_board(14);//player will be O
	REQUIRE(false == game->game_over());
	game->mark_board(5);//player X
	REQUIRE(false == game->game_over());
	game->mark_board(2);//player O
	REQUIRE(false == game->game_over());
	game->mark_board(9);//player X
	REQUIRE(false == game->game_over());
	game->mark_board(6);//player will be O
	REQUIRE(false == game->game_over());
	game->mark_board(13);//player will be X wins by first column
	REQUIRE(true == game->game_over());
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test Win by Second Column on 4x4")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(2);//player will be X
	REQUIRE(false == game->game_over());
	game->mark_board(16);//player will be O
	REQUIRE(false == game->game_over());
	game->mark_board(6);//player X
	REQUIRE(false == game->game_over());
	game->mark_board(3);//player O
	REQUIRE(false == game->game_over());
	game->mark_board(10);//player X
	REQUIRE(false == game->game_over());
	game->mark_board(5);//player will be O
	REQUIRE(false == game->game_over());
	game->mark_board(14);//player will be X wins by second column
	REQUIRE(true == game->game_over());
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test Win by Third Column on 4x4")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(3);//player will be X
	REQUIRE(false == game->game_over());
	game->mark_board(16);//player will be O
	REQUIRE(false == game->game_over());
	game->mark_board(7);//player X
	REQUIRE(false == game->game_over());
	game->mark_board(4);//player O
	REQUIRE(false == game->game_over());
	game->mark_board(11);//player X
	REQUIRE(false == game->game_over());
	game->mark_board(2);//player will be O
	REQUIRE(false == game->game_over());
	game->mark_board(15);//player will be X wins by third column
	REQUIRE(true == game->game_over());
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test Win by Fourth Column on 4x4")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(4);//player will be X
	REQUIRE(false == game->game_over());
	game->mark_board(16);//player will be O
	REQUIRE(false == game->game_over());
	game->mark_board(8);//player X
	REQUIRE(false == game->game_over());
	game->mark_board(5);//player O
	REQUIRE(false == game->game_over());
	game->mark_board(12);//player X
	REQUIRE(false == game->game_over());
	game->mark_board(2);//player will be O
	REQUIRE(false == game->game_over());
	game->mark_board(16);//player will be X wins by fourth column
	REQUIRE(true == game->game_over());
	REQUIRE(game->get_winner() == "X");
}

//Row Wins on TicTacToe3 or on a 3x3

TEST_CASE("Test Win by First Row on 3x3")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);//player will be X
	REQUIRE(false == game->game_over());
	game->mark_board(5);//player will be O
	REQUIRE(false == game->game_over());
	game->mark_board(2);//player X
	REQUIRE(false == game->game_over());
	game->mark_board(6);//player O
	REQUIRE(false == game->game_over());
	game->mark_board(3);//player X wins by First Row
	REQUIRE(true == game->game_over());
	REQUIRE(game->get_winner() == "X");


}

TEST_CASE("Test Win by Second Row on 3x3")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(4);//player will be X
	REQUIRE(false == game->game_over());
	game->mark_board(1);//player will be O
	REQUIRE(false == game->game_over());
	game->mark_board(5);//player X
	REQUIRE(false == game->game_over());
	game->mark_board(2);//player O
	REQUIRE(false == game->game_over());
	game->mark_board(6);//player X wins by Second Row
	REQUIRE(true == game->game_over());
	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test Win by Third Row on 3x3")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(7);//player will be X
	REQUIRE(false == game->game_over());
	game->mark_board(1);//player will be O
	REQUIRE(false == game->game_over());
	game->mark_board(8);//player X
	REQUIRE(false == game->game_over());
	game->mark_board(2);//player O
	REQUIRE(false == game->game_over());
	game->mark_board(9);//player X wins by Third Row
	REQUIRE(true == game->game_over());
	REQUIRE(game->get_winner() == "X");

}

//Row wins on TicTacToe4 or on a 4x4
TEST_CASE("Test Win by First Row on 4x4")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(1);//player will be X
	REQUIRE(false == game->game_over());
	game->mark_board(5);//player will be O
	REQUIRE(false == game->game_over());
	game->mark_board(2);//player X
	REQUIRE(false == game->game_over());
	game->mark_board(6);//player O
	REQUIRE(false == game->game_over());
	game->mark_board(3);//Player X
	REQUIRE(false == game->game_over());
	game->mark_board(10);//player O
	REQUIRE(false == game->game_over());
	game->mark_board(4);//Player X wins by first row 
	REQUIRE(true == game->game_over());
	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test Win by Second Row on 4x4")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(5);//player will be X
	REQUIRE(false == game->game_over());
	game->mark_board(13);//player will be O
	REQUIRE(false == game->game_over());
	game->mark_board(6);//player X
	REQUIRE(false == game->game_over());
	game->mark_board(12);//player O
	REQUIRE(false == game->game_over());
	game->mark_board(7);//Player X
	REQUIRE(false == game->game_over());
	game->mark_board(10);//player O
	REQUIRE(false == game->game_over());
	game->mark_board(8);//Player X wins by Second row 
	REQUIRE(true == game->game_over());
	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test Win by Third Row on 4x4")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(9);//player will be X
	REQUIRE(false == game->game_over());
	game->mark_board(8);//player will be O
	REQUIRE(false == game->game_over());
	game->mark_board(10);//player X
	REQUIRE(false == game->game_over());
	game->mark_board(13);//player O
	REQUIRE(false == game->game_over());
	game->mark_board(11);//Player X
	REQUIRE(false == game->game_over());
	game->mark_board(15);//player O
	REQUIRE(false == game->game_over());
	game->mark_board(12);//Player X wins by Third row 
	REQUIRE(true == game->game_over());
	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test Win by Fourth Row on 4x4")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(13);//player will be X
	REQUIRE(false == game->game_over());
	game->mark_board(2);//player will be O
	REQUIRE(false == game->game_over());
	game->mark_board(14);//player X
	REQUIRE(false == game->game_over());
	game->mark_board(10);//player O
	REQUIRE(false == game->game_over());
	game->mark_board(15);//Player X
	REQUIRE(false == game->game_over());
	game->mark_board(11);//player O
	REQUIRE(false == game->game_over());
	game->mark_board(16);//Player X wins by Fourth row 
	REQUIRE(true == game->game_over());
	REQUIRE(game->get_winner() == "X");

}
//Diagonal Wins on TicTacToe3 or 3x3

TEST_CASE("Test Win Diagonally from top left on 3x3")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);//player will be X
	REQUIRE(false == game->game_over());
	game->mark_board(2);//player will be O
	REQUIRE(false == game->game_over());
	game->mark_board(5);//player X
	REQUIRE(false == game->game_over());
	game->mark_board(3);//player O
	REQUIRE(false == game->game_over());
	game->mark_board(9);//player X wins from Diagonal
	REQUIRE(true == game->game_over());
	REQUIRE(game->get_winner() == "X");



}

TEST_CASE("Test Win Diagonally from bottom left on 3x3")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(7);//player will be X
	REQUIRE(false == game->game_over());
	game->mark_board(2);//player will be O
	REQUIRE(false == game->game_over());
	game->mark_board(5);//player X
	REQUIRE(false == game->game_over());
	game->mark_board(4);//player O
	REQUIRE(false == game->game_over());
	game->mark_board(3);//player X wins from Diagonal
	REQUIRE(true == game->game_over());
	REQUIRE(game->get_winner() == "X");

}

//Diagonal Wins on TicTacToe4 or 4x4

TEST_CASE("Test Win by first Diagonal on 4x4")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(1);//player will be X
	REQUIRE(false == game->game_over());
	game->mark_board(2);//player will be O
	REQUIRE(false == game->game_over());
	game->mark_board(6);//player X
	REQUIRE(false == game->game_over());
	game->mark_board(3);//player O
	REQUIRE(false == game->game_over());
	game->mark_board(11);//Player X
	REQUIRE(false == game->game_over());
	game->mark_board(4);//player O
	REQUIRE(false == game->game_over());
	game->mark_board(16);//Player X wins by First Diagonal row 
	REQUIRE(true == game->game_over());
	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test Win by Second Diagonal on 4x4")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(4);//player will be X
	REQUIRE(false == game->game_over());
	game->mark_board(2);//player will be O
	REQUIRE(false == game->game_over());
	game->mark_board(7);//player X
	REQUIRE(false == game->game_over());
	game->mark_board(3);//player O
	REQUIRE(false == game->game_over());
	game->mark_board(10);//Player X
	REQUIRE(false == game->game_over());
	game->mark_board(5);//player O
	REQUIRE(false == game->game_over());
	game->mark_board(13);//Player X wins by Second Diagonal row 
	REQUIRE(true == game->game_over());
	REQUIRE(game->get_winner() == "X");

}

//Test functions with 3x3 or TicTacToe3
TEST_CASE("Test TicTacToe Manager and get_winner function on 3x3")
{
	int o;
	int w;
	int t;

	unique_ptr<TicTacToe> xwin;
	xwin = make_unique<TicTacToe3>();
	TicTacToeManager manager;
	xwin->start_game("X");
	xwin->mark_board(7);//player will be X
	REQUIRE(false == xwin->game_over());
	xwin->mark_board(2);//player will be O
	REQUIRE(false == xwin->game_over());
	xwin->mark_board(5);//player X
	REQUIRE(false == xwin->game_over());
	xwin->mark_board(4);//player O
	REQUIRE(false == xwin->game_over());
	xwin->mark_board(3);//player X wins from Diagonal
	REQUIRE(true == xwin->game_over());
	REQUIRE(xwin->get_winner() == "X");
	manager.save_game(xwin);

	unique_ptr<TicTacToe> owin;
	owin = make_unique<TicTacToe3>();
	owin->start_game("O");
	owin->mark_board(7);//player will be X
	REQUIRE(false == owin->game_over());
	owin->mark_board(2);//player will be O
	REQUIRE(false == owin->game_over());
	owin->mark_board(5);//player X
	REQUIRE(false == owin->game_over());
	owin->mark_board(4);//player O
	REQUIRE(false == owin->game_over());
	owin->mark_board(3);//player O wins from Diagonal
	REQUIRE(true == owin->game_over());
	REQUIRE(owin->get_winner() == "O");
	manager.save_game(owin);

	unique_ptr<TicTacToe> tiegame;
	tiegame = make_unique<TicTacToe3>();
	tiegame->start_game("X");
	tiegame->mark_board(1);//player will be X
	REQUIRE(false == tiegame->game_over());
	tiegame->mark_board(3);//player will be O
	REQUIRE(false == tiegame->game_over());
	tiegame->mark_board(2);//player will be X
	REQUIRE(false == tiegame->game_over());
	tiegame->mark_board(4);//player will be O
	REQUIRE(false == tiegame->game_over());
	tiegame->mark_board(6);//player will be X
	REQUIRE(false == tiegame->game_over());
	tiegame->mark_board(5);//player will be O
	REQUIRE(false == tiegame->game_over());
	tiegame->mark_board(7);//player will be X
	REQUIRE(false == tiegame->game_over());
	tiegame->mark_board(9);//player will be O
	REQUIRE(false == tiegame->game_over());
	tiegame->mark_board(8);//game ends in tie
	REQUIRE(true == tiegame->game_over());
	REQUIRE(tiegame->get_winner() == "C");
	manager.save_game(tiegame);

	manager.get_winner_total(o, w ,t);
	REQUIRE(o == 1);//Player O has atleast one win
	REQUIRE(w == 1);//Player X has atleast one win
	REQUIRE(t == 1);//There is atleast one tie



}

//Test functions with 4x4 or TicTacToe4

TEST_CASE("Test TicTacToe Manager and get_winner function on 4x4")
{
	int o;
	int w;
	int t;

	unique_ptr<TicTacToe> xwin;
	xwin = make_unique<TicTacToe4>();
	TicTacToeManager manager;
	xwin->start_game("X");
	xwin->mark_board(4);//player will be X
	REQUIRE(false == xwin->game_over());
	xwin->mark_board(2);//player will be O
	REQUIRE(false == xwin->game_over());
	xwin->mark_board(7);//player X
	REQUIRE(false == xwin->game_over());
	xwin->mark_board(3);//player O
	REQUIRE(false == xwin->game_over());
	xwin->mark_board(10);//Player X
	REQUIRE(false == xwin->game_over());
	xwin->mark_board(5);//player O
	REQUIRE(false == xwin->game_over());
	xwin->mark_board(13);//Player X wins by Second Diagonal row 
	REQUIRE(true == xwin->game_over());
	REQUIRE(xwin->get_winner() == "X");
	manager.save_game(xwin);

	unique_ptr<TicTacToe> owin;
	owin = make_unique<TicTacToe4>();
	owin->start_game("O");
	owin->mark_board(1);//player will be O
	REQUIRE(false == owin->game_over());
	owin->mark_board(2);//player will be X
	REQUIRE(false == owin->game_over());
	owin->mark_board(6);//player O
	REQUIRE(false == owin->game_over());
	owin->mark_board(3);//player X
	REQUIRE(false == owin->game_over());
	owin->mark_board(11);//Player O
	REQUIRE(false == owin->game_over());
	owin->mark_board(4);//player X
	REQUIRE(false == owin->game_over());
	owin->mark_board(16);//Player O wins by First Diagonal row 
	REQUIRE(true == owin->game_over());
	REQUIRE(owin->get_winner() == "O");
	manager.save_game(owin);

	unique_ptr<TicTacToe> tiegame;
	tiegame = make_unique<TicTacToe4>();
	tiegame->start_game("X");
	tiegame->mark_board(1);//Player X
	REQUIRE(false == tiegame->game_over());
	tiegame->mark_board(2);//Player O
	REQUIRE(false == tiegame->game_over());
	tiegame->mark_board(3);
	REQUIRE(false == tiegame->game_over());
	tiegame->mark_board(4);
	REQUIRE(false == tiegame->game_over());
	tiegame->mark_board(7);
	REQUIRE(false == tiegame->game_over());
	tiegame->mark_board(5);
	REQUIRE(false == tiegame->game_over());
	tiegame->mark_board(8);
	REQUIRE(false == tiegame->game_over());
	tiegame->mark_board(6);
	REQUIRE(false == tiegame->game_over());
	tiegame->mark_board(9);
	REQUIRE(false == tiegame->game_over());
	tiegame->mark_board(11);
	REQUIRE(false == tiegame->game_over());
	tiegame->mark_board(10);
	REQUIRE(false == tiegame->game_over());
	tiegame->mark_board(12);
	REQUIRE(false == tiegame->game_over());
	tiegame->mark_board(14);
	REQUIRE(false == tiegame->game_over());
	tiegame->mark_board(13);
	REQUIRE(false == tiegame->game_over());
	tiegame->mark_board(16);
	REQUIRE(false == tiegame->game_over());
	tiegame->mark_board(15);
	REQUIRE(true == tiegame->game_over());
	REQUIRE(tiegame->get_winner() == "C");
	manager.save_game(tiegame);

	manager.get_winner_total(o, w ,t);
	REQUIRE(o == 1);//Player O has atleast one win
	REQUIRE(w == 1);//Player X has atleast one win
	REQUIRE(t == 1);//There is atleast one tie



}