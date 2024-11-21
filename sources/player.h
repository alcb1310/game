#ifndef PLAYER_H_
#define PLAYER_H_

#include <raylib.h>
#include <sys/types.h>

typedef struct Player {
  uint size;
  int speed;

  Vector2 position;
} Player;

Player create_player(uint size);
void draw_player(Player *player);
void move_player(Player *player); 

void validate_collisions(Player *player);

#endif // !PLAYER_H_
