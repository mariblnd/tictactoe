#ifndef GAME_PLAY
#define GAME_PLAY

#include "GameBoard.h"
#include "Player.h"

bool is_empty(const GameBoardArray& board, int index);
void play(GameBoardArray& board, Player player);
void play_IA(GameBoardArray& board, Player player);
bool check_victory(const GameBoardArray& board);

#endif