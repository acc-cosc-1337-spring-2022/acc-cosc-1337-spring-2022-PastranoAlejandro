#include <string>
#include <vector>
#include<iostream>

using std::ostream; using std::istream; using std::vector; using std::string; using std::cout; using std::cin;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player()const{return player;}
    std::string get_winner(){return winner;}
    friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);
    friend std::istream& operator>>(std::istream& in, TicTacToe& game);


private:
    std::string player;
    std::vector<std::string> pegs{9, " "};
    void set_next_player();
    bool check_board_full();
    void clear_board();
    std::string winner;
    void set_winner();
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();

};








#endif