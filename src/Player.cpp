#include "Player.h"
#include <iostream>

void create_players(Player& player1, Player& player2){
    std::string name;
    char symbol;

    std::cout<<"Entrez votre nom :"<<std::endl;
    std::cin>>player1.name;

    std::cout<<"Entrez votre caractère (soit X ou O):"<<std::endl;
    std::cin>>player1.symbol;

    while(player1.symbol != 'X' && player1.symbol != 'O'){
        std::cout << "Symbole invalide, veuillez entrer 'X' ou 'O' : ";
        std::cin >> symbol;
    }

    player1 = Player(player1.name, player1.symbol);

    std::cout<<"Entrez votre nom :"<<std::endl;
    std::cin>>player2.name;

    player2.symbol = (player1.symbol == 'X')?('O'):('X');

    player2 = Player(player2.name,player2.symbol);

}