#ifndef GAME_H_
#define GAME_H_

#include <sys/types.h>

typedef struct Game {
  uint level;
} Game;

Game create_game(void);
void update_game(Game *game);
#endif // !GAME_H_
