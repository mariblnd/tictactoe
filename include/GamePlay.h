#ifndef GAME_PLAY
#define GAME_PLAY

#include "GameBoard.h"
#include "Player.h"

void play(GameBoardArray& board, Player player);
bool check_victory(const GameBoardArray& board);

#endif