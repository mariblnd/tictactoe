#pragma once

#include<array>

using GameBoardArray = std::array<char, 9>;
void initialize_game_board(GameBoardArray& board);
void draw_game_board( const GameBoardArray& board);

