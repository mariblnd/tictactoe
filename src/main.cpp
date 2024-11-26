#include "../include/Player.h"
#include "../include/GameBoard.h"
#include <iostream>

int main() {
    // Création des joueurs
    Player player1("",' ');
    Player player2("",' ');

    create_players(player1, player2);

    // Affichage des informations des joueurs
    std::cout << "Joueur 1 : " << player1.name << " avec le symbole " << player1.symbol << std::endl;
    std::cout << "Joueur 2 : " << player2.name << " avec le symbole " << player2.symbol << std::endl;

    GameBoardArray board;
    initialize_game_board(board);
    draw_game_board(board);

    return 0;
}