#include "../include/Player.h"
#include "../include/GameBoard.h"
#include "../include/GamePlay.h"
#include "../include/Menu.h"
#include <iostream>

int main() {

    Player player1("",' ');
    Player player2("",' ');

    Player playerIA("",' ');

    bool gameMode = menu();

    if(gameMode){
    
        create_players_IA(player1, player2);
       

        std::cout << "Joueur 1 : " << player1.name << " avec le symbole " << player1.symbol << std::endl;
        std::cout << player2.name << " avec le symbole " << player2.symbol << std::endl;
}

    else {

        
    create_players(player1, playerIA);

    std::cout << "Joueur 1 : " << player1.name << " avec le symbole " << player1.symbol << std::endl;
    std::cout << "Joueur 2 : " << playerIA.name << " avec le symbole " << playerIA.symbol << std::endl; 
    }

    // Game Boart
    GameBoardArray board;
    initialize_game_board(board);
    draw_game_board(board);

    //Game Play
    int counter{0};
    Player current_player("", ' ');
    bool win {false};

    while(win == false && counter<9){

        if(counter % 2 == 0){

            current_player = player1;

        } else {

            current_player = (gameMode) ? player2 : playerIA;
        }
        
        if(current_player.name == "IA"){
            play_IA(board, current_player);
        } else {
            play(board, current_player);
        }

        system("clear");
        draw_game_board(board);

        if (check_victory(board)) {
            win = true;
            std::cout << "Félicitations, " << current_player.name << " a gagné ! 🎊" << std::endl;
        }

        
        counter++;
        
    }

    if(win == false){
        std::cout << "Match Nul 😜" << std::endl;
    }
    
    return 0;
}