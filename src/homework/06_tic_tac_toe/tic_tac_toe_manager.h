//h
#include "tic_tac_toe.h"
#include<ostream>
#include<istream>
#include<vector>
#ifndef TICTACTOEMANAGER_H
#define TICTACTOEMANAGER_H

class TicTacToeManager {
public:
    void save_game(TicTacToe b);
    void get_winner_total(int& o, int& w, int& t);
private:
    std::vector<TicTacToe> games{};
    void update_winner_count(std::string winner);
    int x_win = 0;
    int o_win = 0;
    int ties = 0;
};

#endif