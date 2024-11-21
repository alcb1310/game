#include <raylib.h>

#include "constants.h"
#include "player.h"

Player create_player(uint size) {
  return (Player){
      .size = size,
      .position = (Vector2){10, SCREEN_HEIGHT - size - 10},
  };
}

void draw_player(Player *player) {
  DrawRectangle(player->position.x, player->position.y, player->size,
                player->size, RED);
}
