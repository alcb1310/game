#ifndef PLAYER_H_
#define PLAYER_H_

#include <raylib.h>
#include <sys/types.h>

typedef struct Player {
  uint size;

  Vector2 position;
} Player;

Player create_player(uint size);
void draw_player(Player *player);

#endif // !PLAYER_H_
