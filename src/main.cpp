#include "../include/Player.h"
#include "../include/GameBoard.h"
#include "../include/GamePlay.h"
#include "../include/Menu.h"
#include <iostream>

int main() {

    Player player1("",' ');
    Player player2("",' ');

    bool gameMode = menu();

    if(gameMode){
    
        create_players_IA(player1, player2);
       

        std::cout << "Joueur 1 : " << player1.name << " avec le symbole " << player1.symbol << std::endl;
        std::cout << player2.name << " avec le symbole " << player2.symbol << std::endl;
}

    else {

        
    create_players(player1, player2);

    std::cout << "Joueur 1 : " << player1.name << " avec le symbole " << player1.symbol << std::endl;
    std::cout << "Joueur 2 : " << player2.name << " avec le symbole " << player2.symbol << std::endl; 
    }

    // Game Boart
    GameBoardArray board;
    initialize_game_board(board);
    draw_game_board(board);

    //Game Play
    int counter{0};
    Player current_player("", ' ');
    bool win {false};

    while(win == false){

        if(counter % 2 == 0){

            current_player = player1;

        } else {

            current_player = player2;
        }

        play(board, current_player);

        if (check_victory(board)) {
            win = true;
            std::cout << "Félicitations, " << current_player.name << " a gagné !" << std::endl;
        }


        counter++;
        
    }

    return 0;
}