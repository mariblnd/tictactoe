#include "GameBoard.h"
#include <iostream>

void initialize_game_board(GameBoardArray& board) {
    // Remplir le tableau avec les caractères '1', '2', ..., '9'
    for (int i = 0; i < 9; ++i) {
        board[i] = '1' + i; // '1' + i donne '1', '2', ..., '9'
    }
}

void draw_game_board(const GameBoardArray& board) {
    for (int i = 0; i < 3; ++i) { 
        for (int j = 0; j < 3; ++j) { 
            int index = i * 3 + j; // Calculer l'index
            std::cout << " " << board[index] << " "; // Afficher la case (numéro ou symbole)
            if (j < 2) {
                std::cout << "|"; // Ajouter un séparateur entre les colonnes
            }
        }
        std::cout << std::endl; // Nouvelle ligne après chaque rangée
        if (i < 2) {
            std::cout << "-----------" << std::endl; // Ajouter une ligne de séparation entre les rangées
        }
    }
}
