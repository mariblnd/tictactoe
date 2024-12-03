#include "Menu.h"
#include <iostream>

bool menu(){
    
    std::cout << "CHOISISSEZ UNE VERSION:\n";
    std::cout << "[1] IA\n"
              << "[2] 2 Joueurs\n";
              
    std::string input;
    std::getline(std::cin, input);

    while(input != "1" && input != "2") {
        std::cout << "Invalide !\n\n";

        std::cout << "CHOISISSEZ UNE VERSION:\n";
        std::cout << "[1] IA\n"
                << "[2] 2 Joueurs\n";
        std::getline(std::cin, input);
    }

    if (input == "1") {
        return true;
    } else if (input == "2") {
        return false;
    }
}