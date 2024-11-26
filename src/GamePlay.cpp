#include "GamePlay.h"

#include <iostream>

void play(GameBoardArray& board, Player player) {

    int chosen_case {0};

    do {
        std::cout << "Choisissez une case : ";
        std::cin >> chosen_case;

        if (chosen_case < 1 || chosen_case > 9) {
            std::cout << "Choix invalide ! Veuillez choisir une case entre 1 et 9." << std::endl;
        }
        
        else if (board[chosen_case-1] == 'X' || board[chosen_case-1] > 'O'){
            std::cout << "Choix invalide ! Cette case a déjà choisis par un joueur." << std::endl;
        }

    } while (chosen_case < 1 || chosen_case > 9 || board[chosen_case-1] == 'X' || board[chosen_case-1] > 'O'  );

    board [chosen_case - 1] = player.symbol;

    draw_game_board(board);

}

bool check_victory(const GameBoardArray& board) {

    for (int i = 0; i < 9; i += 3) {
        if (board[i] == board[i + 1] && board[i + 1] == board[i + 2]) {
            return true;
        }
    }

    for (int i = 0; i < 3; ++i) {
        if (board[i] == board[i + 3] && board[i + 3] == board[i + 6]) {
            return true;
        }
    }

    if (board[0] == board[4] && board[4] == board[8]) {
        return true;
    }
    if (board[2] == board[4] && board[4] == board[6]) {
        return true;
    }

    return false; 
}

