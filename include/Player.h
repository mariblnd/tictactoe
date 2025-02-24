#pragma once

#include <string>

struct Player {
    std::string name;   
    char symbol;        

    Player(const std::string& playerName, char playerSymbol)
        : name(playerName), symbol(playerSymbol) {}

};

void create_players_IA(Player& player1, Player& player2);
void create_players(Player& player1, Player& player2);


