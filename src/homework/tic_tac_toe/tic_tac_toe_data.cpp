//cpp
#include "tic_tac_toe_data.h"


void TicTacToeData::save_games(const std::vector<std::unique_ptr<TicTacToe>>& games)
{
    ofstream out_file;
    out_file.open("tictactoe.txt");
    if(out_file.is_open())
    {
        for(auto& game: games)
        {
            for(auto& c : game->get_pegs())
            {
                out_file<<c;
            }

            out_file<<game->get_winner()<<"\n";
        }


    }
    
    out_file.close();

}

std::vector<std::unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
    vector<unique_ptr<TicTacToe>> boards;
    ifstream read_file;
    read_file.open("tictactoe.txt");
    string line;

    if(read_file.is_open())
    {
        while (getline(read_file, line))
        {
            vector<string> pegs;
            for (auto i = 0; i < (line.size() - 1); i++)
            {
                string ch(1, line[i]);
                pegs.push_back(ch);

            }
            string winner{line[line.size()-1]};
            unique_ptr<TicTacToe> board;

            if(pegs.size() == 9)
            {
                board = make_unique<TicTacToe3>(pegs, winner);


            }
            else if(pegs.size() == 16)
            {
                board = make_unique<TicTacToe4>(pegs, winner);

            }
            boards.push_back(std::move(board));

        }
        read_file.close();

    }
    return boards;


}

