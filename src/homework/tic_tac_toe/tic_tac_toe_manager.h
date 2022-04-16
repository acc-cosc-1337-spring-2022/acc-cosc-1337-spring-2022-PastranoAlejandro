//h
#include "tic_tac_toe.h"




//Header Guards
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager
{

public:
    void save_game(unique_ptr<TicTacToe>& game);
    void get_winner_total(int& o, int& w, int&t);

    friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& Manager);

private:
    vector<unique_ptr<TicTacToe>> games;
    int x_win = 0;
    int o_win = 0;
    int ties = 0;

    void update_winner_count(string winner);






};



#endif