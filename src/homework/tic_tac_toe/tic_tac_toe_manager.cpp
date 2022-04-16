//cpp
#include "tic_tac_toe_manager.h"







void TicTacToeManager::save_game(unique_ptr<TicTacToe>& game)
{
    update_winner_count(game->get_winner());
    games.push_back(std::move(game));
}


void TicTacToeManager::get_winner_total(int& o, int& w, int&t)
{
    o = o_win;
    w = x_win;
    t = ties;

    cout<<"X Wins: "<<w<<"\n";
    cout<<"O Wins: "<<o<<"\n";
    cout<<"Ties: "<<t<<"\n";


}



void TicTacToeManager::update_winner_count(string winner)
{
    if(winner == "X")
    {
        x_win++;

    }
    else if(winner == "O")
    {
        o_win++;
    }
    else
    {
        ties++;
    }

}


ostream& operator<<(std::ostream& out, const TicTacToeManager& Manager)
{
    for(auto &game: Manager.games)
    {
        out<<*game;
        out<<"\nWinner: "<<game->get_winner()<<"\n";

    }

    return out;
}