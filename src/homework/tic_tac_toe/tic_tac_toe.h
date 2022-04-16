#include <string>
#include <vector>
#include<iostream>
#include <memory>

using std::ostream; using std::istream; using std::vector; using std::string; using std::cout; using std::cin;
using std::unique_ptr; using std::make_unique;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    TicTacToe(int s) : pegs(s*s, " "){}
    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player()const{return player;}
    std::string get_winner(){return winner;}
    friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);
    friend std::istream& operator>>(std::istream& in, TicTacToe& game);


protected:
    std::vector<std::string> pegs;
    virtual bool check_column_win();
    virtual bool check_row_win();
    virtual bool check_diagonal_win();




private:
    std::string player;
    void set_next_player();
    bool check_board_full();
    void clear_board();
    std::string winner;
    void set_winner();

};








#endif