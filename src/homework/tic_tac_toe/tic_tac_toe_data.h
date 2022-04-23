#include "tic_tac_toe.h"
#include <fstream>
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"
using std::ofstream; using std::ifstream;

//Header Guards
#ifndef TIC_TAC_TOE_DATA_H
#define TIC_TAC_TOE_DATA_H

class TicTacToeData
{
public:
    void save_games(const std::vector<std::unique_ptr<TicTacToe>>& games);
    std::vector<std::unique_ptr<TicTacToe>>get_games();



};







#endif