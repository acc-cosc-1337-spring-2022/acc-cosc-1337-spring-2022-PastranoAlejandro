//cpp
#include "tic_tac_toe_manager.h"







void TicTacToeManager::save_game(TicTacToe b)
{
    games.push_back(b);
    update_winner_count(b.get_winner());
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
    for(auto i = 0; i < Manager.games.size(); i++)
    {
        out<<Manager.games[i]<<"\n";
    }

    return out;
}