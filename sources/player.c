#include <raylib.h>

#include "constants.h"
#include "player.h"

Player create_player(uint size) {
  return (Player){
      .size = size,
      .position = (Vector2){10, SCREEN_HEIGHT - size - 10},
      .speed = 5,
  };
}

void draw_player(Player *player) {
  DrawRectangle(player->position.x, player->position.y, player->size,
                player->size, RED);
}

void move_player(Player *player) {
  if (IsKeyDown(KEY_RIGHT)) {
    player->position.x += player->speed;
  }

  if (IsKeyDown(KEY_LEFT)) {
    player->position.x -= player->speed;
  }
}
